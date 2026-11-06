#include <stdio.h>

int sumar(int num1, int num2) {

	return num1 + num2;
}

int main() {
	int num1, num2, resultado;

	printf("Introduce el primer número: ");
	scanf_s("%d", &num1);

	printf("Introduce el segundo número: ");
	scanf_s("%d", &num2);

	resultado = sumar(num1, num2);

	printf("El resultado es : %d\n", resultado);

	return 0;
}
	
