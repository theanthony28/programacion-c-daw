#include <stdio.h>

int main() {
	int suma = 0;
	int n = 10;

	//for (int i = n; i>=1, i--)

	for (int i = 0; i <= n; i++) {
		if (i % 2 != 0) {
			printf("%d", i);
			suma += 1;
		}
	}
	printf("\n");
	printf("Suma total : %d", suma);

	return 0;
}