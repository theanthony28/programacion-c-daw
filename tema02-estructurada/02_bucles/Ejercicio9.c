#include <stdio.h>

int main() {
    int n, m;
    long long productorio = 1;

    printf("Introduce los valores de n y m (n >= 0, m >= 0): ");
    if (scanf("%d %d", &n, &m) != 2 || n < 0 || m < 0) {
        printf("Error: n y m deben ser enteros mayores o iguales a 0.\n");
        return 1;
    }

    // Bucle exterior para el productorio (i desde 0 hasta n)
    for (int i = 0; i <= n; i++) {
        long long suma_interna = 0;

        // Bucle interior para el sumatorio (j desde 0 hasta m)
        for (int j = 0; j <= m; j++) {
            suma_interna += (j * i + 5);
        }

        // Multiplicamos el resultado de la suma al total del productorio
        productorio *= suma_interna;
    }

    printf("El resultado de S para n = %d y m = %d es: %lld\n", n, m, productorio);

    return 0;
}