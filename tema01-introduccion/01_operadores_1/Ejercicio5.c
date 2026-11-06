#include <stdio.h>
#include <math.h>
#define PI 3.141592
//Se necesita para usar pow() y M_PI

int main() {
    float radio, longitud, area;
    //Pedimos el radio al usuario
    printf("Introduce el radio de la circunferencia: ");
    scanf("%f", &radio);

    //Calculamos la longitud y el área
    //Longitud = 2 * PI * r

    longitud = 2 * M_PI * radio;

    //Area = PI * r² (usando pow(base, exponente))
    area = M_PI * pow(radio, 2);

    //Mostramos los resultados con 2 decimales
    printf("\n--- Resultados ---\n");
    printf("longitud de la circunferencia: %.2f\n", longitud);
    printf("Area del círculo: %.2f\n, area");

    return 0;
}