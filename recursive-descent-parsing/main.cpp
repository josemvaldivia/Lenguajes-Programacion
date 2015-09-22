#include <stdio.h>
#include <ctype.h>
#include <iostream>
using namespace std;
/* Global declarations */
/* Variables */
int charClass;
char lexeme [100];
char nextChar;
int lexLen;
int token;
int nextToken;
FILE *in_fp, *fopen();

/* Function declarations */
void addChar();
void getChar();
void term();
void factor();
void error();
void boolexpr();
void statement();
void getNonBlank();
int lex();
/* Character classes */
#define LETTER 0
#define DIGIT 1
#define UNKNOWN 99
#define NOT_VALID 100
#define IF_CODE 200
#define ELSE_CODE 201
/* Token codes */
#define INT_LIT 10
#define FLOAT 12
#define IDENT 11
#define ASSIGN_OP 20
#define ADD_OP 21
#define SUB_OP 22
#define MULT_OP 23
#define DIV_OP 24
#define LEFT_PAREN 25
#define RIGHT_PAREN 26
#define FLOAT_POINT 27
void error(){
	cout<<"error";
}
/* 
main() {
Open the input data file and process its contents 
if
((in_fp = fopen("front.in", "r")) == NULL)
printf("ERROR - cannot open front.in \n");
else
{
getChar();
do
{
lex();
}
while
(nextToken != EOF);
}
}
*/

/*****************************************************/
/* lookup - a function to lookup operators and parentheses
and return the token */
int lookup(char ch) {
switch (ch) {
	case '(':
		addChar();
		nextToken = LEFT_PAREN;
		break;
	case ')':
		addChar();
		nextToken = RIGHT_PAREN;
		break;
	case '+':
		addChar();
		nextToken = ADD_OP;
	break;
	case '-':
		addChar();
		nextToken = SUB_OP;
		break;
	case '*':
		addChar();
		nextToken = MULT_OP;
		break;
	case '/':
		addChar();
		nextToken = DIV_OP;
		break;
	case '.':
		std::cout<<"puntito";
		addChar();
		nextToken = FLOAT;
		break;
	default:
		addChar();
		nextToken = EOF;
		break;
	}
	return
	nextToken;
}
/*****************************************************/
/* addChar - a function to add nextChar to lexeme */
void addChar() {
	if (lexLen <= 98) {
		lexeme[lexLen++] = nextChar;
		lexeme[lexLen] = 0;
		}
	else
		printf("Error - lexeme is too long \n");
	}
/*****************************************************/
/* getChar - a function to get the next character of
input and determine its character class */
void getChar() {
	if((nextChar = getc(in_fp)) != EOF) {
		if(isalpha(nextChar))
			charClass = LETTER;
		else if(isdigit(nextChar))
			charClass = DIGIT;
		else
			if (nextChar == '.')
				charClass = FLOAT;
			else
				charClass = UNKNOWN;
		}
	else
		charClass = EOF;
	}
/*****************************************************/
/* getNonBlank - a function to call getChar until it
returns a non-whitespace character */
void getNonBlank() {
	while (isspace(nextChar))
		getChar();
}

int lex() {
	lexLen = 0;
	getNonBlank();
	switch (charClass) {
	/* Parse identifiers */
		case LETTER:
			addChar();
			getChar();
			while (charClass == LETTER || charClass == DIGIT) {
				addChar();
				getChar();
			}
		nextToken = IDENT;
		break;
/* Parse integer literals */
		case DIGIT:{
			addChar();
			getChar();
			bool floating = false;
			bool find_char = false;
			while(charClass == DIGIT || charClass == FLOAT || charClass == LETTER ) {
				while(charClass == LETTER){
					find_char = true;
					addChar();
					getChar();
				}
				if (charClass == FLOAT)
					floating = true;
				addChar();
				getChar();
			}
			if (find_char)
				nextToken = NOT_VALID;
			else
				if (floating)
					nextToken = FLOAT;
				else
					nextToken = INT_LIT;
			break;
		}
		case FLOAT:
		{
			addChar();
			getChar();
			bool find_char = false;
			while(charClass == DIGIT || charClass == FLOAT || charClass == LETTER ) {
				while(charClass == LETTER){
					find_char = true;
					addChar();
					getChar();
				}
			}
			if (find_char)
				nextToken = NOT_VALID;
			else
				nextToken = FLOAT;
			break;

		}
/* Parentheses and operators */
		case UNKNOWN:
			lookup(nextChar);
			getChar();
			break;
/* EOF */
		case EOF:
			nextToken = EOF;
			lexeme[0] = 'E';
			lexeme[1] = 'O';
			lexeme[2] = 'F';
			lexeme[3] = 0;
			break;
	} /* End of switch */
printf("Next token is: %d, Next lexeme is %s\n",
		nextToken, lexeme);
return nextToken;
} /* End of function lex */


/* expr
 Parses strings in the language generated by the rule:
 <expr> -> <term> {(+ | -) <term>}
 */
void expr() {
 	printf("Enter <expr>\n");
	/* Parse the first term */
 	term();
	/* As long as the next token is + or -, get
	 the next token and parse the next term */
	 while (nextToken == ADD_OP || nextToken == SUB_OP) {
	 	lex();
	 	term();
	 }
	 printf("Exit <expr>\n");
} /* End of function expr */

/* term
 Parses strings in the language generated by the rule:
 <term> -> <factor> {(* | /) <factor>)
 */
void term() {
	 printf("Enter <term>\n");
	/* Parse the first factor */
	 factor();
	/* As long as the next token is * or /, get the
	 next token and parse the next factor */
	 while (nextToken == MULT_OP || nextToken == DIV_OP) {
		 lex();
		 factor();
	 }
	 printf("Exit <term>\n");
} /* End of function term */

 /* factor
 Parses strings in the language generated by the rule:
 <factor> -> id | int_constant | ( <expr )
 */
void factor() {
	 printf("Enter <factor>\n");
	/* Determine which RHS */
	 if (nextToken == IDENT || nextToken == INT_LIT || nextToken == FLOAT)
		/* Get the next token */
	 	lex();
		/* If the RHS is ( <expr>), call lex to pass over the
		 left parenthesis, call expr, and check for the right
		 parenthesis */
	 else {
	 	if (nextToken == LEFT_PAREN) {
	 		lex();
	 		expr();
	 		if (nextToken == RIGHT_PAREN)
	 			lex();
	 		else
	 			error();
	 	} /* End of if (nextToken == ... */
		/* It was not an id, an integer literal, or a left
	 	parenthesis */
	 	else
	 		error();
	 } /* End of else */
	 printf("Exit <factor>\n");;
} /* End of function factor */

int main(){
	if ((in_fp = fopen("front.in", "r")) == NULL)
		printf("ERROR - cannot open front.in \n");
	else {
		getChar();
		do {
			lex();
			expr();
		}
		while (nextToken != EOF);
	}
}