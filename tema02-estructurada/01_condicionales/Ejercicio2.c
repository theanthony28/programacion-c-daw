#include <stdio.h>

int main() {

	int num = 0;

	printf("Di un numero: \n");
	scanf_s("%d", &num);

	if (num % 2 == 0) {
		
		printf("El numero es par\n");
	}
	else {
		printf("El numero no es par\n");
	}
	return 0;
}