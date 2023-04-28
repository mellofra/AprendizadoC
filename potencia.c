#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int numero1;
    int potencia;
    int resultado;

    printf("Digite o numero: ");
    scanf("%d", &numero1);

    printf("Digite a potencia: ");
    scanf("%d", &potencia);

    resultado = pow(numero1, potencia);

    printf("%d", resultado);

    return 0;
}
