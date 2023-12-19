// Escrever um programa que leia uma mensagem e exiba a mesma e outra mensagem
// alterada através da substituição da original por uma com a primeira letra da
// mensagem e suas ocorrências substituídas pelo caractere ꞌ-ꞌ: Exemplo:
// ABCADAEAFGAH – Exibe: -BC-D-E-FG-H

#include <stdio.h>
#include <string.h>

#define Tamanho 1000

int main(void) {

  char txt[Tamanho], palavra;

  printf("Qual a palavra que vc deseja: \n");
  scanf("\n%[^\n]", txt);
  palavra = txt[0];
  printf("A palavra digitada foi: %s \nE a palavra sem a primeira letra é:",
         txt);
  
  for (int i = 0; i < strlen(txt); i++) {
    if (palavra == txt[i]) {
      txt[i] = '-';
    }
  }

  printf("%s", txt);

  return 0;
}