#include <stdio.h>

/**
 * @brief Calcula la potencia de una base elevada a un exponente entero no negativo.
 * 
 * @param base Numero entero que representa la base.
 * @param exponente Numero entero no negativo (exponente >= 0).
 * @return long long Resultado de base^exponente.
 */
long long calcular_potencia(int base, int exponente) {
    long long resultado = 1;

    // Multiplicamos la base tantas veces como indique el exponente
    for (int i = 0; i < exponente; i++) {
        resultado *= base;
    }

    return resultado;
}

int main() {
    int base, exponente;

    printf("Introduce la base (entero) y el exponente (>= 0): ");
    if (scanf("%d %d", &base, &exponente) != 2 || exponente < 0) {
        printf("Error: datos invalidos. El exponente debe ser mayor o igual a 0.\n");
        return 1;
    }

    // Llamada a la funcion
    long long pot = calcular_potencia(base, exponente);

    printf("%d elevado a %d es: %lld\n", base, exponente, pot);

    return 0;
}