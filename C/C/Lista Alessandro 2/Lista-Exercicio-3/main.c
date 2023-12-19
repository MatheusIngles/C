// Escrever um programa que leia 100 palavras (uma por uma) e inverta somente as
// N primeiras letras. Onde o valor de N é inteiro positivo: 2 <= N <= Tamanho
// da Palavra escolhido pelo usuário.

#include <stdio.h>
#include <string.h>

#define Tamanho 1000
#define duracao 100

int main(void) {

  char txt[Tamanho];
  int i, nL, ni;

  for (i = 0; i < duracao; i++) {
    printf(" \n\n Escolha a Palavra que Vc quer inverter: \n ");
    scanf(" \n%[^\n]", txt);
    printf(" Escolha Agr a quantidade de letra que vc quer inverter: \n ");
    scanf(" %i", &nL);
    if (nL <= 2 || nL > strlen(txt)) {
      printf("\n\n Selecione o Numero de letras corretamente \n\n");
      i--;
    } else {
      printf(" Palavra Original: %s \n"
             " Palavra com as Letras desejadas invertidas: ",
             txt);

      for (ni = nL; ni > 0; ni--) {
        printf("%c", txt[ni - 1]);
      }

      for (i = nL; i < strlen(txt); i++) {
        printf("%c", txt[i]);
      }
    }
  }
  return 0;
}