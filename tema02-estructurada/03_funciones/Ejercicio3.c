#include <stdio.h>

int cuadrado(int n) {
	return n * n;
}

int main() {
	int n = 0;

	printf("Introduce un número cualquiera: ");
	scanf_s("%d", &n);

	printf("%d\n", cuadrado(n));

	return 0;
}