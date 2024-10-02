#include <stdio.h>

int main () {
  char bar[30] = "==============================";
  char product [13];
  int qtd = 0;
  float value = 0.0f;

  printf("Digite o nome do produto: ");
  scanf("%s", product);

  printf("Digite a quantidade do produto: ");
  scanf("%i", &qtd);

  printf("Digite o valor do produto: ");
  scanf("%f", &value);

  printf("%s\n%19s\n%s\n", bar, "P E D I D O", bar); // Headbar
  printf("%s%11s\t%s\n", "Produto", "Qtd", "Valor Unit");
  printf("%-12s\t%03i\t%.2f\n", product, qtd, value);

  return 0;
}
