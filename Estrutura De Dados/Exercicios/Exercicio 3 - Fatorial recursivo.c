#include <stdio.h>
#include <stdlib.h>

int fatorial(int n);

int fatorial(int n) {

  if (n > 1) {
    n *= fatorial(n - 1);
  } else if (n <= 0) {
    return 1;
  }

  return n;
}

int main(void) {

  int resposta;

  printf("Qual o Numero que vc quer? \n");
  scanf("%i", &resposta);

  resposta = fatorial(resposta);

  printf("\nResultado: %i", resposta);

  return 0;
}