#include <stdio.h>
#include <string.h>

int main(void) {

  int N1, N2;
  char Escolha[3]; 
  
  printf("Digite o valor do Numero 1:\n");
  scanf("%i", &N1);
  printf("Digite o valor do Numero 2:\n");
  scanf("%i", &N2);

  if ((N1 >= 0) && (N2 >= 0)){

  printf("Escolha a operação que você deseja realizar:\n\n"
       "SOM\n"
       "SUB\n"
       "MUL\n"
       "DIV\n\n");

    printf("Digite a operação que deseja:");
    scanf("%s", Escolha);

    if (strcmp(Escolha, "SOM") == 0) {
        printf("Você escolheu a operação de Soma.\n");
        printf("A Soma é: %i \n", N1 + N2);
      
    } else if (strcmp(Escolha, "SUB") == 0) {
        printf("Você escolheu a operação de Subtração.\n");
        printf("A Subtração é: %i", N1 - N2);
      
    } else if (strcmp(Escolha, "MUL") == 0) {
        printf("Você escolheu a operação de Multiplicação.\n");
        printf("A Multiplicação é: %i", N1 * N2);
      
    } else if (strcmp(Escolha, "DIV") == 0) {
        printf("Você escolheu a operação de Divisão.\n");
        printf("A Divisäo é: %.4f\n"
               "O quociente é: %i\n"
               "O Resto é: %i\n", N1/(N2 * 1.0), N1/N2, N1 % N2);
      
    } else {
        printf("Operação não reconhecida.\n");
    }
    
  } else 
    printf("Escolha numeros que sejam maiores que 0 e naturais. \n");
  return 0;
}