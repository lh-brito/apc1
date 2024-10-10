#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    // int numero = 0;

    // printf("Entre com um numero: ");
    // int deu_certo = scanf("%i", &numero);

    // printf("%i eh %s", numero, numero % 2 == 0 ? "par" : "impar");

    // int idade = 0;
    
    // printf("\nEntre com a sua idade: ");
    // deu_certo = scanf("%i", &idade);

    // if (idade < 16) printf("Voce nao pode votar!\n");
    // else if (idade < 18 || idade > 70) printf("Voce pode votar!\n");
    // else printf("Voce eh obrigado a votar!\n");

    float media = 0.0f;
    printf("\e[1;1H\e[2JDigite sua media: ");
    int deu_certo = scanf("%f", &media);

    if (media >= 9.0f && media <= 10.0f) printf("A sua media eh %.1f e a mencao eh SS\n", media); 
    else if (media >= 7.0f && media <= 8.9f) printf("A sua media eh %.1f e a mencao eh MS\n", media); 
    else if (media >= 5.0f && media <= 6.9f) printf("A sua media eh %.1f e a mencao eh MM\n", media); 
    else if (media >= 3.0f && media <= 4.9f) printf("A sua media eh %.1f e a mencao eh MI\n", media);  
    else if (media >= 0.1f && media <= 2.9f) printf("A sua media eh %.1f e a mencao eh II\n", media); 
    else printf("A sua media eh %.1f e a mencao eh SR\n", media);  

    // if encadeado
    // if (media >= 9.0f && media <= 10.0f) {
    //     printf("Sua mencao eh SS\n");
    // } else if (media >= 7.0f && media <= 8.9f) {
    //     printf("Sua mencao eh MS\n");
    // } else if (media >= 5.0f && media <= 6.9f) {
    //     printf("Sua mencao eh MM\n");
    // } else if (media >= 3.0f && media <= 4.9f) {
    //     printf("Sua mencao eh MI\n");
    // } else if (media >= 0.1f && media <= 2.9f) {
    //     printf("Sua mencao eh II\n");
    // } else {
    //     printf("Sua mencao eh SR\n");
    // }
    
    return 0;
}
