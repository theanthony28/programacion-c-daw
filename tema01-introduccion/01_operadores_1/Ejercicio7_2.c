#include <stdio.h>

int main(void)
{
    int minutos=0;
    int horas=0;
    int totalMinutos=0;

    printf("Introduce los minutos: ");
    scanf_s("%d", &minutos);

    horas = minutos / 60;
    totalMinutos = minutos % 60;

    printf("%d horas y %d minutos\n", horas, totalMinutos);

    return 0;
}

