#include <stdio.h>

int main() {
    int x, y;

    printf("Introduce el rango [x, y] (dos numeros enteros separados por espacio): ");
    if (scanf("%d %d", &x, &y) != 2) {
        printf("Error: entrada no valida.\n");
        return 1;
    }

    // Aseguramos que x sea el menor e y el mayor
    if (x > y) {
        int temp = x;
        x = y;
        y = temp;
    }

    // El menor numero primo es el 2
    if (x < 2) {
        x = 2;
    }

    printf("Numeros primos en el rango [%d, %d]:\n", x, y);

    int contador_primos = 0;

    // Bucle exterior: recorre cada numero del intervalo [x, y]
    for (int num = x; num <= y; num++) {
        int es_primo = 1; // 1 representa 'verdadero', 0 representa 'falso'

        // Bucle interior: comprueba si existe algun divisor propio
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                es_primo = 0; // Se encontro un divisor, no es primo
                break;        // Detenemos la comprobacion de este numero
            }
        }

        // Si mantuvo la condicion de primo, lo mostramos
        if (es_primo == 1) {
            printf("%d ", num);
            contador_primos++;
        }
    }

    if (contador_primos == 0) {
        printf("No se encontraron numeros primos en ese rango.");
    }

    printf("\n");

    return 0;
}