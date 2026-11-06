#include <stdio.h>

int main() {
    int numero;

    printf("Introduce un numero: ");
    scanf_s("%d", &numero);

    printf("Es par: %d\n", numero % 2 == 0);

    return 0;
}
