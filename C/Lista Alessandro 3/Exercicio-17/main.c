// Crie uma função e seu protótipo que determine An e Sn de uma Progressão
// Geométrica (P.G). Após isso, use a função 50 vezes para calcular os dados de
// 50 P.G's com valores de a1, q e n lidos do usuário. Enésimo termo ∶ An = a1 ∗
// q (n−1) Soma dos termos: Sn = a1 ∗ (q^ n − 1)/ q − 1 Sendo que: a1 = primeiro
// termo da P. G q = Razão da P. G n = Quantidade de termos da P. G

#include <math.h>
#include <stdio.h>

#define Tamanho 50
// Declarando a Função
void CalcularAn(int a, int q, int n, float *p1);
void CalcularSn(int a, int q, int n, float *p2);
// Chamando a Função
void CalcularAn(int a, int q, int n, float *p1) {
  float Resultado = a * pow(q, (n - 1));
  *p1 = Resultado;
}
void CalcularSn(int a, int q, int n, float *p2) {
  float Resultado = (a * (pow(q, n) - 1)) / (q - 1);
  *p2 = Resultado;
}
int main(void) {

  int a, q, n;
  float An, Sn, *p1, *p2;
  p1 = &An;
  p2 = &Sn;

  for (int i = 0; i < Tamanho; i++) {
    printf("\n Qual o valor de A?\n ");
    scanf("%i", &a);
    printf("\n Qual o valor de Q?\n ");
    scanf("%i", &q);
    printf("\n Qual o valor de N?\n ");
    scanf("%i", &n);

    CalcularAn(a, q, n, p1);
    CalcularSn(a, q, n, p2);
    printf("\n O valor de An: %0.1f \n O valor de Sn: %0.1f \n", An, Sn);
  }
  return 0;
}