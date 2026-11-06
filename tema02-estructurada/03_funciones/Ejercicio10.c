#include <stdio.h>

/**
 * @brief Calcula el n-esimo termino de la sucesion de Fibonacci de forma iterativa.
 * 
 * @param n Indice del termino deseado (n >= 0).
 * @return unsigned long long El valor del termino n-esimo de Fibonacci.
 */
unsigned long long fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    unsigned long long a = 0; // Representa F(i-2)
    unsigned long long b = 1; // Representa F(i-1)
    unsigned long long c = 0; // Representa F(i)

    // Calculamos los terminos desde el 2 hasta n
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    return c;
}

int main() {
    int n;

    printf("Introduce la posicion n de Fibonacci (n >= 0): ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Error: debes introducir un numero entero mayor o igual a 0.\n");
        return 1;
    }

    // Llamada a la funcion
    unsigned long long resultado = fibonacci(n);

    printf("El termino F(%d) de la sucesion de Fibonacci es: %llu\n", n, resultado);

    return 0;
}