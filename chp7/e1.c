
int fun(int *k) {
	*k += 4;
 	return 3 * (*k) - 1;
}


void main() {
	int i = 10, j = 10, sum1, sum2;
 	sum1 = (i / 2) + fun(&i);
 	sum2 = fun(&j) + (j / 2);
 	printf("%d\n", sum1);
 	printf("%d\n", sum2);
 }

/*
	En esto vemos el side effect de una funcion,
	por ende sum1 y sum2 son diferentes (uno sale 46 y otro 48)
	41, en C se hará todo de izquierda a derecha, es por eso que
	sum1 sera al final 5 + 41 y sum2 41+7 (en sum2) j ya fue alterado
	por fun
*/