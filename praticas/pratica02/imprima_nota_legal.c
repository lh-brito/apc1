#include <stdio.h>

  int main() {
    char bar[30] = "==============================";

    printf("%s\n%25s\n%s\n%s%23s\n%s\t\t%03i%11.2f\n%s\t\t\t%03i%11.2f\n%s\t\t%03i%11.2f\n%s\n%s%24.2f\n",
      bar, "N O T A    L E G A L", bar,
      "Produto", "Qtd Valor Unit",
      "Camiseta", 2, 39.99,
      "Calca", 1, 89.90,
      "Meia Social", 3, 19.99,
      bar,
      "Total:", 2 * 39.99 + 89.90 + 3 * 19.99);
    
    return 0;
  }
