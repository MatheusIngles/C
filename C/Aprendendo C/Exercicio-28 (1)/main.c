#include <stdio.h>
#include <math.h>

int main(void) {
 
  int NumeroEscolhido, Verificador;
  float pi = M_PI, Soma = pi, Multi = 1;
  
  printf("Escolha um Numero a sua Vontade(tem que ser maior que 1):\n");
  scanf("%i",&NumeroEscolhido);
  if(NumeroEscolhido >= 1){
    for(Verificador = 1; Verificador <= NumeroEscolhido; Verificador++){
      
      if(Verificador % 2 == 0){
        Soma += pi/Verificador;
      } else
        Multi *= Verificador/pi;      
    }
    
    printf("A Soma é: %0.2f \n",Soma);
    printf("A Multi é: %0.2f \n",Multi);
    
  } else 
    printf("Escolha Certo Dog");
  return 0;
}