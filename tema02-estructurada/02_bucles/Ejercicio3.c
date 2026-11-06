#include <stdio.h>
#include <stdlib.h>

int main() {
	int acumuladora = 1;
	int n = 10;

	for (int i = 1; i <= n, i++) {
		acumuladora *= i;

	}
	printf("\n");
	printf("Factorial: % d", acumuladora);
	return 0;
}