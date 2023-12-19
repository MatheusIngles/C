//EXERCÍCIOS: Array char + Strings
//1) Escrever um programa em C que leia uma string e exiba a string original e ao contrário na tela.

#define Tamanho 1000

#include <stdio.h>
#include <string.h>

int main(void) {

  char txt[Tamanho];
  int i, sa;

  printf(" Qual a palavra que vc quer ver ao contrário? \n\n");
  scanf("\n%[^\n]", txt);
  printf(" Palavra Original: %s \n" " Palavra ao contrário: ", txt);

  for(i = 0; i <= strlen(txt);i++){
    sa = strlen(txt) - i;
    printf("%c", txt[sa]);
  };
  
  return 0;
}