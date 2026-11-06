#include <stdio.h>

int main(void) {

	float manzanas1 = 0;
	float manzanas2 = 0;
	float totalManzanas = 0;
	float peras1 = 0;
	float peras2 = 0;
	float totalPeras = 0;
	float total = 0;

	printf("Introduce el número de kilos de manzanas vendidas el primer trimestre: ");
	scanf_s("%f", &manzanas1);

	printf("Introduce el número de kilos de manzanas vendidas en el segundo trimestre: ");
	scanf_s("%f", &manzanas2);

	printf("Introduce el número de kilos de peras vendidas en el primer trimestre: ");
	scanf_s("%f", &peras1);

	printf("Introduce el número de kilos de peras vendidas en el segundo trimestre: ");
	scanf_s("%f", &peras2);

	totalManzanas = (manzanas1 + manzanas2) * 2.35;

	totalPeras = (peras1 + peras2) * 1.95;

	total = totalManzanas + totalPeras;

	printf("El importe total anual es: %.2f euros\n", total);

	return 0;
}