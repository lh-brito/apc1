#include <stdio.h>

int main () {
  char tecla = '\0'; // caractere nulo

  printf("Digite uma tecla: ");
  scanf("%c", &tecla);
  getchar(); // limpa o \n
  printf("Você digitou: %c\n", tecla);

  char nome[31];

  printf("Digite seu nome: ");
  scanf("%[^\n]s", nome);
  printf("Você digitou: %s\n", nome);

  return 0;
}
