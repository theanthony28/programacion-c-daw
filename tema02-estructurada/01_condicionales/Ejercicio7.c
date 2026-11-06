#include <stdio.h>
#include <math.h>

int main() {
	int raiz = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	float resultado1 = 0;
	float resultado2 = 0;

	printf("Introduce valores para a: \n");
	scanf_s("%d", &a);

	printf("Introduce valores para b: \n");
	scanf_s("%d", &b);

	printf("Introduce valores para c: \n");
	scanf_s("%d", &c);

	raiz = pow(b, 2) - 4 * a * c; 

	if (raiz >= 0) {
		resultado1 = (-b + sqrt(raiz)) / (2 * a);
		resultado2 = (-b - sqrt(raiz)) / (2 * a);

		printf("Los resultados son; %f , %f\n", resultado1, resultado2);
	}

	else {
		printf("No tiene solucion\n");
	}

	return 0;
}