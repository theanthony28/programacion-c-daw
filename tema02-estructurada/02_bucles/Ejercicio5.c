#include <stdio.h>

int main() {
	int acumuladora = 1;
	int n = 6;

	for (int i = 0; i <= n, i++) {
		if (n % i == 0) {
			acumuladora += i;
		}
	}
	if (n == acumuladora) {
		printf("Es perfecto\n");
	}

	else {
		printf("No es perfecto\n");
	}

	printf("\n");
	printf("Factorial: % d", acumuladora);

	return 0;

}