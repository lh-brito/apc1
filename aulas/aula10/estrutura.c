#include <stdio.h>

int main() {
  struct contato_t {
    char nome[61];
    long long int telefone;
    char email[61];
  };

  struct contato_t contato;

  printf("Entre com o nome do contato: ");
  scanf("%[^\n]s", contato.nome);
  while (getchar() != '\n');
  printf("Entre com o telefone do contato: ");
  scanf("%lli", &contato.telefone);
  while (getchar() != '\n');
  printf("Entre com o email do contato: ");
  scanf("%[^\n]s", contato.email);
  while (getchar() != '\n');

  printf("\nDados do contato:\n");
  printf("Nome........: %s\n", contato.nome);
  printf("Telefone....: %lli\n", contato.telefone);
  printf("Email.......: %s\n", contato.email);

  struct contato_t outro_contato;
  outro_contato = contato;
  printf("\nDados do contato:\n");
  printf("Nome........: %s\n", outro_contato.nome);
  printf("Telefone....: %lli\n", outro_contato.telefone);
  printf("Email.......: %s\n", outro_contato.email);

  struct contato_t contatos[10];

  contatos[0] = contato;
  contatos[1] = contato;

  return 0;
}
