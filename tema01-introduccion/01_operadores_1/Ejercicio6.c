#include <stdio.h>

int main() {
	int horas=0, minutos=0, totalMinutos=0;

	printf("Introduce las horas: ");
	scanf_s("%d", &horas);

	printf("Introduce los minutos: ");
	scanf_s("%d", &minutos);

	totalMinutos = horas * 60 + minutos;
	printf("El total es de %d minutos. \n", totalMinutos);

	return 0;
}