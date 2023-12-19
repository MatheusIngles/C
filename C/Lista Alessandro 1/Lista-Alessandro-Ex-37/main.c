/* Faça um algoritmo que armazene em três (3) vetores (SIZE = 10) os dados de um
carrinho de compra, sendo: Código (XXX), Quantidade de cada mercadoria do
carrinho e o seu respectivo preço. Após isso, exiba na tela:*/
// 37. Total a ser pago, dando um desconto de 2% nas mercadorias que custam mais
// de R$15.78.

#include <stdio.h>

#define SIZE 2
#define Desconto 15.78

int main(void) {

  int i = 0, Codigo[SIZE], Quantidade[SIZE];
  float Preco[i], total = 0, MercadoriaComDisconto = 0;

  while (i < SIZE) {
    printf(" Qual o codigo do Produto: \n\n ");
    scanf(" %i", &Codigo[i]);

    if (Codigo[i] > 999)
      printf("\n\n (Codigo Invalido) \n\n");
    else {
      printf("\n Qual o Quatidade do Produto %i: \n\n ", Codigo[i]);
      scanf(" %i", &Quantidade[i]);

      if (Quantidade[i] <= 0)
        printf("\n\n (Quantidade invalida) \n\n");
      else {
        printf("\n Qual o Preco do Produto %i: \n\n ", Codigo[i]);
        scanf(" %f", &Preco[i]);

        if (Preco[i] <= 0)
          printf("\n\n (Preço Invalido) \n\n");
        else {
          printf("\n\n (Produto Alocado) \n\n");
          i++;
        }
      }
    }
  }

  for (i = 0; i < SIZE; i++) {
    printf(" Produto %i:\n {Codigo %i, Quantidade %i, Preço %0.1f}\n\n", i + 1,
           Codigo[i], Quantidade[i], Preco[i]);

    if (Preco[i] > Desconto) {
      MercadoriaComDisconto = (Preco[i] - ((Preco[i] * 2) / 100));
      total = MercadoriaComDisconto * Quantidade[i];
    } else
      total += Preco[i] * Quantidade[i];
  }

  printf(" Total a Ser Pago: R$%0.1f", total);

  return 0;
}