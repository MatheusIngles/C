#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Tamanho 100

int Lang(char palavra[Tamanho]);

int Lang(char palavra[Tamanho]){

  int Tamano;

  Tamano = strlen(palavra);
  
  return Tamano;
}

int main(void) {

  int tamanho;
  char palavra[Tamanho];

  printf("Digite a palavra escolhida: ");
  scanf("\n%[^\n]", palavra);
  tamanho = Lang(palavra);
  printf("\nA palavra possui %i letras. \n", tamanho);
  return 0;
}