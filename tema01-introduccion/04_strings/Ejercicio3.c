#include <stdio.h>
#include <string.h>

int main() {
    char origen[] = "Programacion en C";
    char destino[50]; // Debe ser lo suficientemente grande para alojar la copia

    // Copia el contenido de origen en destino
    strcpy(destino, origen);

    printf("Cadena origen: %s\n", origen);
    printf("Cadena destino (copia): %s\n", destino);

    return 0;
}