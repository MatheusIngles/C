// Escrever um programa em C que leia uma mensagem e exiba na tela a quantidade
// de vezes que aparece a substring “UVV” na mensagem lida do usuário.
#include <stdio.h>
#include <string.h>

#define Tamanho 1000

int main(void) {

  char txt[Tamanho];
  int contador = 0;

  printf(" Escreva a sua frase: \n");
  scanf("\n%[^\n]", txt);
  
  for (int i = 0; i < strlen(txt); i++) {
    if (txt[i] == 'U' && txt[i + 1] == 'V' && txt[i + 2] == 'V')
      contador++;
  }

  printf("\n\n Quantidade de UVVs na frase: %i", contador);
  return 0;
}