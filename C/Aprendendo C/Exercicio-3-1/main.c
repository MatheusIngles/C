/*
Escrever um algoritmo em C para exibir os múltiplos de ƞ compreendidos entre o intervalo:
[LimiteInferior LimiteSuperior] ε N. Sendo que:
✓ {ƞ ∈ N/ ƞ ≥ 2}
✓ {LimiteInferior , LimiteSuperior ∈ N/ LimiteSuperior ≥ LimiteInferior}
*/

#include <stdio.h>

int main(void) {

  int NumeroDoUsuario, LimiteMax, LimiteMin, Creck;
  
  printf("Fale qual Numero Voce Quer Dog(tem que ser maior que 2):\n\n");
  scanf("%i",&NumeroDoUsuario);

  if(NumeroDoUsuario >= 2){
    printf("Escolha Agr o Numero do Limite Min:\n\n");
    scanf("%i",&LimiteMin);
    printf("Escolha Agr o Numero do Limite Max:\n\n");
    scanf("%i",&LimiteMax);
    if(LimiteMax >= LimiteMin){
      printf("Os numeros são dividido pelo Numero %i\n\n",NumeroDoUsuario);
      
      for(Creck = LimiteMin; Creck <= LimiteMax;Creck++){
        if(Creck % NumeroDoUsuario == 0)
          printf("%i ",Creck);
      }
    } else
      printf("Escolheu errado Dog");
  } else 
    printf("Escolheu errado Dog");
  
  
  return 0;
}