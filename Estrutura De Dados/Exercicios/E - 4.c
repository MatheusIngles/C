#include <stdio.h>
#include <stdlib.h>

#define Tamanho 100

int fibonase(int anterior, int proximo);

int fibonase(int anterior, int proximo) {

  int resultado = proximo + anterior;
  return resultado;
}

int main(void) {
  int anterior = 0, proximo = 1, resultado = 0, numeroEscolhido,
      armazenarFibonase[Tamanho], contador = 0, flag = 0;

  printf("Qual o numero que vc quer começar?\n");
  scanf("%i", &numeroEscolhido);

  while (contador < 10) {
    resultado = fibonase(anterior, proximo);
    printf("\n %i \n", resultado);
    if ((anterior <= numeroEscolhido && proximo <= numeroEscolhido &&
        resultado > numeroEscolhido+1)|| flag) {
      armazenarFibonase[contador] = resultado;
      anterior = proximo;
      proximo = resultado;
      contador++;
      flag = 1;
    } else {
      anterior = proximo;
      proximo = resultado;
    }
  }

  printf("\n Printando os numeros de fibonase depois do numero %i:",
         numeroEscolhido);
  for (int i = 0; i < 10; i++) {
    printf("\n- %i", armazenarFibonase[i]);
  }
  return 0;
}