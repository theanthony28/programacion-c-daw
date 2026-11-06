#include <stdio.h>

int main() {
    int n;

    printf("Introduce un numero entero positivo n: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Error: debes introducir un numero mayor que 0.\n");
        return 1;
    }

    // Bucle exterior: controla las filas (desde 1 hasta n)
    for (int fila = 1; fila <= n; fila++) {
        // Bucle interior: imprime tantos asteriscos como indique el numero de fila
        for (int col = 1; col <= fila; col++) {
            printf("*");
        }
        // Salto de linea al terminar la fila actual
        printf("\n");
    }

    return 0;
}