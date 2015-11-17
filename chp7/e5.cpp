#include <iostream>
using namespace std;

int num;

int fun(){
	num+= 4;
	return num;
}

int main(){
	num = 10;
	int b = fun() + num;
	num = 10; 
	int c = num + fun();
	cout<<b<<endl;
	cout<<c<<endl;

}

/*
	La precedencia esta en la funcion llamara primero
	a la funcion y luego hara la suma
*/