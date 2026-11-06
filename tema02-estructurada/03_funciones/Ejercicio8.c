#include <stdio.h>

/**
 * @brief Calcula la suma de los divisores propios positivos de un numero entero.
 * 
 * @param n Numero entero positivo.
 * @return int Suma de todos los divisores propios de n.
 */
int suma_divisores_propios(int n) {
    if (n <= 1) {
        return 0;
    }

    int suma = 1; // 1 siempre es divisor propio para cualquier n > 1

    // Comprobamos divisores desde 2 hasta n / 2
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            suma += i;
        }
    }

    return suma;
}

/**
 * @brief Determina si dos numeros enteros positivos son numeros amigos.
 * 
 * @param a Primer numero.
 * @param b Segundo numero.
 * @return int 1 (TRUE) si son amigos, 0 (FALSE) en caso contrario.
 */
int son_amigos(int a, int b) {
    // Deben ser enteros positivos distintos
    if (a <= 0 || b <= 0 || a == b) {
        return 0;
    }

    // Comprobamos si la suma de divisores de cada uno equivale al otro numero
    return (suma_divisores_propios(a) == b && suma_divisores_propios(b) == a) ? 1 : 0;
}

int main() {
    int num1, num2;

    printf("Introduce dos numeros enteros positivos: ");
    if (scanf("%d %d", &num1, &num2) != 2 || num1 <= 0 || num2 <= 0) {
        printf("Error: debes introducir dos numeros enteros positivos mayores que 0.\n");
        return 1;
    }

    // Llamada a la funcion
    if (son_amigos(num1, num2)) {
        printf("Los numeros %d y %d SON amigos (TRUE / 1).\n", num1, num2);
    } else {
        printf("Los numeros %d y %d NO son amigos (FALSE / 0).\n", num1, num2);
    }

    return 0;
}

/*ExplicaciónComposición y modularidad: En lugar de duplicar el bucle que busca divisores dentro de son_amigos, se crea una función auxiliar suma_divisores_propios. 
La función principal son_amigos simplemente la invoca dos veces, reduciendo código repetido y simplificando el mantenimiento.
Condición $a \neq b$: Si un número es igual a la suma de sus propios divisores (como el $6$ o el $28$), se trata de un número perfecto, no de una pareja de amigos. 
Por ello, la condición a == b descarta este caso inmediatamente devolviendo 0.Prueba rápida: Si se prueban los valores 220 y 284:Divisores propios de $220$: 
$1, 2, 4, 5, 10, 11, 20, 22, 44, 55, 110 \to \text{Suma} = 284$.Divisores propios de $284$: $1, 2, 4, 71, 142 \to \text{Suma} = 220$.El resultado es afirmativo (1).*/