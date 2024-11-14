#include <stdio.h>
#include <string.h>

int main () {
  char palavra1[11], palavra2[11];

  printf("Digite a primeira palavra: ");
  scanf("%s", palavra1);

  printf("Digite a ultima palavra: ");
  scanf("%s", palavra2);

  if (strcmp(palavra1, palavra2) >= 0)  
    printf("%s %s", palavra2, palavra1);
  else 
    printf("%s %s", palavra1, palavra2);

  return 0;
}
