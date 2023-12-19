/* Um marca de sucos que saber a opinião dos seus clientes sobre três diferentes novos “mix” de sabores.
As degustações e votação se realizaram num supermercado durante certo período. Faça um algoritmo em
C, que exiba a porcentagem dos clientes que gostaram da opção: 1: Mix 1, 2: Mix 2 ou 3: Mix 3 de
sabores. Pare o algoritmo quando for digitada a opção zero (0).
*/
  
#include <stdio.h>

int main(void) {

  int m1 = 0, m2 = 0 , m3 = 0 ,contador = 0, resposta;
  float m1p, m2p, m3p;

  do{
    printf("\n Resposta numero %iº" "\n Qual Mix que Vc gostou mais?\n" " [1] Mix 1\n [2] Mix 2\n [3] Mix 3\n" "\n (Caso queira parar o Questionario digite 0)\n" " Resposta:",contador + 1);
    scanf("%i", &resposta);

    if(resposta == 1){
      m1++;
      contador++;
    } else if (resposta == 2){
      m2++;
      contador++;
    } else if (resposta == 3){
      m3++;
      contador++;
    }
    
  }while(resposta != 0);

  m1p = 100.0 * m1 / contador;
  m2p = 100.0 * m2 / contador;
  m3p = 100.0 * m3 / contador;

  printf("\n Porcentagem de Clientes que escolheram os devidos Mix:\n" " Mix 1: %0.1f  \n" " Mix 2: %0.1f \n" " Mix 3: %0.1f", m1p, m2p, m3p);
  
  return 0;
}