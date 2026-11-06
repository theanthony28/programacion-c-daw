#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    char caracter;

    printf("Introduce un caracter: ");
    scanf("%c", &caracter);

    if (caracter >= '0' && caracter <= '9') {
        printf("Es un numero.\n");
    }
    else if ((caracter >= 'a' && caracter <= 'z') ||
        (caracter >= 'A' && caracter <= 'Z')) {
        printf("Es parte del alfabeto.\n");
    }
    else {
        printf("Es un caracter especial.\n");
    }

    return 0;
}