#include <stdio.h>

int main() {
    int n, i, j;

    printf("Introduce el numero de tablas: ");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= n; j++) {
            printf("%dx%d = %d\t", j, i, j * i);
        }
        printf("\n");
    }

    return 0;
}
