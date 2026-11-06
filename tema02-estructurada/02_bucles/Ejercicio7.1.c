#include <stdio.h>

int main() {
    int n;

    printf("Introduce un numero entero positivo n: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Error: debes introducir un numero mayor que 0.\n");
        return 1;
    }

    // Bucle exterior: cada fila representa el multiplicador del 1 al 10
    for (int mult = 1; mult <= 10; mult++) {
        // Bucle interior: recorre las tablas desde 1 hasta n
        for (int tabla = 1; tabla <= n; tabla++) {
            printf("%d*%d=%d", tabla, mult, tabla * mult);

            // Imprimimos una coma y espacio separador si no es la ultima columna
            if (tabla < n) {
                printf(", ");
            }
        }
        // Salto de linea al terminar cada fila
        printf("\n");
    }

    return 0;
}