#include <stdio.h>
#include <stdlib.h>

int sumaDigitos(int n) {
    int suma = 0;
    n = abs(n);

    while (n > 0) {
        suma += n % 10;
        n /= 10;
    }

    return suma;
}

int main() {
    int num = -1234;

    printf("La suma de los digitos es: %d\n", sumaDigitos(num));

    return 0;
}