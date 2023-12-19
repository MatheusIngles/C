// Criar uma função e seu protótipo que receba o valor de um ano e retorne da
// função: Zero (0): Ano NÃO é Bissexto ou Um (1): Ano é Bissexto. Regras do ano
// Bissexto (Ver exercício 15): Na main, use a função 100 vezes para valores de
// anos lidos do usuário (um de cada vez).

#include <stdio.h>

#define Tamanho 100
// Declarando a Função
int Verificar(int Ano);
// Chamando ela
int Verificar(int Ano) {
  if (Ano % 400 == 0 || (Ano % 4 == 0 && Ano % 100 != 0)) {
    return 1;
  } else {
    return 0;
  }
}
int main(void) {
  int Ano, resposta;

  for (int i = 0; i < Tamanho; i++) {
    printf("\n Digite o Valor do Ano: \n ");
    scanf("%i", &Ano);

    if (Ano <= 0) {
      printf("\nAno inválido. Por favor, digite um ano válido.\n");
      i--;
    } else {
      resposta = Verificar(Ano);
      if (resposta == 1) {
        printf("\n Sim, O ano %i é bissexto \n", Ano);
      } else {
        printf("\n Não, O ano %i não é bissexto \n", Ano);
      }
    }
  }
  return 0;
}