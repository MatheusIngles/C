// Criar uma função que receba um número inteiro qualquer Positivo e retorne:
// logN π se N for PRIMO ou retorne: logπ N se N for NÃO for PRIMO. Dica
// Matemática: logB A = logC A / logC B Na main, use a função 500 vezes para
// valores de N lidos do usuário (um de cada vez).

#include <math.h>
#include <stdio.h>

#define Tamanho 500
#define Pi 3.14

int Verificador(int N);
float calcular(int N);

float calcular(int N) {

  float resposta;

  if (Verificador(N) == 1) {
    resposta = log(Pi) / log(N);
  } else {
    resposta = log(N) / log(Pi);
  }

  return resposta;
}
int Verificador(int N) {
  int Flag = 0;

  if (N == 2) {
    Flag = 1;
  } else {
    for (int i = 2; i < N; i++) {
      if (N % i == 0)
        Flag = 1;
    }
  }

  return Flag;
}
int main(void) {

  int N;
  float resultado;

  for (int i = 0; i < Tamanho; i++) {
    printf("\n Escolha o Valor de N: \n ");
    scanf("%i", &N);
    if (N < 2) {
      printf("\n O numero dese ser maior ou igual a 2 \n");
      i--;
    } else {
      resultado = calcular(N);
      printf(" A Sua resposta é %0.2f", resultado);
    }
  }
  return 0;
}