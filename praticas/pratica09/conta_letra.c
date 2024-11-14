#include <stdio.h>
#include <string.h>

int main () {
  char frase[31];

  printf("Digite uma frase: ");
  scanf("%[^\n]s", frase);
  while (getchar() != '\n');

  char letra;

  printf("Digite uma letra: ");
  scanf("%c", &letra);

  int quantidade = 0;

  for (int i = 0; i < strlen(frase); i += 1) 
    if (frase[i] == letra) 
      quantidade += 1;

  if (quantidade > 0) 
    printf("A frase contem a letra '%c' %i vez%s.", letra, quantidade, quantidade == 1 ? "" : "es");
  else
    printf("A frase nao contem a letra.");

  return 0;
}
