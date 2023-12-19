// Crie uma função e seu protótipo que receba como argumento o preço de uma
// mercadoria e seu reajuste em porcentagem, retorne o preço reajustado e o
// reajuste calculado em reais. Após isso, use a função no programa principal e
// exiba o preço reajustado e o reajuste de 100 mercadorias informadas pelo
// usuário.

#include <stdio.h>
// Declarando as funçoes
void CalcularReajuste(float Preco, float PorcentagemReajuste,
                      float precoReajuste, float *p1);
// Chamando as funçoes
void CalcularReajuste(float Preco, float PorcentagenReajuste,
                      float precoReajuste, float *p1) {
  precoReajuste = Preco + (Preco * (PorcentagenReajuste / 100));
  *p1 = precoReajuste;
}

int main(void) {

  float preco, PorcentagemReajuste, precoReajuste, *p1;
  p1 = &precoReajuste;

  for (int i = 0; i < 100; i++) {
    printf("\nQual o Preço do Produto?\n ");
    scanf("%f", &preco);
    printf("\nQual a Porcentagem do reajuste?\n ");
    scanf("%f", &PorcentagemReajuste);
    CalcularReajuste(preco, PorcentagemReajuste, precoReajuste, p1);
    printf("\n Preço Original: %0.1f \n Preço Com Reajuste: %0.1f \n "
           "Diferença: %0.1f\n",
           preco, precoReajuste, (precoReajuste - preco));
  }
  return 0;
}