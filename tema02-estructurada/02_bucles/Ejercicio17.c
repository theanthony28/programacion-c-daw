#include <stdio.h>

int main() {
    int numero;
    long long binario = 0;
    long long posicion = 1; // Representa las posiciones 1, 10, 100, 1000...

    printf("Introduce un numero entero positivo: ");
    if (scanf("%d", &numero) != 1 || numero < 0) {
        printf("Error: debes introducir un numero entero no negativo.\n");
        return 1;
    }

    if (numero == 0) {
        printf("0\n");
        return 0;
    }

    int temporal = numero;

    // Obtenemos los restos y los colocamos en su orden correspondiente
    while (temporal > 0) {
        int resto = temporal % 2;
        binario += resto * posicion;
        posicion *= 10;
        temporal /= 2;
    }

    printf("El numero %d en binario es: %lld\n", numero, binario);

    return 0;
}