#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero = 123;
    int * pNumero = &numero;

    double numero2 = 456;
    double * pNumero2 = &numero2;

    char nome = 'A';
    char * pNome = &nome;

    printf("%p\n", pNumero);
    printf("%p\n", pNumero2);
    printf("%p", &pNome);

    return 0;
}
