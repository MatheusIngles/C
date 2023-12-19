/*
ATIVIDADE EXTRA:
Preencher um vetor (SIZE = 1000) com valores aleatórios de 4 dígitos.
Após isso, enumerar e exibir na tela as 10 menores senhas: ÍMPARES e MÚLTIPLAS DE 7
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 1000
#define MAX 9999
#define MIN 1000
#define Delta (MAX - MIN + 1) + MIN

int main(void){
  
  int Vetor[SIZE], loca = 0, i, FLAG, aux, TAMANHO, contador, xereca, dale ;

  srand(time(NULL));
  printf(" 10 menores senhas:");

  for(contador = 0; contador < SIZE; contador++){
    Vetor[contador] = rand() % Delta;
  }

  TAMANHO = SIZE - 1;
  do{
    FLAG = 0; 
    for(i = 0; i < TAMANHO; i++){
      if(Vetor[i] > Vetor[i + 1]){
        aux = Vetor[i];
        Vetor[i] = Vetor[i + 1];
        Vetor[i + 1] = aux;
        FLAG = 1; 
      }
    }
    TAMANHO--;
  }while(FLAG);

  
  return 0;
}