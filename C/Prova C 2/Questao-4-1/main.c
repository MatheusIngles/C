#include <stdio.h>
#define PrecoMinimo 0.25

// Declarando a Função
void Mercadoria(float preco, float quantidade, int categoria, float *TSD,
                float *TCS);
// Chamando a Função
void Mercadoria(float preco, float quantidade, int categoria, float *TSD,
                float *TCD) {

  float PrecoTotal = preco * quantidade;

  *TSD = PrecoTotal;
  if (categoria == 1) {
    *TCD = PrecoTotal - (PrecoTotal * 0.03);
  } else if (categoria == 2) {
    *TCD = PrecoTotal + (PrecoTotal * 0.05);
  } else {
    *TCD = PrecoTotal - (PrecoTotal * 0.07);
  }
}

int main(void) {

  int escolha, categoria;
  float Preco, Quantidade, TSD, TCD;

  do {
    printf("\n Quer Ver o Inserir de Mercadoria:\n 1: Inserir Mercadoria\n 0: "
           "Sair do Programa.\n");
    scanf("%i", &escolha);
    if (escolha == 1) {
      printf("\n Inserir Preço:\n");
      scanf("%f", &Preco);
      if (Preco >= PrecoMinimo) {
        printf("\n Inserir Quantidade: \n");
        scanf("%f", &Quantidade);
        if (Quantidade > 0) {
          printf("\n Qual a categoria? \n");
          scanf("%i", &categoria);
          if (categoria == 1 || categoria == 2 || categoria == 3) {
            Mercadoria(Preco, Quantidade, categoria, &TSD, &TCD);
            printf("\n O Tsd é : %0.1f\n O Tcd é: %0.1f\n", TSD, TCD);
          } else {
            printf("\n Digite Certo \n");
          }
        } else {
          printf("\n Digite Certo \n");
        }
      } else {
        printf("\n Digite Certo \n");
      }
    } else if (escolha == 0) {
      break;
    } else {
      printf("\n Digite Certo \n");
    }
  } while (1);

  return 0;
}