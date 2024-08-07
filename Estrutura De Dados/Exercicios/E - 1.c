#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define Tamanho 100

int main(void) {

  int vetor[Tamanho], contador = 0;

  srand(time(NULL));
  for(int i = 0;i < Tamanho;i++){
    vetor[i] = rand() % 100 + 1;
  }
  
  for(int i = 0; i< Tamanho; i++){
    if(vetor[i] % 2 ==0){
      contador++;
    }
  }
  
  printf("Contando todos os numeros que são pares: %i\n", contador);
  return 0;
}