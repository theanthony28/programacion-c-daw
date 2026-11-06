#include <stdio.h>
int main() {
    //Declaramos la variable short con su valor mínimo permitido
    short número = -32768; 

    printf("Valor inicial (mínimo): %d\n", número);

    //Restamos 1 para provocar el desbordamiento por abajo
    número = número -1; 

    //Mostramos el resultado tras la resta
    printf("Valor después de la resta 1: %d\n");

    return 0;
}