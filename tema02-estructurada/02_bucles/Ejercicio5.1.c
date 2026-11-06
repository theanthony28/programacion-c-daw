#include <stdio.h>

int main() {
    int numero;
    int suma_divisores = 0;

    printf("Introduce un numero entero positivo: ");
    if (scanf("%d", &numero) != 1 || numero <= 0) {
        printf("Error: debes introducir un numero entero positivo mayor que 0.\n");
        return 1;
    }

    // Buscamos los divisores propios (desde 1 hasta numero - 1)
    for (int i = 1; i <= numero / 2; i++) {
        if (numero % i == 0) {
            suma_divisores += i;
        }
    }

    // Comprobamos si la suma coincide con el numero
    if (suma_divisores == numero) {
        printf("El numero %d es un numero Perfecto.\n", numero);
    } else {
        printf("El numero %d no es un numero Perfecto.\n", numero);
    }

    return 0;
}