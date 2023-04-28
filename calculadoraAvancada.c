#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    float valor1, valor2, resultado;
    char operacao;

    printf("Escola a operacao: ");
    scanf("%c", &operacao);

    printf("Escolha o prim[eiro valor: ");
    scanf("%f", &valor1);

    printf("Escolha o primeiro valor: ");
    scanf("%f", &valor2);

    if(operacao == '+') 
    {
        printf("%f", valor1 + valor2);
    }
    else if (operacao == '-')
    {
        printf("%f", valor1 - valor2);
    }
    else if (operacao == '*')
    {
        printf("%f", valor1 * valor2);
    }
    else if (operacao == '/')
    {
        printf("%f", valor1 / valor2);
    } else {
        printf("Erro");
    }
    
    return resultado;
}
