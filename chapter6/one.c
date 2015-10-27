typedef floating_point float

void test_1(){

	int x = 10;
	float y = 15.3;
	float z = 15;
	float w = x + y;
	float z = x + z;
	printf(w, '%d');
}

void test_2(){

	struct {int x;} a;
	struct {int x;} b;

	a = b;
}
void test_3(){
	struct {int x;} tmp_struct;
	typedef my_struct tmp_struct;

}