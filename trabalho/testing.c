#include <stdio.h>
#include <stdlib.h>

int main () {
  char sex;
  scanf("%c", &sex);

  if(sex != 'm' && sex != 'M') printf("%c\n", sex);

  return 0;
}
