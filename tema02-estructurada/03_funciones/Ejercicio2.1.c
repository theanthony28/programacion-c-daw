#include <stdio.h>

/**
 * @brief Compara dos numeros enteros y devuelve el mayor de ellos.
 * 
 * @param a Primer numero a comparar.
 * @param b Segundo numero a comparar.
 * @return int El valor del numero mayor (o el valor común si son iguales).
 */
int obtener_mayor(int a, int b) {
    if (a >= b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int num1, num2;

    printf("Introduce dos numeros enteros: ");
    if (scanf("%d %d", &num1, &num2) != 2) {
        printf("Error: entrada no valida.\n");
        return 1;
    }

    // Llamada a la funcion
    int mayor = obtener_mayor(num1, num2);

    printf("El mayor entre %d y %d es: %d\n", num1, num2, mayor);

    return 0;
}