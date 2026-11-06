/*Desarrolla un programa guiado por un menú que solicite al usuario
seleccionar una geometría: triángulo, rectángulo, círculo; solicite los datos
necesarios para calcular su área; y muestre el área en cm^2 calculada para la
geometría seleccionada. */

#include <stdio.h>
#include <math.h> // Necesaria para usar M_PI y pow()

int main() {
    int opcion;
    double base, altura, radio, area;

    // 1. Mostramos el menú de opciones
    printf("=== CÁLCULO DE ÁREAS (cm^2) ===\n");
    printf("1. Triángulo\n");
    printf("2. Rectángulo\n");
    printf("3. Círculo\n");
    printf("Selecciona una geometría (1-3): ");
    scanf_s("%d", &opcion);

    // 2. Procesamos la opción seleccionada
    switch (opcion) {
        case 1: // Triángulo
            printf("\n--- TRIÁNGULO ---\n");
            printf("Introduce la base en cm: ");
            scanf_s("%lf", &base);
            printf("Introduce la altura en cm: ");
            scanf_s("%lf", &altura);

            area = (base * altura) / 2.0;
            printf("El área del triángulo es: %.2f cm^2\n", area);
            break;

        case 2: // Rectángulo
            printf("\n--- RECTÁNGULO ---\n");
            printf("Introduce la base en cm: ");
            scanf_s("%lf", &base);
            printf("Introduce la altura en cm: ");
            scanf_s("%lf", &altura);

            area = base * altura;
            printf("El área del rectángulo es: %.2f cm^2\n", area);
            break;

        case 3: // Círculo
            printf("\n--- CÍRCULO ---\n");
            printf("Introduce el radio en cm: ");
            scanf_s("%lf", &radio);

            // Fórmula: Área = π * r^2
            area = M_PI * pow(radio, 2);
            printf("El área del círculo es: %.2f cm^2\n", area);
            break;

        default:
            printf("\nError: Opción no válida. Debes seleccionar un número del 1 al 3.\n");
            break;
    }

    return 0;
}