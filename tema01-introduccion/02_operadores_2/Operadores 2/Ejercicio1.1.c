#include <stdio.h>

int main() {
    int edad;

    printf("Introduce tu edad: ");
    scanf_s("%d", &edad);

    printf("Mayor de edad: %d\n", edad >= 18);

    return 0;
}
