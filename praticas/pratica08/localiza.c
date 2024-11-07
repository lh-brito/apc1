#include <stdio.h>

int main() {
  int numeros[10];

  for (int i = 0; i < 10; i += 1) {
    printf("Digite o numero da posicao %i: ", i + 1);
    scanf("%i", &numeros[i]);
  }

  int numero;
  printf("Digite um numero: ");
  scanf("%i", &numero);

  int achou = -1;

  for (int i = 0; i < 10; i += 1) if (numeros[i] == numero) achou = i;

  if (achou < 0) printf("O numero nao foi encontrado!");
  else printf("O numero foi encontrado na posicao %i", achou + 1);

  return 0;
}
