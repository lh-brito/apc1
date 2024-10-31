#include <stdio.h>

int main() {
    int numeros[10];

    numeros[0] = 5;
    numeros[1] = 7;
    numeros[2] = 4;
    numeros[3] = 8;
    numeros[4] = 2;
    numeros[5] = 3;
    numeros[6] = 9;
    numeros[7] = 1;
    numeros[8] = 6;
    numeros[9] = 10;
    // numeros[10] = 11; NAUM PODE!!!

    for (int i = 0; i < 10; i += 1)
        printf("%d%c ", numeros[i], i == 9 ? '.' : ',');

    return 0;
}
