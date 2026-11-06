#include <stdio.h>
#include <string.h>

int main() {
    char saludo[50] = "Hola, ";
    char nombre[] = "Mundo!";

    // Concatena "nombre" al final de "saludo"
    strcat(saludo, nombre);

    printf("Resultado de la concatenacion: %s\n", saludo);

    return 0;