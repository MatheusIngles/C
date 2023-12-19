#include <stdio.h>
/*
Escrever um algoritmo em C para exibir os múltiplos de 11 e a soma dos múltiplos de 11, em ordem
decrescente (inversa), compreendidos entre o intervalo: [300 400].
*/
int main(void) {

  int Soma = 0, quantidade;

  printf("Lista De numeros divisiveis por 11 entre [300,400]:\n");
  
  for(quantidade = 400; quantidade >= 300; quantidade--){
    if(quantidade % 11 == 0){
      printf("%i\n\n", quantidade);
      Soma += quantidade;
    }

    if(quantidade == 300)
      printf("%i",Soma);
  }
  
  return 0;
}