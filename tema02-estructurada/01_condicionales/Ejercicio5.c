#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

	float x = 0;
	float y = 0;
	
	printf("Introduce tus coordenadas: \n");
	scanf_s("d", &x, &y);

	if (x <= 0 && y >= 0) {
		printf("Estas en el cuadrante II \n");
	}
	else if (x >= 0 && y >= 0) {
		printf("Estas en el cuandrante I\n");
	}

	else if (x <= 0 && y >= 0) {
		printf("Estas en el cuadrante IV\n");
	}

	else {
		printf("Estas en el cuadrante III\n");
	}
	return 0;
	}