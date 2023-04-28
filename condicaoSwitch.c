#include <stdio.h>
#include <stdio.h>

int main() {
    char materia;

    materia = 'A';

    switch(materia) {
        case 'A':
            printf("Passou");
            break;

        case 'B':
            printf("Recuperacao");
            break;

        case 'C':
            printf("Reprovou");
            break;
        default:
            printf("Invalido");
    }

    return 0;
}
