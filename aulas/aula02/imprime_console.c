#include <stdio.h> // Biblioteca de entrada e saída no console

int main() {  
  // Imprime um texto
  printf("Um texto qualquer entre aspas duplas\n");

  // Imprime números inteiros e racionais
  printf("%i\n%i\n%i\n%5i\n%05i\n%f\n%.3f\n%8.2f\n%8.2f\n", 
          10, 50, 100, 1, 21, 8.5, 3.14159, 110.5, 2556.86);

  // Imprime um caractere digitando ele e imprime outro usando o número correspondente dele da tabela ASCII
  printf("%c\n%c\n", 'A', 68);

  // Imprime strings 
  printf("%s\n%30s!\n%-30s!\n", "Boa noite", "Quero café", "Quero café");

  return 0;
}
