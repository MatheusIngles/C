#include <math.h>
#include <stdio.h>

// Declarando as funções
float fatorial(int n);
float Exercicio1e2(int n);
float Exercicio3(int fr);

// Chamando ela

float fatorial(int n) {

  int acumulado = 1;

  for (int i = 0; i < n; i++) {
    acumulado *= (n - i);
  }
  return acumulado;
}
float Exercicio1e2(int n) {

  int fr = fatorial(n);
  float calcu = 1.0 / (fr);

  return calcu;
}
float Exercicio3(int n) {
  int fr = fatorial(n);
  float calcu = 1.0 / cbrt(fr);
  return calcu;
}

int main(void) {

  int escolha, nE;
  float resultado, soma = 1;

  printf(" Selecione o Exercicio que vc quer\n");
  do {
    printf(" Escolha qual exercicio vc quer? (1 a 5)\n ");
    scanf("%i", &escolha);

    if (escolha == 1) {
      for (int n = 0; n < 8; n++) {
        resultado = Exercicio1e2(n);
        printf(" O resultado do exercicio 1 quando n = %i é %0.4f\n", n,
               resultado);
        soma += resultado;
      }
      printf("\n A soma dos resultados é: %0.1f \n A media dos resultados é: "
             "%0.3f \n",
             soma, soma / 8);
    } else if (escolha == 2) {
      printf("\n Qual o Valor de N?\n ");
      scanf("%i", &nE);

      for (int n = 0; n < nE; n++) {
        resultado = Exercicio1e2(n);
        printf(" O resultado do exercicio 1 quando n = %i é %0.4f\n", n,
               resultado);
        soma += resultado;
      }
      printf("\n A soma dos resultados é: %0.1f \n A media dos resultados é: "
             "%0.4f \n",
             soma, soma / nE);
    } else if (escolha == 3) {
      printf("\n Qual o Valor de N?\n ");
      scanf("%i", &nE);
      for (int n = 0; n < nE; n++) {
        resultado = Exercicio3(n);
        printf(" O resultado do exercicio 1 quando n = %i é %0.4f\n", n,
               resultado);
        soma += resultado;
      }
      printf("\n A soma dos resultados é: %0.1f \n A media dos resultados é: "
             "%0.4f \n",
             soma, soma / nE);
    } else if (escolha == 4){
       
    }
  } while (1);
  return 0;
}