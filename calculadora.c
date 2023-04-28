#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero1;
    int numero2;
    int resultado;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    resultado = numero1 + numero2;

    printf("%d", resultado);

    return 0;
}
