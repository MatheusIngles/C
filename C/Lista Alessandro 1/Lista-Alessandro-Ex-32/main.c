/* 32.Faça um algoritmo em C que preencha dois vetores A e B (TAMANHO: 5) com valores inteiros.
Depois de preencher os vetores A e B, exibir um vetor C, sendo que C = A + B.*/

#include <stdio.h>

#define SIZE 5

int main(void) {
  
  int i, A[SIZE],B[SIZE],C[SIZE];

  for(i = 0;i < SIZE;i++){
    printf("\n Qual o valor do A na posição %i \n ", i+1);
    scanf(" %i", &A[i]);
    printf("\n Qual o valor de B na posição %i \n ", i+1);
    scanf(" %i", &B[i]);

    C[i] = A[i] + B[i];
  }

   printf(" \n\n Valor Do C nas posições: \n\n");
    
  for(i = 0; i < SIZE; i++){
    printf(" C na posição %i: %i \n", i+1, C[i]);
  }
  
  return 0;
}