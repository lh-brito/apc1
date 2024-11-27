#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
  struct usuario_t
  {
    char nome[61];
    char sexo;
    int idade;
  };

  struct usuario_t usuario;

  int menu, menu_flag = 0, id = 0;
  char valid_option[25] = "Digite uma opcao valida.";

  int limite = 2;
  system("clear");
  printf("Digite abaixo o valor limite de usuarios que devem ser cadastrados no sistema.");
  do {
    printf("\nDigite um valor a partir de 2. Valor limite: ");
    scanf("%i", &limite);
  } while (limite < 2);

  struct usuario_t usuarios[limite + 1];

  do
  {
    system("clear");
    printf("Valor limite de usuarios que podem ser cadastrados no sistema: %i\n", limite);
    printf("Digite a opcao que deseja realizar:\n");
    printf("1 - Cadastrar usuario\n");
    printf("2 - Listar usuarios cadastrados\n");
    printf("3 - Sair do sistema\n");
    printf("Opcao: ");
    scanf("%i", &menu);
    while (getchar() != '\n'); // Limpar buffer do teclado

    switch (menu)
    {
    case 1:
      if (id >= limite)
      {
        system("clear");
        printf("Limite de cadastro de usuarios alcancado.");
        printf("\nAperte Enter para voltar ao menu.");
        getchar();
      }
      else
      {
        system("clear");
        printf("Opcao selecionada: Cadastrar usuario");

        char sexo_string[50] = "\nDigite M para masculino e F para feminino: ";
        int sexo_flag = 0;
        usuario.idade = -1;
        id += 1;

        printf("\nDigite seu nome completo: ");
        scanf("%[^\n]s", usuario.nome);

        system("clear");
        printf("Qual seu sexo?");
        do
        {
          while (getchar() != '\n'); // Limpar buffer do teclado
          printf(sexo_string);
          scanf("%c", &usuario.sexo);
          usuario.sexo = toupper(usuario.sexo);
          if (usuario.sexo == 'M' || usuario.sexo == 'F')
            sexo_flag = 1;
          else
            printf(valid_option);
        } while (sexo_flag == 0);

        while (getchar() != '\n'); // Limpar buffer do teclado

        system("clear");
        do  {
          printf("Digite o valor da sua idade: ");
          scanf("%i", &usuario.idade);
          while (getchar() != '\n'); // Limpar buffer do teclado
          if (usuario.idade < 0 || usuario.idade > 120) printf("Valor invalido.\n");
        } while (usuario.idade < 0 || usuario.idade > 120);
          
        printf("\n========= Dados do usuario %i =========\n", id);
        printf("Nome: %s\n", usuario.nome);
        printf("Sexo: %c\n", usuario.sexo);
        printf("Idade: %i\n", usuario.idade);
        printf("======================================\n");

        usuarios[id] = usuario;

        // Confirmação de nova operação.
        printf("\nGostaria de fazer outra operacao?");

        int confirmation_flag = 0;

        while (confirmation_flag == 0)
        {
          printf("\nDigite Y para Sim e N para Nao: ");
          char confirmation;
          scanf("%c", &confirmation);
          while (getchar() != '\n'); // Limpar buffer do teclado
          confirmation = toupper(confirmation);
          if (confirmation == 'N')
          {
            confirmation_flag = 1;
            menu_flag = 1;
          }
          else if (confirmation == 'Y')
          {
            confirmation_flag = 1;
            printf("\n");
          }
          else
            printf(valid_option);
        }
      }

      break;

    case 2:
      system("clear");
      printf("Opcao selecionada: Listar usuarios cadastrados\n");
      printf("Quantidade de usuarios cadastrados: %i\n", id);
      for (int i = 1; i <= id; i += 1)
      {
        printf("\n========= Dados do usuario %i =========\n", i);
        printf("Nome: %s\n", usuarios[i].nome);
        printf("Sexo: %c\n", usuarios[i].sexo);
        printf("Idade: %i\n", usuarios[i].idade);
        printf("======================================\n");
      }
      printf("\nAperte Enter para voltar ao menu.");
      getchar();
      break;

    case 3:
      menu_flag = 1;
      break;

    default:
      system("clear");
      printf("%s\n", valid_option);
    }
  } while (menu_flag == 0);

  printf("\nOpcao selecionada: Sair do sistema\nFinalizando programa...\n");

  return 0;
}
