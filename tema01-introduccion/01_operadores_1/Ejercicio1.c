#include <stdio.h>

int main() {
    int numero; 

    //1. Pedimos el numero al usuario
    printf("Por favor, introduce el numero entero: ");

    //2. Leemos el numero introducido y lo guardamos en la variable 'numero'
    scandf("%d, &numero");

    //3. Mostramos el numero por pantalla 
    printf("El numero introducido es: %d\n", numero);

    return 0; 
}

/*Puntos clave para recordar de este codigo*/

// %d: Es el especificador del formato para indicar que estamos trabajando con un numero entero.
// &numero: el simbolo '&' le dice a 'scanf' la direccion exacta de memoria donde guardar el valor leido. 