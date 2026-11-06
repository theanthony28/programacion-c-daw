#include <stdio.h>

int main() {
    int llueve, tareas, biblioteca;

    printf("¿Esta lloviendo? (1 = Si, 0 = No): ");
    scanf_s("%d", &llueve);

    printf("¿Has terminado las tareas? (1 = Si, 0 = No): ");
    scanf_s("%d", &tareas);

    printf("¿Necesitas ir a la biblioteca? (1 = Si, 0 = No): ");
    scanf_s("%d", &biblioteca);

    printf("¿Puede salir a la calle? %d\n",
        (!llueve && tareas) || biblioteca);

    return 0;
}
