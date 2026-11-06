#include <stdio.h>

int main() {
	int i = 0;
	int n = 0;
	int j = 0;
	int num = 0;

	printf("Introduce un número: \n");
	scanf_s("%d", n);

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++) {
			printf("%d", num);
			num++;
		}
		printf("\n");
	}
	return 0;
}