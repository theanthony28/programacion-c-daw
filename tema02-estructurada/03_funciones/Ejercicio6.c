#include <stdio.h>
#include <stdlib.h>

int mcd(int a, int b) {
    a = abs(a);
    b = abs(b);

    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }

    return a;
}

int main() {
    int a, b;

    printf("Introduce dos numeros enteros: ");
    scanf("%d %d", &a, &b);

    printf("El MCD es: %d\n", mcd(a, b));

    return 0;
}