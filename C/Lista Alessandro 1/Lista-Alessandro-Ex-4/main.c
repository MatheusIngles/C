/*Escrever para cada item abaixo um programa em C que preencha um array [SIZE =
100] com valores inteiros aleatórios (rand/srand) no intervalo entre [10, 99].
Após isso, faça:*/
// 4. Exibir a quantidade de termos armazenados que são ÍMPARES e PARES; respectivamente.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100
#define MAX 99
#define MIN 10
#define DELTA (MAX - MIN + 1) + MIN

int main(void) {

  int vetor[SIZE], i, inpares = 0, pares = 0;

  srand(time(NULL));

  printf("Numeros Sortiados: \n");

  //Exercicio 4
  //-------------------------------------------------------------------------------------------
  
  for (i = 0; i < SIZE; i++) {
    vetor[i] = rand() % DELTA;
    printf(" %i ", vetor[i]);

    if (vetor[i] % 2 == 0)
      inpares++;
    else
      pares++;
  }
 
  printf("\n\n Exercicio 4: \n Numeros Inpares: %i \n Numeros Pares: %i", inpares, pares);

  return 0;
}
