#include <stdio.h>

/**
 * @brief Convierte e imprime un numero entero positivo en formato binario.
 *        Utiliza recursion para invertir el orden de los restos sin usar arrays.
 * 
 * @param n Numero entero positivo a convertir.
 */
void decimal_a_binario(int n) {
    if (n < 0) {
        printf("Error: solo numeros enteros no negativos.\n");
        return;
    }

    // Caso base directo
    if (n == 0) {
        printf("0");
        return;
    }

    // Funcion auxiliar recursiva interna
    void imprimir_bits(int num) {
        if (num == 0) {
            return;
        }
        // 1. Llamada recursiva con la division entera (apila las llamadas hasta el bit mas significativo)
        imprimir_bits(num / 2);
        // 2. Al desapilar, imprime el resto en el orden correcto (de izquierda a derecha)
        printf("%d", num % 2);
    }

    imprimir_bits(n);
}

int main() {
    int numero;

    printf("Introduce un numero entero positivo: ");
    if (scanf("%d", &numero) != 1 || numero < 0) {
        printf("Error: entrada no valida. Introduce un entero >= 0.\n");
        return 1;
    }

    printf("El numero %d en binario es: ", numero);
    decimal_a_binario(numero);
    printf("\n");

    return 0;
}