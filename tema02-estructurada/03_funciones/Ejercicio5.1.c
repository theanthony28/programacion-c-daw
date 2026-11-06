#include <stdio.h>

/**
 * @brief Comprueba si un numero entero es primo.
 * 
 * @param n Numero entero a comprobar.
 * @return int 1 (TRUE) si es primo, 0 (FALSE) si no lo es o si es negativo/menor que 2.
 */
int es_primo(int n) {
    // Segun el enunciado, los numeros negativos no pueden ser primos.
    // Ademas, por definicion matematica, el 0 y el 1 tampoco lo son.
    if (n < 2) {
        return 0; // FALSE
    }

    // Comprobamos si tiene algun divisor propio desde 2 hasta la raiz de n
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; // FALSE: se encontro un divisor
        }
    }

    return 1; // TRUE: no tiene mas divisores que 1 y el mismo
}

int main() {
    int numero;

    printf("Introduce un numero entero: ");
    if (scanf("%d", &numero) != 1) {
        printf("Error: entrada no valida.\n");
        return 1;
    }

    // Llamada a la funcion
    if (es_primo(numero)) {
        printf("El numero %d es primo (TRUE / 1).\n", numero);
    } else {
        printf("El numero %d NO es primo (FALSE / 0).\n", numero);
    }

    return 0;
}