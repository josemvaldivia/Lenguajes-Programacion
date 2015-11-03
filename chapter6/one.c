#include <stdbool.h>
typedef float floating_point;

void test_1(){

	int x = 10;
	int other_x = 15;
	float y = 15.3;
	float z = 15;
	float w = x + other_x;
	z = x + z;
	printf("%f\n", z);
	printf("%f\n", w);
}

/*
void test_2(){

	struct {int x;} a;
	struct {int x;} b;

	a = b;
}*/

void test_3(){
	struct {int x;} tmp_struct;
	typedef struct{int x;} my_struct;
	my_struct a;
	my_struct b;

	a = b;
}

void test_4(){

	int x = 0;
	int y = 10;
	bool boolean;
	boolean = x;
	printf("%d\n", boolean);
	boolean = y;
	printf("%d\n", boolean);

}

void test_5(){
	int x = 10;
	long long int long_x = 2000;
	long_x = x + long_x;
	x = long_x + x;

	printf("%d\n", long_x);
	printf("%d\n", x);

}

void test_6(){
	float my_float = 102.1;
	double double_x = 201.1;
	int int_x = 20;
	double_x = double_x + my_float + int_x;
	printf("%f\n", double_x);
}

int main(int argc, char const *argv[])
{
	test_1();
	test_3();
	test_4();
	test_5();
	test_6();
	return 0;
}