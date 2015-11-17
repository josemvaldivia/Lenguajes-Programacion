int a, b, c;

int fun(){
	a += 10;
	return 1;
}
void main (){
	c = 10;
	a = 10;
	b = a + fun();
	printf("With the function call on the right, ");
	printf(" b is: %d\n", b);
	a = 10;
	b = fun() + a;
	printf("With the function call on the left, ");
	printf(" b is: %d\n", b);
}

/*
El resultado sera 21 y 21 ya que la precedencia de la funcion
hace primero siempre esta funcion antes de hacer cualquier operacion
*/