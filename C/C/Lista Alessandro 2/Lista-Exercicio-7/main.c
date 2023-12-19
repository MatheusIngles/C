// Escrever um programa que leia várias mensagens (uma por uma) e exiba cada
// mensagem com um espaço em branco entre todos os caracteres. Pare o programa
// quando for digitada a palavra “FIM”.

#include <stdio.h>
#include <string.h>

#define Tamanho 1000

int main(void) {

  char txt[Tamanho];

  do {
    printf("\n\n Deseja adicionar mais uma palavra? \n\n");
    scanf(" \n%[^\n]", txt);

    if (strcmp(txt, "FIM") == 0) {
      printf("\n\n-------------------------------------------------------------"
             "------------------ \n\n");
      break;
    } else {
      printf("\n Resultado da palavra com espaço: \n");
      for (int i = 0; i < strlen(txt); i++) {
        printf("%c ", txt[i]);
      }
    }
  } while (1);

  return 0;
}