// Crie somente uma (1) função e seu protótipo, conforme para a descrição dos
// exercícios: 6 acima.
#include <stdio.h>

// Declarando A função
void ArranjoECombinacao(int n, int p, float *p1, float *p2);
void Fatorial(int Fatori, int *p);
// Chamando a Função
void Fatorial(int Fatori, int *p) {
  int Total = 1;

  for (int i = 1; i <= Fatori; i++) {
    Total *= i;
  }

  *p = Total;
}
void ArranjoECombinacao(int n, int p, float *p1, float *p2) {

  float Arranjo, Combinacao;
  int nfatorado, pFatorado, n_pfatorando, *p3, *p4, *p5;
  p3 = &nfatorado;
  p4 = &pFatorado;
  p5 = &n_pfatorando;

  Fatorial(n, p3);
  Fatorial(p, p4);
  Fatorial(n - p, p5);

  Arranjo = (nfatorado / n_pfatorando);
  Combinacao = (Arranjo / pFatorado);

  *p1 = Arranjo;
  *p2 = Combinacao;
}

int main(void) {
  int n, p, escolha;
  float Arranjo, Combinacao, *p1, *p2;
  p1 = &Arranjo;
  p2 = &Combinacao;

  do {
    printf("\n O que deseja fazer Primeiro? \n 1:Confirmar\n 2:Sair\n ");
    scanf("%i", &escolha);
    if (escolha == 1) {
      printf("\n Qual o Valor de n?\n ");
      scanf("%i", &n);
      printf("\n Qual o Valor de p?\n ");
      scanf("%i", &p);
      if ((n > 0 && p > 0) && n >= p) {
        ArranjoECombinacao(n, p, p1, p2);
        printf("\n O total do Arranjo Deu: %0.1f\n O total da Combinação Deu: "
               "%0.1f",
               Arranjo, Combinacao);
      } else {
        printf("\n Digite a opção correta \n");
      }
    } else if (escolha == 2) {
      break;
    } else {
      printf("\n Digite a opção correta \n");
    }
  } while (1);
  return 0;
}