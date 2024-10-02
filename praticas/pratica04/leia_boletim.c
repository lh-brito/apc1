#include <stdio.h>

int main () {
  int matricula = 0;
  float a1 = 0.0f; 
  float a2 = 0.0f;
  float media = 0.0f;

  printf("Digite sua matrícula: ");
  scanf("%i", &matricula);

  printf("Digite a nota da sua A1: ");
  scanf("%f", &a1);

  printf("Digite a nota da sua A2: ");
  scanf("%f", &a2);

  printf("\nMatricula\tA1\t  A2\tMedia");
  printf("\n%i\t%.1f%6.1f%6.1f\n", 
        matricula, a1, a2, (a1 * 0.4) + (a2 * 0.6));

  return 0;
}
