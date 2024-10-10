#include <stdio.h>
#include <ctype.h>

int main () {
  int menu, menu_flag = 0;
  char clean_console [12] = "\e[1;1H\e[2J", valid_option [36] = "\e[1;1H\e[2JDigite uma opcao valida.";
  printf(clean_console);
  
  do {
    printf("Digite a opcao que deseja fazer:\n1 - Cadastrar\n2 - Sair do sistema\nOpcao: ");
    scanf("%d", &menu);
    getchar();

    switch(menu) {
        case 1:
          printf("Opcao selecionada: Cadastrar");

          char sex, name [30], sex_string [50] = "\nDigite M para masculino e F para feminino: ";
          int age = 0, sex_flag = 0;
          
          printf("\nDigite seu nome completo: ");
          scanf("%[^\n]s", name);

          printf("\nQual seu sexo?");
          do {
            getchar();
            printf(sex_string);
            scanf("%c", &sex);
            sex = toupper(sex);
            if (sex == 'M' || sex == 'F') sex_flag = 1;
            else printf(valid_option);
          } while (sex_flag == 0);

          printf("\nDigite a sua idade: ");
          scanf("%d", &age);
          getchar();

          printf("\n========= Dados do usuario =========\n");
          printf("Nome: %s\n", name);
          printf("Sexo: %c\n", sex);
          printf("Idade: %d\n", age);
          printf("====================================\n");
          
          // Confirmação de nova operação.
          printf("\nGostaria de fazer outra operacao?");
          
          int confirmation_flag = 0;
          
          while (confirmation_flag == 0) {
            printf("\nDigite Y para Sim e N para Nao: ");
            char confirmation;
            scanf("%c", &confirmation);
            confirmation = toupper(confirmation);
            if (confirmation == 'N') {
              confirmation_flag = 1;
              menu_flag = 1;
            } else if (confirmation == 'Y') {
              confirmation_flag = 1;
              printf("\n");
            } else printf(valid_option);
            getchar();
          }
          
          break;
      
        case 2:
          menu_flag = 1;
          break;
      
        default:
          printf(valid_option);
          break;
    }
  } while(menu_flag == 0);

  printf("\nOpcao selecionada: Sair do sistema\nFinalizando programa...\n");
  
  return 0;
}
