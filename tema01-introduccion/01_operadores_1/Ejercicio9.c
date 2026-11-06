#include <stdio.h>

int main(void) {

	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int total = 0;

	/*    printf("Introduce tres numeros separados por comas: ");
    scanf("%d,%d,%d", &num1, &num2, &num3);		*/

	printf("Introduce primer número: ");
	scanf_s("%d", &num1);

	printf("Introduce segundo número: ");
	scanf_s("%d", &num2);

	printf("Introduce tercer número: ");
	scanf_s("%d", &num3);

	total = num1 * num2 * num3;

	printf("%d\n", total);

	return 0;
}