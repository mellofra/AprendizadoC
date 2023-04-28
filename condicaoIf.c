#include <stdio.h>
#include <stdlib.h>

int maiorNumero(int num1, int num2) {
    int resultado;

    if(num1 > num2) {
        resultado = num1;
    } else {
        resultado = num2;
    }

    return resultado;
}

int main() {
    printf("O maior numero e %d", maiorNumero(3, 8));
}
