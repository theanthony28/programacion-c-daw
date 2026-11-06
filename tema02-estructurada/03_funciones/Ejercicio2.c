#include <stdio.h>

int mayor(int a, int b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}
	
int main() {
	int num1, num2; 

	printf("Introduce ambos números: ");
	scanf_s("%d" "%d", &num1 & num2);

	printf("El mayor es %d\n", (num1, num2));

	return 0;
}