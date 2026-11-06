#include <stdio.h>

int main() {
    int n, i, j, k;
    int num = 1;

    printf("Introduce el numero de filas: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {

        // Imprimir espacios para formar la piramide
        for (j = 1; j <= n - i; j++) {
            printf("  ");
        }

        // Imprimir los numeros consecutivos de cada fila
        for (k = 1; k <= i; k++) {
            printf("%d ", num);
            num++;
        }

        printf("\n");
    }

    return 0;
}