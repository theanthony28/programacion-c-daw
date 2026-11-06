#include <stdio.h>  

int main() {
    int nota1, nota2, nota3;
    int media_entera;
    float media_decimal;

    // 1. Pedimos las tres notas por teclado
    printf("Introduce la nota del primer trimestre: ");
    scanf("%d", &nota1);

    printf("Introduce la nota del segundo trimestre: ");
    scanf("%d", &nota2);

    printf("Introduce la nota del tercer trimestre: ");
    scanf("%d", &nota3);

    // 2. Calculamos la media entera
    // La división entre dos enteros (int / int) trunca automáticamente los decimales
    media_entera = (nota1 + nota2 + nota3) / 3;

    // 3. Calculamos la media con decimales
    // Hacemos un "casting" explícito a (float) o dividimos entre 3.0 para forzar la división con decimales
    media_decimal = (nota1 + nota2 + nota3) / 3.0;

    // 4. Mostramos los resultados
    printf("\n--- BOLETÍN DE NOTAS ---\n");
    printf("Nota boletín (sin decimales): %d\n", media_entera);
    printf("Nota expedida (con decimales): %.2f\n", media_decimal);

    return 0;
}