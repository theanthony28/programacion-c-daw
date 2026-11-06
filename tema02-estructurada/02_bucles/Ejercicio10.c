#include <stdio.h>

int main() {
    int opcion;
    float base, altura, radio, area;
    char repetir;

    do {
        printf("\nSeleccione una de las formas geometricas:\n");
        printf("1. Triangulo\n");
        printf("2. Rectangulo\n");
        printf("3. Circulo\n");
        printf("Introduzca una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
        case 1:
            printf("Introduzca la base y la altura: ");
            scanf("%f %f", &base, &altura);

            area = (base * altura) / 2;
            printf("El area son %.2f cm^2\n", area);
            break;

        case 2:
            printf("Introduzca la base y la altura: ");
            scanf("%f %f", &base, &altura);

            area = base * altura;
            printf("El area son %.2f cm^2\n", area);
            break;

        case 3:
            printf("Introduzca el radio: ");
            scanf("%f", &radio);

            area = 3.14159 * radio * radio;
            printf("El area son %.2f cm^2\n", area);
            break;

        default:
            printf("Opcion no valida.\n");
        }

        printf("\n¿Desea calcular otra area? (y/n): ");
        scanf(" %c", &repetir);

    } while (repetir == 'y' || repetir == 'Y');

    printf("Programa finalizado.\n");

    return 0;
}

