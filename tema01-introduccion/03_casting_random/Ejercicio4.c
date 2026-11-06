#include <stdio.h>
#include <stdlib.h> // Para abs() si usas enteros
#include <math.h>   // Para fabs() con números decimales

int main() {
    double numero, valor_absoluto;

    // 1. Pedimos el número al usuario
    printf("Introduce un número (positivo o negativo): ");
    scanf("%lf", &numero);

    // 2. Calculamos el valor absoluto
    valor_absoluto = fabs(numero);

    // 3. Mostramos el resultado
    printf("El valor absoluto de %.2f es: %.2f\n", numero, valor_absoluto);

    return 0;
}