#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE * fpoiter = fopen("arquivo.txt", "w");

    fprintf(fpoiter, "aqui esta um exemplo de texto");

    fclose(fpoiter);  

    return 0;
}
