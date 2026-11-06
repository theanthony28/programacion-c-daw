#include <stdio.h>
#include <stdlib.h>

int main() {
	int acumuladora = 0;
	int n = 2; 

	for (int i = 0; i <= n; i++) {
		acumuladora = 2 * i + 5;
	}

	printf("%d", acumuladora);

	return 0;
}