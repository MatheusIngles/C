#include <stdio.h>
#include <math.h>

void Calculadora(int ano, int *resultado);

void Calculadora(int ano, int *resultado){
 if(ano % 400 ||(ano % 4 && !(ano % 100))){
   *resultado = 2;
 } else{
   *resultado = 1;
 }
  
}

int main(void) {

  int resultado, ano;
  
  printf("Qual o ano?\n\n");
  scanf(" %i",&ano);
  Calculadora(ano, &resultado);
  if(resultado == 1){
    printf("\n É bissexto \n");
  } else {
    printf("\n Seu ano não é bissexto \n");
  }
  return 0;
}