// 2) Escrever um programa em C que leia uma mensagem e conte a quantidade de
// caracteres brancos.
#define Tamanho 1000

#include <stdio.h>
#include <string.h>

int main(void) {

  char txt[Tamanho];
  int i, contador = 0;

  printf(" Qual a Palavra que você quer contar os espaço?\n\n");
  scanf(" \n%[^\n]", txt);
  for (i = 0; i <= strlen(txt); i++) {
    if (txt[i] == ' ') {
      contador++;
    }
  }
  printf("Quantidade: %i", contador);

  return 0;
}