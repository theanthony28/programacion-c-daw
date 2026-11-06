#include <stdio.h>

int main() {

    //Usamos tres variables de tipo entero (int): Dos para almacenar los años y uno para guardar la lista.

    int anio_actual, anio_nacimiento, edad;

    //1. Pedimos los datos del usuario
    printf("Introduce el año actual: ");
    scanf("%d, &anio_actual");

    printf("Introduce tu año de nacimiento: ");
    scanf("%d, &anio_nacimiento");

    //2. Calculamos la edad
    //Para realizar calculos aritmeticos, podemos asignar directamente a operacion de una variable.
    
    edad = anio_actual - anio_nacimiento; 

    //3. Mostramos el resultado 
    printf("Tienes %d años (o los cumpliras este año).\n", edad);

    return 0;
}