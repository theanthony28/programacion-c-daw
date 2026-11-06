#include <stdio.h>
int main() {
    //Declaramos una variable de tipo short con su valor máximo
    //El tipo short permite almacenar valores comprendidos entre -32768 y 32767. 
    short numero = 32767;

    printf("Valor inicial (máximo): %d\n");

    //Sumamos 1 para provocar el debordamiento
    numero = numero + 1;

    //Mostramos el nuevo valor tras el desbordamiento 
    printf("Valor después de sumar 1: %d\n", numero);

    return 0;
}