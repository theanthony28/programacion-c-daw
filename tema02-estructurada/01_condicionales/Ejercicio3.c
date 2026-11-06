/*Realiza un programa que compruebe si un año introducido por teclado es
bisiesto o no */

// Un año es bisiesto si tiene 366 días, lo que ocurre cada 4 años


#include <stdio.h>
#include <stdlib.h>
int main() {
	int anio = 0;

	printf("Di un anio: ");
	scanf_s("%d,", &anio);

	if ((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0) {
		printf("Anio es bisiesto");
	}

	else {
		printf("No es bisiesto");
	}

	return 0;

}

