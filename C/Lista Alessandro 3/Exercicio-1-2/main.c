#include <math.h>
#include <stdio.h>

#define E 2.718
#define Tamanho 10000

// Definindo as Funções
float Exercicio1(int n);
float Exercicio2(int n);
float Exercicio3(int n);
float Exercicio4(int n);
float Exercicio5(int n);

// Fazendo as Funções
float Exercicio1(int n) {

  float calculador;

  calculador = (pow(3, n) - pow(2, n));

  return calculador;
}
float Exercicio2(int n) {

  float calculador;

  calculador = ((pow(5, n) - 1) / pow(4, n));

  return calculador;
}
float Exercicio3(int n) {

  float calculador;

  calculador = ((pow(2, n) - 2) / sqrt(pow(2, n)));

  return calculador;
}
float Exercicio4(int n) {
  float calculador;

  calculador = ((pow(E, n) - E) / (log(n) / log(E)));

  return calculador;
}
float Exercicio5(int n) {
  float calculador;
  calculador = (cbrt(pow(3, n) - pow(2, n)) / (pow(n, 3) + 1));
  return calculador;
}

int main(void) {

  int escolha, n;
  float resultado, soma = 0;

  printf("Selecione o Exercicio Que vc quer? \n");

  do {
    printf("1 - Exercicio A\n");
    printf("2 - Exercicio B\n");
    printf("3 - Exercicio C\n");
    printf("4 - Exercicio D\n");
    printf("5 - Exercicio E\n");
    scanf("%i", &escolha);

    if (escolha == 1) {

      for (int i = 0; i <= 5; i++) {
        resultado = Exercicio1(i);
        soma += resultado;
        printf("Resultado da Equação %i é: %0.1f \n", i, resultado);
      }
      printf("Soma: %0.1f\n", soma);
      printf("Media: %0.1f\n\n", soma / 6);

    } else if (escolha == 2) {
      for (int i = 0; i <= 5; i++) {
        resultado = Exercicio1(i);
        soma += resultado;
        printf("Resultado da Equação %i é: %0.1f \n", i, resultado);
      }

      printf("Soma: %0.1f\n", soma);
      printf("Media: %0.1f\n\n", soma / 5);

    } else if (escolha == 3) {

      printf("\n Quantas Vezes Vc quer rodar o codigo?\n");
      scanf(" %i", &n);

      for (int i = 0; i <= n; i++) {
        resultado = Exercicio3(i);
        soma += resultado;
        printf("Resultado da Equação %i é: %0.1f \n", i, resultado);
      }

      printf("Soma: %0.1f\n", soma);
      printf("Media: %0.1f\n\n", soma / n);

    } else if (escolha == 4) {

      printf("\n Quantas Vezes Vc quer rodar o codigo?\n");
      scanf(" %i", &n);

      for (int i = 2; i <= n; i++) {
        resultado = Exercicio4(i);
        soma += resultado;
        printf("Resultado da Equação %i é: %0.1f \n", i, resultado);
      }

      printf("Soma: %0.1f\n", soma);
      printf("Media: %0.1f\n\n", soma / n);

    } else if (escolha == 5) {

      for (int i = 0; i < 10; i++) {
        resultado = Exercicio5(i);
        soma += resultado;
        printf("Resultado da Equação %i é: %0.1f \n", i, resultado);
      }

      printf("Soma: %0.1f\n", soma);
      printf("Media: %0.1f\n\n", soma / 10);

    } else {
      printf("\n\n Selecione Outro Exercicio \n\n");
    }

  } while (1);

  return 0;
}