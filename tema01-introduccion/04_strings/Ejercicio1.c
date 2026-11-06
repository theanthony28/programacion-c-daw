#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    //Ambas maneras con strlen y sizeof (son diferentes)
    char string[] = "Hola";
    
    printf("Con strlen: %d\n", strlen(string));
    printf("Con sizeof: %d\n", sizeof(string));

    return 0;
}
