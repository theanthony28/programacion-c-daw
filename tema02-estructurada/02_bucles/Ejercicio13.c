#include <stdio.h>

int main() {
	int n = 0;
	int i = 0;
	int j = 0;

	printf("Introduce un numero: \n");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++) {
			printf("%d", i);
		}
		printf("\n");
	}
	return 0;
}