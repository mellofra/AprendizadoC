#include <stdio.h>
#include <stdlib.h>

float cubo(float num) {
    return num * num * num;
}

int main() {
    printf("%f", cubo(4));
}
