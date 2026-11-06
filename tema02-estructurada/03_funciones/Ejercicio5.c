/*Un número primo es aquel que solo tiene dos divisores que dan otro número natural, sin decimales*/

#include <stdio.h>

int esPrimo(int n) {
    if (n < 2)
        return 0;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int main() {
    int n;

    printf("Introduce un numero: ");
    scanf("%d", &n);

    if (esPrimo(n))
        printf("%d es primo\n", n);
    else
        printf("%d no es primo\n", n);

    return 0;
}