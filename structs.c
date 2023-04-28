#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Estudante
{
    char nome[50];
    char materiaPreferida[20];
    float nota;
};



int main() {
    struct Estudante estudante1;
    struct Estudante estudante2;

    strcpy(estudante1.nome, "Rafael");
    strcpy(estudante1.materiaPreferida, "Matematica");
    estudante1.nota = 8;

    strcpy(estudante2.nome, "Larissa");
    strcpy(estudante2.materiaPreferida, "Biologia");
    estudante2.nota = 7;

    printf(estudante1.nome);
    printf("\n");
    printf(estudante2.nome);
}
