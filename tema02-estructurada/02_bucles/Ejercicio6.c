#include <stdio.h>

int main() {
		int n = 0;
		int	m = 0;
		int num = 0;
		int i = 0;
		int suma = 0;

	printf("Introduce el inicio del rango: ");
	scanf("%d", &n);

	printf("Introduce el final del rango: ");
	scanf("%d", &m);

	printf("Numeros perfectos en el rango [%d, %d]:\n", n, m);

	for (num = n; num <= m; num++) {
		suma = 0;

		for (i = 1; i < num; i++) {
			if (num % i == 0) {
				suma = suma + i;
			}
		}

		if (suma == num) {
			printf("%d ", num);
		}
	}

	return 0;
}