#include <stdio.h>

int main() {
  // NAO logico
  int p = 0;
  int q = 1;
  printf("NOT %i = %i\n", p, !p);
  printf("NOT %i = %i\n\n", q, !q);
  
  // E logico
  p = 0;
  q = 0;
  printf("%i AND %i = %i\n", p, q, p && q);
  q = 1;
  printf("%i AND %i = %i\n", p, q, p && q);
  p = 1;
  q = 0;
  printf("%i AND %i = %i\n", p, q, p && q);
  q = 1;
  printf("%i AND %i = %i\n\n", p, q, p && q);

  // 1 < x < 10
  // 1 < x && x < 10

  // OU logico
  p = 0;
  q = 0;
  printf("%i OR %i = %i\n", p, q, p || q);
  q = 1;
  printf("%i OR %i = %i\n", p, q, p || q);
  p = 1;
  q = 0;
  printf("%i OR %i = %i\n", p, q, p || q);
  q = 1;
  printf("%i OR %i = %i\n\n", p, q, p || q);

  // NAND logico
  p = 0;
  q = 0;
  printf("%i NAND %i = %i\n", p, q, !(p && q));
  q = 1;
  printf("%i NAND %i = %i\n", p, q, !(p && q));
  p = 1;
  q = 0;
  printf("%i NAND %i = %i\n", p, q, !(p && q));
  q = 1;
  printf("%i NAND %i = %i\n\n", p, q, !(p && q));

  // NOR logico
  p = 0;
  q = 0;
  printf("%i NOR %i = %i\n", p, q, !(p || q));
  q = 1;
  printf("%i NOR %i = %i\n", p, q, !(p || q));
  p = 1;
  q = 0;
  printf("%i NOR %i = %i\n", p, q, !(p || q));
  q = 1;
  printf("%i NOR %i = %i\n", p, q, !(p || q));
  
  return 0;
}
