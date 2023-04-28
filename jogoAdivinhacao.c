#include <stdio.h>
#include <stdlib.h>

int main() {
    int numeroSecreto = 8;
    int numeroUsuario;
    int chances = 0;
    int gameOver = 0;

    while(numeroUsuario != numeroSecreto && gameOver == 0) {
        if(chances < 3) {
            printf("Digite um numero: ");
            scanf("%d", &numeroUsuario);
            chances++;
        } else {
            gameOver = 1;
            printf("\nAcabou as chances!");
        }
    }

    if(gameOver == 0) {
        printf("Voce ganhou!");
    } else {
        printf("Voce perdeu!");
    }
}
