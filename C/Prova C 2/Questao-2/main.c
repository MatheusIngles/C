#include <stdio.h>
#include <string.h>

#define Tamanho 1000

int main(void) {

  int resposta;
  char palavra[Tamanho];  


  do{

    printf("\n Deseja rodar o Programa? \n1:Sim\n2:Sair\n ");
    scanf("%i",&resposta);
    if(resposta == 1){

      printf("\n Qual a Palavra que Vc deseja?\n ");\
      scanf("\n%[^\n]",palavra);
      printf("\n Palavra original: %s\n Nova Palavra:", palavra);
      
      for(int i = 0; i <= strlen(palavra); i++){
        for(int j = 0; j <= 1; j++){
          printf("%c",palavra[i]);
        }
      }
      
    }else if( resposta == 2){
      break;
    } else{
      printf("\n Escreva Certo \n");
    }
    
  }while(1);
  
  return 0;
}