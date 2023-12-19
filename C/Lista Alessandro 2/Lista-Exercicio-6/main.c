// Escrever um programa em C que leia uma string e identifique se esta é um
// palíndromo. Palíndromo é quando uma palavra pode ser lida da esquerda para
// direita e vice-versa permanecendo a mesma palavra: RADAR, ABA, ANILINA,
// dentre outras.
#include <stdio.h>
#include <string.h>

#define Tamanho 1000

int main(void) {
  char txt[Tamanho], pali[Tamanho];

      printf("\n Escolha a palavra que Vc deseja ver se é um palíndrom: \n");
      scanf(" \n%[^\n]", txt);

      for (int i = 0; i < strlen(txt); i++) {
        pali[strlen(txt) - i - 1] = txt[i];
      }

      if (strcmp(pali, txt) == 0) {
        printf("\n\n Sim, Essa palavra é um palíndromo. \n\n");
      } else {
        printf("\n\n Não, Essa palavra não é um palíndromo. \n\n");
      }

  return 0;
}