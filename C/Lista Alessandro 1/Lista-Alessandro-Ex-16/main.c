/*Escrever para cada item abaixo um programa em C que preencha um array [SIZE =
10] com valores reais aleatórios (rand/srand) no intervalo entre [10, 99] com
uma (1) casa decimal de precisão. Após isso, faça: */
// 16. Exibir os dados ordenados em ordem crescente ou decrescente, a escolha do
// usuário.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10
#define MIN 100
#define MAX 999
#define DELTA (MAX - MIN + 1) + MIN

int main(void) {

  int aux = 0, i, FLAG, Tamanho = SIZE - 1, verificador = 0, vetor[SIZE];
  char Resposta;

  srand(time(NULL));

  for (i = 0; i < SIZE; i++) {
    vetor[i] = rand() % DELTA;
  }

  do {
    printf(
        " Como vc quer ordenar o array:\n\n Crescente(C)\n Decrescente(D)\n\n "
        "(Coloque A letra em parenteses para escolher)\n ");
    scanf(" %c", &Resposta);
    if (Resposta == 'C' || Resposta == 'D')
      verificador = 1;
    else
      printf("\n\n Escreva C ou D nada mais. \n\n");
  } while (verificador == 0);

  if(Resposta == 'C'){
    do{
      FLAG = 0;
      for(i = 0; i < Tamanho; i++){
        if(vetor[i] > vetor[i + 1]){
          aux = vetor[i];
          vetor[i] = vetor[i + 1];
          vetor[i + 1] = aux;
          FLAG = 1;
        }
      }
      Tamanho--;
    }while(FLAG);

    printf(" Numeros em ordem: \n\n");
    
    for(i = 0; i < SIZE; i++){
      printf(" %0.1f ", (vetor[i]/10.0));
    }
  } 
  
  if(Resposta == 'D'){
    do{
      FLAG = 0;
      for(i = 0; i < Tamanho; i++){
        if(vetor[i] < vetor[i + 1]){
          aux = vetor[i];
          vetor[i] = vetor[i + 1];
          vetor[i + 1] = aux;
          FLAG = 1;
        }
      }
      Tamanho--;
    }while(FLAG);

    printf(" Numeros em ordem: \n\n");
    
    for(i = 0; i < SIZE; i++){
      printf(" %0.1f ", (vetor[i]/10.0));
    }
  }

  return 0;
}
      
  