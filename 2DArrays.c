#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[4][2] = {
        {1, 2},
        {3, 4},
        {5, 6},
        {7, 8}
    };

    for(int j = 0; j < 4; j++) {
        for(int i = 0; i < 2; i++) {
            printf("%d,", matriz[j][i]);
        }
        printf("\n");
    }
}
