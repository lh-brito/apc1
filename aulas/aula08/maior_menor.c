#include <stdio.h>

int main() {
  int numeros[10];
  int maior = -999999;
  int menor =  999999;

  for (int i = 0; i < 10; i += 1) {
    printf("Entre com o %io numero: ", i + 1);
    scanf("%d", &numeros[i]);

    if (numeros[i] > maior) maior = numeros[i];

    if (numeros[i] < menor) menor = numeros[i];
  }

  printf("\nOs numeros lidos foram:\n");
  for (int i = 0; i < 10; i += 1) 
    printf("%d%c ", numeros[i], i == 9 ? '\n' : ',');

  printf("\nsendo %d o maior numero e %d o menor numero.\n", maior, menor);

  return 0;
}
