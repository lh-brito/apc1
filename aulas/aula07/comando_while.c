#include <stdio.h>

int main() {
    int numero = 0;

    printf("Entre com um numero entre 1 e 10: ");
    scanf("%d", &numero);

    while (numero < 1 || numero > 10) {
        while (getchar() != '\n'); // Limpar buffer do teclado
        printf("Numero invalido. Tente novamente!\n");
        printf("Entre com um numero entre 1 e 10: ");
        scanf("%d", &numero);
    }

    printf("%d", numero);

    return 0;
}
