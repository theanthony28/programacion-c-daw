//Ejercicio Bien hecho:

#include <stdio.h>

int main() {
    int n, original, temp;
    int digito, cifras = 0;
    int suma = 0;
    int potencia, i;

    printf("Introduce un numero cualquiera: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("No es un numero Armstrong.\n");
        return 0;
    }

    original = n;
    temp = n;

    // Contar el numero de cifras
    do {
        cifras++;
        temp = temp / 10;
    } while (temp > 0);

    temp = n;

    // Calcular la suma de las potencias de sus cifras
    while (temp > 0) {
        digito = temp % 10;

        potencia = 1;
        for (i = 0; i < cifras; i++) {
            potencia = potencia * digito;
        }

        suma = suma + potencia;
        temp = temp / 10;
    }

    if (suma == original) {
        printf("Es un numero Armstrong.\n");
    }
    else {
        printf("No es un numero Armstrong.\n");
    }

    return 0;
}

