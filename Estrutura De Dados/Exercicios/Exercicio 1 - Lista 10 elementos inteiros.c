#include <stdio.h>
#include <stdlib.h>

#define Tamanho 100

int main(void) {

  int vetor[Tamanho];

  for (int i = 0; i < 10; i++) {
    printf("\nQual Numero quer preencher:");
    scanf("%i", &vetor[i]);
  }

  int menor = vetor[0], maior = vetor[0];

  for (int i = 0; i < 10; i++) {

    if (vetor[i] < menor) {
      menor = vetor[i];
    }

    if (vetor[i] > maior) {
      maior = vetor[i];
    }
  }

  printf("\n Maior e menor numero, respectivamente: %i e %i", maior, menor);

  return 0;
}