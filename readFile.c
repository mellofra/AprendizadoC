#include <stdio.h>
#include <stdlib.h>

int main() {
    char linhaTexto[255];

    FILE * fpoiter = fopen("arquivo.txt", "r");

    fgets(linhaTexto, 255, fpoiter);

    printf("%s", linhaTexto);

    return 0;
}
