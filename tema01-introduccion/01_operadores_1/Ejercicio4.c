#include <stdio.h>
#include <math.h>
int main() {
    //Usamos 'float' en vez de 'int' porque las notas suelen incluir decimales
    float nota1 = 0;
    float nota2 = 0;
    float media = 0;

    //Pedimos el número (nota) al usuario:
    printf("Por favor, escriba su nota: ");
        /*Leemos el número introducido y lo guardamos en la variable 'nota1'
        '%f' es el que utiliza 'scanf' para leer número decimales */
        scanf("%f", &nota1);
    printf("Por favor, escriba su nota ");
        //Leemos el número introducido y lo guardamos en la variable 'nota2'
        scanf("%f", &nota1);

    //Calculamos la media aritmética
    //Es importante usar paréntesis para que la suma se realice antes de la división
    media = (nota1 + nota2) / 2.0;

    //Mostramos el resultado con 2 decimales (usando %.2f)
    printf("La media de las dos notas es: %.2f\n", media);

    return 0;
}