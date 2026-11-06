#include <stdio.h>

int main() {
    int total_minutos, horas, minutos_restantes;

    printf("Introduce la cantidad total de minutos: ");
    scanf("%d", &total_minutos);

    horas = total_minutos / 60;
    minutos_restantes = total_minutos % 60;

    printf("%d minutos corresponden a: %d horas y %d minutos\n", total_minutos, horas, minutos_restantes);

    return 0;
}