#include <stdio.h>

int main() {
	int n = 0;
	int original = 0;
	int	invertido = 0;
	int	resto = 0;

	printf("Introduce un numero: ");
	scanf("%d", &n);

	original = n;

	while (n > 0) {
		resto = n % 10;
		invertido = invertido * 10 + resto;
		n = n / 10;
	}

	if (original == invertido) {
		printf("El numero es capicua.\n");
	}
	else {
		printf("El numero no es capicua.\n");
	}

	return 0;
}