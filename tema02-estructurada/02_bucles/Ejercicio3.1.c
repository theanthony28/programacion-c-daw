#include <stdio.h>

int main() {
    int n = 0;
    // Usamos unsigned long long porque el factorial crece muy rapido
    unsigned long long factorial = 1;

    printf("Introduce un numero entero no negativo n: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Error: debes introducir un numero entero mayor o igual a 0.\n");
        return 1;
    }

    // Calculamos el producto acumulado
    for (int i = 1; i <= n; i++) {
        factorial *= i; // Equivale a: factorial = factorial * i;
    }

    printf("El factorial de %d es: %llu\n", n, factorial);

    return 0;
}