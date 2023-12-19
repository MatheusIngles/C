// 34. Faça um algoritmo em C que preencha dois vetores A e B (TAMANHO: 10) com
// Preços reais (R ). + Depois de preencher os vetores A e B, exibir um vetor C
// formado pela soma dos termos de A + B. Antes da operação da soma, acrescente
// 2% aos preços de A e desconte 7% dos preços de B.
#include <stdio.h>

#define SIZE 10

int main(void) {

  int i, A[SIZE], B[SIZE], C[SIZE];

  for (i = 0; i < SIZE; i++) {
    printf(" Qual o valor do A na posição %i \n\n ", i + 1);
    scanf(" %i", &A[i]);

    printf(" Qual o Valor do B na posição %i \n\n ", i + 1);
    scanf(" %i", &B[i]);

    printf("\n\n (Alocado na memoria) \n\n");

    C[i] = (A[i] + (A[i] * 2) / 100) + (B[i] - ((B[i] * 7) / 100));
  }

  for (i = 0; i < SIZE; i++) {
    printf(" O valor do C na posição %i:\n\n %i \n\n", i + 1, C[i]);
  }

  return 0;
}