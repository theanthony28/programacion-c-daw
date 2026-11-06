#include <stdio.h>
#include <string.h>

int main() {
    char nombre[50];
    char apellido[50];
    int anio_nacimiento;

    printf("Introduce tu nombre: ");
    fgets(nombre, sizeof(nombre), stdin);
    nombre[strcspn(nombre, "\n")] = 0; // Elimina el salto de linea introducido por fgets

    printf("Introduce tu apellido: ");
    fgets(apellido, sizeof(apellido), stdin);
    apellido[strcspn(apellido, "\n")] = 0;

    printf("Introduce tu ano de nacimiento: ");
    scanf("%d", &anio_nacimiento);

    printf("Datos introducidos: %s %s, nacido en el ano %d\n", nombre, apellido, anio_nacimiento);

    return 0;
}