#include <stdio.h>
#include <stdlib.h> // Necesaria para rand(), srand() y EXIT_SUCCESS
#include <time.h>   // Necesaria para time()

int main() {
    // 1. Inicializamos la semilla del generador de números aleatorios
    // usando la hora actual para que cambie en cada ejecución
    srand(time(NULL));

    // 2. Generamos un número aleatorio comprendido entre 1 y 10
    int numero_aleatorio = (rand() % 10) + 1;

    // 3. Declaramos un array de caracteres (string) para guardar el resultado
    char texto[5];

    // 4. Convertimos ("casteamos"/formateamos) el entero a string
    sprintf(texto, "%d", numero_aleatorio);

    // 5. Mostramos el resultado por pantalla
    printf("El número aleatorio generado como string es: \"%s\"\n", texto);

    return 0;
}