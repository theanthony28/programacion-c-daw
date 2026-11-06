

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
	int suma = 0;
	int n = 10;

	for (int i = 0; i <= n; i++) {
		printf("%d", i);
		suma += 1;
	}
	printf("\n");
	printf("Suma total : %d", suma);

	return 0;

}