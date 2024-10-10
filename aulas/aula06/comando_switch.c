#include <stdio.h>

int main() {
    char clean_console [12] = "\e[1;1H\e[2J"; // Variável que limpa o console
    printf(clean_console);

    int star_rating = 0, flag = 0;

    while (star_rating < 1 || star_rating > 5) {
        printf("Digite uma nota de 1 a 5 para a corrida: ");
        scanf("%d", &star_rating);
    
        if (star_rating == 1) flag = 0;
        else if (star_rating > 1 && star_rating < 6) flag = 1;
        else printf("%sDigite uma nota valida.\n", clean_console);
    }

    printf("\nVoce ganhou %d estrela%c!\nFinalizando programa...", star_rating, flag == 1 ? 's' : 0);

    return 0;
}
