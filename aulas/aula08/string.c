#include <stdio.h>

int main() {
  char string[30];

  printf("Entre com o seu nome: ");
  scanf("%[^\n]s", string);

  printf("Ola %s!\n", string);

  for (int i = 0; i < 30; i += 1) printf("%c", string[i]);
  // for (int i = 0; i < 30; i += 1) printf("%c%c", string[i], string[i] == 30 );

  return 0;
}
