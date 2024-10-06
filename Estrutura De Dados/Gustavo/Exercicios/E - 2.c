#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define Tamanho 100

// Cabeçalho
int isPrimo(int vetor[Tamanho]);

// Função
int isPrimo(int vetor[Tamanho]) {

  int isdivisor = 0;

  for (int i = 0; i < Tamanho; i++) {
    int contador = 0;
    for (int j = 0; j <= vetor[i]; j++) {
      if (vetor[i] % j == 0) {
        contador++;
      }

    }
      if (contador == 2|| vetor[i] == 1) {
        isdivisor++;
      }
  }

  return isdivisor;
}

int main(void) {

  int vetor[Tamanho], contador = 0;

  srand(time(NULL));
  for (int i = 0; i < Tamanho; i++) {
    vetor[i] = rand() % 100 + 1;
  }

  contador = isPrimo(vetor);

  printf("Quantidade de Numeros que sao primos: %i", contador);

  return 0;
}