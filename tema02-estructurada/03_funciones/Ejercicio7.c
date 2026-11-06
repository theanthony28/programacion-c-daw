#include <stdio.h>
#include <math.h>

int esArmstrong(int n) {
    int original = n;
    int digitos = 0;
    int suma = 0;
    int temp;

    if (n < 0)
        return 0;

    temp = n;

    do {
        digitos++;
        temp /= 10;
    } while (temp != 0);

    temp = n;

    do {
        int digito = temp % 10;
        suma += (int)pow(digito, digitos);
        temp /= 10;
    } while (temp != 0);

    return suma == original;
}

int esPerfecto(int n) {
    int suma = 0;
    int i;

    if (n <= 1)
        return 0;

    for (i = 1; i <= n / 2; i++) {
        if (n % i == 0)
            suma += i;
    }

    return suma == n;
}

int main() {
    int n;

    printf("Introduce un numero entero: ");
    scanf("%d", &n);

    if (esArmstrong(n))
        printf("%d es un numero Armstrong.\n", n);
    else
        printf("%d no es un numero Armstrong.\n", n);

    if (esPerfecto(n))
        printf("%d es un numero perfecto.\n", n);
    else
        printf("%d no es un numero perfecto.\n", n);

    return 0;
}