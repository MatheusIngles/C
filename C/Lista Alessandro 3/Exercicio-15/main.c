// Crie uma função e seu protótipo que receba como argumento um ano qualquer e
// um dos três números citados: 4 ou 100 ou 400 e retorne zero ou um (se o ano
// for ou não bissexto), quociente e resto da divisão do ano pelo número
// escolhido, conforme as regras de teste do ano bissexto. Após isso, use a
// função no programa principal e exiba as informações sobre o ano conforme os
// dados ditos pelo usuário. Regras de teste do ano bissexto:
#include <stdio.h>
#define Tamanho 1000
// Declarando a Função
void VerAnoBissexto(int Ano, int *p1);
// Chamando a Função
void VerAnoBissexto(int Ano, int *p1) {
  int resposta;

  if (Ano % 400 == 0 || (Ano % 4 == 0 && Ano % 100 != 0)) {
    resposta = 1;
  } else {
    resposta = 0;
  }

  *p1 = resposta;
}
int main(void) {
  int Ano, resposta, *p1;
  p1 = &resposta;

  printf("\n Qual o Ano que vc quer ver se é bissexto?\n ");
  scanf("%i", &Ano);
  VerAnoBissexto(Ano, p1);
  if (resposta == 1) {
    printf("\n Sim, O ano é bissexto");
  } else {
    printf("\n Não, O ano não é bissexto");
  }
  return 0;
}