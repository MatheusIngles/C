/***EXEMPLO 2**: Fazer um algoritmo que leia várias palavras e

  exiba a quantidade de palavras (em %) lidas que são:

  *   de tamanho PAR
  *   de tamanho ÍMPAR

  Pare o programa quando o usuário digitar a string: "SAIR".*/

#include <stdio.h>
#include <string.h>

#define SIZE 1000

int main(void) {
  char palavra[SIZE];
  int tamanho, par = 0, impar = 0;

  while (1) {
    printf("Qual A palavra que vc deseja? \n");
    scanf("\n%[^\n]", palavra);
    tamanho = strlen(palavra);

    if (strcmp(palavra, "SAIR") == 0) {
      break;
    } else {
      if (tamanho % 2 == 0) {
        par++;
      } else {
        impar++;
      }
    }
  }

  printf("\n\n-----------------------------------------------------------------"
         "-----------\n\n");
  printf("Quantidade de palavras: %i \n", par + impar);
  printf("A quantidade de palavras pares digitadas foi: %0.2f%%\nA quantidade "
         "de palavras impares digitadas foi: %0.2f%% \n",
         (100.0 * (par / (par + impar))), (100.0 * (impar / (par + impar))));

  return 0;
}