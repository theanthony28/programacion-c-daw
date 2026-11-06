#include <stdio.h>


int main () {

    int mes = 0;    

    printf("Introduce un mes del 1 al 12: ");
    scanf_s("%d", &mes); 

    switch (mes) {
        case 1: 
            printf("El mes %d corresponde a: Enero\n");
            break;
        case 2: 
            printf("El mes %d corresponde a: Febrero\n");
            break;
        case 3:
            printf("El mes %d corresponde a: Marzo\n"); 
            break;
        case 4:
            printf("El mes %d corresponde a: Abril\n", mes);
            break;
        case 5:
            printf("El mes %d corresponde a: Mayo\n", mes);
            break;
        case 6:
            printf("El mes %d corresponde a: Junio\n", mes);
            break;
        case 7:
            printf("El mes %d corresponde a: Julio\n", mes);
            break;
        case 8:
            printf("El mes %d corresponde a: Agosto\n", mes);
            break;
        case 9:
            printf("El mes %d corresponde a: Septiembre\n", mes);
            break;
        case 10:
            printf("El mes %d corresponde a: Octubre\n", mes);
            break;
        case 11:
            printf("El mes %d corresponde a: Noviembre\n", mes);
            break;
        case 12:
            printf("El mes %d corresponde a: Diciembre\n", mes);
            break;
        default:
            printf("Error: El número introducido no corresponde a ningún mes válido (debe ser del 1 al 12).\n");
            break;
    }
        return 0;
}
