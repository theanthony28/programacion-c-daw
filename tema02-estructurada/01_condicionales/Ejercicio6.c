#include <stdio.h>
#include <stdlib.h>

int main() {
	int mates = 0;
	int fisica = 0;
	int dibTecnico = 0;

	printf("Introduce tu nota de mates\n");
	scanf_s("%d", &mates);
	printf("Introduce tu nota de fisica\n");
	scanf_s("%d", &fisica);
	printf("Introduce tu nota de dibujo tecnico\n");
	scanf_s("%d", &dibTecnico);

	if (mates >= 65 && fisica >= 55 && dibTecnico >= 50 &&
		(mates + fisica + dibTecnico > 180 || mates + fisica > 150))
		printf("Has aprobado\n");

	else {
		printf("A la calle");
	}
}