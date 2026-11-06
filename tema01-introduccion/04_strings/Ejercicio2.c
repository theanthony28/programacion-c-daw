#include <stdio.h>
#include <string.h>

int main() {
    char nombre1[50];
    char nombre2[50];

    printf("Introduce el primer nombre: ");
    scanf("%s", nombre1);

    printf("Introduce el segundo nombre: ");
    scanf("%s", nombre2);

    int resultado = strcmp(nombre1, nombre2);

    /*
     * Seleccion mediante aritmetica de punteros y expresiones booleanas:
     * Si resultado <= 0, (resultado <= 0) vale 1 y (resultado > 0) vale 0.
     * Si resultado > 0,  (resultado <= 0) vale 0 y (resultado > 0) vale 1.
     */
    char *primero = (char *)((size_t)nombre1 * (resultado <= 0) + (size_t)nombre2 * (resultado > 0));

    printf("Va primero alfabeticamente: %s\n", primero);

    return 0;
}