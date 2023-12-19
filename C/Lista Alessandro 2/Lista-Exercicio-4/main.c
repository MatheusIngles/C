//Escrever um programa em C que leia 1000 mensagens e conte a quantidade de caractere ꞌUꞌ ou ꞌVꞌ.

#include <stdio.h>
#include <string.h>

#define Tamanho 1000
#define Caract 1000

int main(void) {

  char txt[Caract];
  int i, i2, contador = 0, contadorMinusculo = 0;

  for (i = 0; i < Tamanho; i++) {
    printf("\n\n Qual a palavra que você deseja escrever? \n\n ");
    scanf(" \n%[^\n]", txt);

    for (i2 = 0; i2 < strlen(txt); i2++) {
      if (txt[i2] == 'U' || txt[i2] == 'V') {
        contador++;
      } else if (txt[i2] == 'u' || txt[i2] == 'v') {
        contadorMinusculo++;
      }
    }
  }

  printf("\n\n Quantidade de vezes que aparaceram o U ou o V (Maiusculos): %i "
         "\n Quantidade de vezes que apareceram u ou v (minusculos): %i ",
         contador, contadorMinusculo);

  return 0;
}