#include <stdio.h>
#include <string.h>

#define Tamanho 10000

int main(void) {

  char txt[Tamanho], silaba[2];
  int i, contador = 0;

  printf(" Qual a silaba que vc deseja verificar se tem na palavra? \n ");
  scanf(" \n%[^\n]", silaba);

  do {
    printf("\n Palavra para verificar a presentaça da silaba: \n ");
    scanf(" \n%[^\n]", txt);

    if (strcmp(txt, "Não") == 0 || strcmp(txt, "Nao") == 0 ||
        strcmp(txt, "NAO") == 0 || strcmp(txt, "NAO") == 0 ||
        strcmp(txt, "nao") == 0) {
      printf("\n\n Você escolheu sair!!!\n\n ");
      break;
    } else {
      for (i = 0; i < strlen(txt) - 1; i++) {
        if (txt[i] == silaba[0] && txt[i + 1] == silaba[1]) {
          contador++;
        }
      }
    }

  } while (1);

  printf("\n Quantidade de Vezes que aparece %s nas palavras: %i ", silaba,
         contador);
  return 0;
}