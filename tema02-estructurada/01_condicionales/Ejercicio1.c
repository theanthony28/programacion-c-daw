#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int aux = 0;


	aux = num1;
	num1 = num2;
	num2 = aux;

	if (num2 > num1) {
		aux = num1;
		num1 = num2;
		num2 = aux;
	}

	if (num1 >= num2 && num1 >= num3) {
		if (num3 > num2) {
			aux = num3;
			num3 = num2;
			num2 = aux;
		}

		else if (!(num1 >= num2 && num1 >= num3) (num2 >= num1 && num2 >= num3)) {
			aux = num2;
			num2 = num1;
			num1 = aux;

			printf("%d %d %d", num1, num2, num3);
		}
		else {
			aux = num3;
			num3 = num1;
			num1 = aux;
		}
		return 0;
	}
}