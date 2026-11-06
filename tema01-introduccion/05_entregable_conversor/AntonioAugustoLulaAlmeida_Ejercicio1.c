#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    int main () {
        int num = 0;
        int c1 = 0;
        int c2 = 0;
        int c3 = 0;
        int c4 = 0;
        int capicua = 0;
        
        // 1. Inicializamos la semilla del generador de números aleatorios
        srand(time(NULL));
        // 2. Generamos un numero aleatorio entre 1000 y 9999
        int numRandom = (rand() % 9000 + 1000); 
        // 3. Expresamos las condiciones de la primera a la cuarta cifra
        c4 = numRandom % 10;
        c3 = (numRandom / 10) % 10;
        c2 = (numRandom / 100) % 10;
        c1 = numRandom / 1000;

        // 4. Comprobar que sea capicúa
        int capicua = (c1 == c4) && (c2 == c4);
        printf("Número generado: %d\n", numRandom);
        printf("¿Es capicúa (1 = Sí, 0 = No):%d\n", capicua);

        return 0;
    }