//**EXEMPLO 1**: Fazer um algoritmo que leia várias palavras e exiba seu
// respectivo tamanho. Pare o programa quando for digitada uma palavra com menos
// que 5 caracteres.

#include <stdio.h>
#include <string.h>

#define SIZE 100
int main(void) {
  char vetor[SIZE];
  int LapadaDelaTamanho;

  do {
    printf("\n  Qual a palavra que deseja descobrir seu tamanho: \n ");
    scanf(" \n%[^\n]", vetor);
    LapadaDelaTamanho = strlen(vetor);
    if (LapadaDelaTamanho > 5)
      printf("\n  O tamanho da palavra é: %i \n", LapadaDelaTamanho);
  } while (LapadaDelaTamanho > 5);

  return 0;
}