#include <stdio.h>
int fun(int *k) {
	*k += 4;
 	return 3 * (*k) - 1;
}


int main() {
	int i = 10, j = 10, sum1, sum2;
 	sum1 = (i / 2) + fun(&i);
 	sum2 = fun(&j) + (j / 2);
 	printf("%d\n", sum1);
 	printf("%d\n", sum2);
 	return 0;
 }

 /*
 Al igual que C, C++ verificara de izquierda a derecha
 entonces tendremos 46 y 48 de resultado
 */