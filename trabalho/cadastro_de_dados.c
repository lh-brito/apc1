#include <stdio.h>

int main () {
  int menu, menu_flag = 0;
  char valid_option [30] = "\nDigite uma opção válida.\n";
  
  do {
    printf("Digite a opção que deseja fazer:\n1 - Cadastrar\n2 - Sair do sistema\nOpção: ");
    scanf("%d", &menu);
    getchar();
    switch(menu) {
        case 1:
          printf("\nOpção selecionada: Cadastrar\n");

          char name [30], sex;
          char sex_string [50] = "Digite M para masculino e F para feminino: ";
          int sex_flag = 0;
          int age;
          
          printf("Digite seu nome completo: ");
          scanf("%[^\n]s", name);
          printf("\nQual seu sexo?\n");

          do {
            getchar();
            printf(sex_string);
            scanf("%c", &sex);
            if (sex == 'M' || sex == 'm' || sex == 'F' || sex == 'f') sex_flag = 1;
            else printf(valid_option);
          } while (sex_flag == 0);

          printf("\nDigite a sua idade: ");
          scanf("%d", &age);
          getchar();

          printf("\n========= Dados do usuário =========\n");
          printf("Nome: %s\n", name);
          printf("Sexo: %c\n", sex);
          printf("Idade: %d\n", age);
          printf("====================================\n");
          
          // Confirmação de nova operação.
          int confirmation_flag = 0;
          printf("\nGostaria de fazer outra operação?");
          do {
            printf("\nDigite Y para Sim e N para Não: ");
            char confirmation;
            scanf("%c", &confirmation);
            if (confirmation == 'N' || confirmation == 'n') {
              confirmation_flag = 1;
              menu_flag = 1;
            } else if (confirmation == 'Y' || confirmation == 'y') {
              confirmation_flag = 1;
              printf("\n");
            } else printf(valid_option);
            getchar();
          } while (confirmation_flag == 0);
          
          break;
      
        case 2:
          menu_flag = 1;
          break;
      
        default:
          printf(valid_option);
          break;
    }
  } while(menu_flag == 0);

  printf("\nOpção selecionada: Sair do sistema\nFinalizando programa.\n");
  
  return 0;
}
