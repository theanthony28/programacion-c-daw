#include <stdio.h>
#include <stdlib.h>

int main() {
    char cadena_numero[] = "45.897";
    double valor_double;

    // Conversion de la cadena a double
    valor_double = atof(cadena_numero);

    printf("Cadena original (string): %s\n", cadena_numero);
    printf("Numero convertido (double): %.3lf\n", valor_double);
    
    // Demostración de que es un numero operándolo
    printf("Comprobacion (double + 10): %.3lf\n", valor_double + 10.0);

    return 0;
}