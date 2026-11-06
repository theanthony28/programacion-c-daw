#include <stdio.h>

int main(void)
{
    int diaActual, diasPasan, diaFinal;

    printf("Introduce el dia actual (1-7): ");
    scanf("%d", &diaActual);

    printf("Introduce cuantos dias pasan: ");
    scanf("%d", &diasPasan);

    diaFinal = ((diaActual - 1 + diasPasan) % 7) + 1;

    printf("El dia de la semana sera el %d\n", diaFinal);

    return 0;

    /*Para que el ciclo sea continuo (donde después del día 7 viene el 1), usamos la operación módulo % 7. 
    Restamos 1 antes del módulo para pasar a una escala basada en cero (0-6) 
    y volvemos a sumar 1 al resultado para obtener el día en escala ordinal (1º-7º).*/
}
