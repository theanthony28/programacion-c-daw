#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char string[20] = "String base";
	char substring[20] = "";
	int posicion = 0;

	printf("Introduce el string base: \n");
	fgets(string, sizeof(string), stdin);

	printf("Introduce el string base: \n");
	scanf_s("%d", &posicion);

	strncpy_s(substring, sizeof(substring),
		string, posicion);

	printf("%s", substring);

	return 0;
}