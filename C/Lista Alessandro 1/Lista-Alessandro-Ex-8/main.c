/*Escrever para cada item abaixo um programa em C que preencha um array [SIZE =
100] com valores inteiros aleatórios (rand/srand) no intervalo entre [10, 99].
Após isso, faça:*/
//8. Exibir os dados ordenados em ordem crescente ou decrescente, a escolha do usuário.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100
#define MAX 99
#define MIN 10
#define DELTA (MAX - MIN + 1) + MIN

int main(void) {

  int vetor[SIZE], i, auxl, FLAG, TAMANHO = SIZE - 1, verificador = 0;
  char Resposta;
 
  srand(time(NULL));

  printf("Numeros Sortiados: \n");

  for (i = 0; i < SIZE; i++) {
    vetor[i] = rand() % DELTA;

    printf(" %i ", vetor[i]);
  }

  do{
  printf("\n\n Exercicio 8: \n\n Deseja Organizar Numeros de forma (Escreva o que esta dentro do parenteses):\n Crescente(C) \n Decrecente(D)\n ");

  scanf(" %c",&Resposta);

  if(Resposta == 'C' || Resposta == 'D')
  verificador = 1;
    
  }while(verificador == 0);
    
  if(Resposta == 'C'){
    
    do{
      FLAG = 0; 
      for(i = 0; i < TAMANHO; i++){
        if(vetor[i] > vetor[i + 1]){
          auxl = vetor[i];
          vetor[i] = vetor[i + 1];
          vetor[i + 1] = auxl;
          FLAG = 1; 
        }
      }
      TAMANHO--;
    }while(FLAG);  
  
    printf("\n Numeros em Ordem Crecente: \n");
  
    for(i = 0 ; i < SIZE ; i++ ){
      printf(" %i ",vetor[i]);
    }
      
  }
  
  if (Resposta == 'D') {
      do{
      FLAG = 0; 
      for(i = 0; i < TAMANHO; i++){
        if(vetor[i] < vetor[i + 1]){
          auxl = vetor[i];
          vetor[i] = vetor[i + 1];
          vetor[i + 1] = auxl;
          FLAG = 1; 
        }
      }
      TAMANHO--;
    }while(FLAG);
  
    printf("\n Numeros em Ordem Decrecente: \n");
  
    for(i = 0 ; i < SIZE ; i++ ){
      printf(" %i ",vetor[i]);
    }
      
 }
 
  return 0;
}