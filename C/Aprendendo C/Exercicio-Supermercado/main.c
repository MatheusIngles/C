/*Faça um algoritmo que registre o preço da Cesta Básica de um total de 1000
supermercados no Brasil. Após isso, faça:

LETRA A: Exibir na tela a quantidade de supermercados, em porcentagem, que
praticam um preço realmente abaixo do preço médio de mercado. LETRA B: Exibir a
Lista de supermercados que praticam a política de preços abaixo da média de
mercado.*/

#include <stdio.h>

int main(void) {

#define TAMANHO 1000
#define CESTAMINIMA 880.49

  float Supermercado[TAMANHO], Soma = 0, Media = 0, AbaixoDaMedia = 0;
  int indice = 0;

  while (indice < TAMANHO) {
    printf("\n%i Supermercado \n"
           "Qual o valor da Cesta Basica na sua cidade: ",
           indice + 1);
    scanf("%f", &Supermercado[indice]);
    if (Supermercado[indice] >= CESTAMINIMA) {
      Soma += Supermercado[indice];
      indice++;
    } else
      printf("\n Valor Muito Baixo \n");
  }

  Media = Soma / TAMANHO;

  printf("\n Lista de Supermercados que são Abaixo da Media: \n");

  for (indice = 0; indice < TAMANHO; indice++) {
    if (Supermercado[indice] < Media) {
      AbaixoDaMedia++;
      printf("- Supermercado Numero: %i \n", indice + 1);
    }
  }

  printf("\n Porcentagem de Supermercados Abaixo da Media: \n"
         "- %0.1f%%",
         (AbaixoDaMedia / TAMANHO) * 100);

  return 0;
}