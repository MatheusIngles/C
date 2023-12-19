// Escrever um programa em C que leia um nome completo (com nomes e sobrenomes)
// e exiba na tela uma string com as iniciais de cada palavra com um ponto entre
// elas. Não exibir as preposições “da”, “de”, “di”, “do”. Exemplo (Nome
// completo): Fulano Beltrano Cicrano de Tal – Abreviado: F.B.C.T.

#include <stdio.h>
#include <string.h>

#define Tamanho 1000

int main(void) {

  char txt[Tamanho], abrevidado[Tamanho] = " ", provisoria[Tamanho];

  printf("\n\n Escreva Seu nome e Seu sobrenome: \n\n");
  scanf(" \n%[^\n]", txt);

  for (int i = 0; i < strlen(txt); i++) {

    if (i == 0) {
      provisoria[0] = txt[i];
      provisoria[1] = '\0';
      strcat(abrevidado, provisoria);
      strcat(abrevidado, ".");
    }

    if (txt[i] == ' ') {
      if (!(txt[i + 1] == 'd' && (txt[i + 2] == 'a' || txt[i + 2] == 'e' ||
                                  txt[i + 2] == 'i' || txt[i + 2] == 'o'))) {
        provisoria[0] = txt[i + 1];
        provisoria[1] = '\0';
        strcat(abrevidado, provisoria);
        strcat(abrevidado, ".");
      }
    }
  }

  printf("\n\n A abreviação do seu nome é: %s", abrevidado);
  return 0;
}