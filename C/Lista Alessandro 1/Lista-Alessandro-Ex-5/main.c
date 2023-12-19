/*Escrever para cada item abaixo um programa em C que preencha um array [SIZE =
100] com valores inteiros aleatórios (rand/srand) no intervalo entre [10, 99].
Após isso, faça:*/
// 5. Exibir a média dos termos múltiplos de um Número (Número ≥ 10) escolhido pelo usuário.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100
#define MAX 99
#define MIN 10
#define DELTA (MAX - MIN + 1) + MIN

int main(void) {

 int vetor[SIZE], i, numeroMedia = 0, numeroEscolhido, DivMedia = 0;
 float media;

  for (i = 0; i < SIZE; i++) {
    vetor[i] = rand() % DELTA;
    printf(" %i ", vetor[i]);
  }
  
  printf("\n\n Exercicio 5:");

  do{
    printf(" \n Qual Numero voce quer ?\n ");    
    scanf("%i",&numeroEscolhido);
    if(numeroEscolhido < 10)
    printf(" \n O numero escolhido deve ser maior ou igual a 10\n");
  }while(numeroEscolhido < 10);

  printf("\n Numeros Multiplos do Numero escolhido: \n\n");
  
  for (i = 0; i < SIZE; i++) {
    if(numeroEscolhido % vetor[i] == 0){
      printf(" %i ",vetor[i]);
      numeroMedia += vetor[i];
      DivMedia++;
    }
  }

  media = ((numeroMedia * 1.0)/DivMedia) ;

  printf("\n\n Media dos termos múltiplos escolhidos: %0.2f", media);
  
  return 0;
}
  
