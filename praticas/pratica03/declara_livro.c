#include <stdio.h>
#include <limits.h>
#include <float.h>

  int main() {
    const int ISBN = 0;
    int num_paginas = 0;
    float preco = 0.00f;
    int publicado_em = 0;

    printf("ISBN: %012i\n", ISBN);
    printf("Num. Páginas: %03i\n", num_paginas);
    printf("Preço: %07.2f\n", preco);
    printf("Publicado em: %04i\n", publicado_em);
    
    return 0;
  }
