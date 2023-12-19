/*Escreva um algoritmo em C que leia o salário em reais (R$) de 1000 clientes de um shopping e exiba na
tela, em porcentagem, a divisão dos clientes por tipo: A, B ou C, conforme a seguir:
✓ A: Maior ou igual a 15 Salários Mínimos ou
✓ B: Menor que 15 Salários Mínimos E maior ou igual a 5 Salários Mínimos ou
✓ C: Menor que 5 Salários Mínimos.
Declarar o Salário Mínimo (SM: R$ 880.05) como constante com o comando: #define.*/

#include <stdio.h>

#define SM 880.05
#define SMA 1320

int main(void) {

  int cliente = 0;
  int A = 0 , B = 0 , C = 0, R;
  float Ap ,Bp ,Cp;

  printf("Qual Salario Vc deseja: \n 1:SM \n 2:SMA\n");
  scanf("%i", &R);

  if(R == 1){

    while(cliente < 1000){
      
      float salario;
      
      printf("\nQual é salario do funcionario %i:\n", cliente + 1);
      scanf("%f", &salario);
  
      if(salario < SM){
        printf("\nO salario não pode ser menor que o salario minimo: (880.05)");
      } else if (salario < SM * 5){
        C++;
        cliente ++;
      } else if (salario < SM * 15 && salario >= SM * 5){
        B++;
        cliente++;
      } else if (salario >= SM * 15){
        A++;
        cliente++;
      }
    }
    
    Ap = 100 * A / (cliente + 1);
    Bp = 100 * B / (cliente + 1);
    Cp = 100 * C / (cliente + 1);

    printf("A porcentagem de cliente A é: %0.1f\n", Ap);
    printf("A porcentagem de cliente B é: %0.1f\n", Bp);
    printf("A porcentagem de cliente C é: %0.1f\n", Cp);
    
  } else if(R == 2){
    
    while(cliente < 1000){
      
      float salario;
      
      printf("\nQual é salario do funcionario %i:\n", cliente + 1);
      scanf("%f", &salario);
  
      if(salario < SMA){
        printf("\nO salario não pode ser menor que o salario minimo: (1.320)");
      } else if (salario < SMA * 5){
        C++;
        cliente ++;
      } else if (salario < SMA * 15 && salario >= SMA * 5){
        B++;
        cliente++;
      } else if (salario >= SMA * 15){
        A++;
        cliente++;
      }
    }

    Ap = 100.0 * A / (cliente + 1);
    Bp = 100.0 * B / (cliente + 1);
    Cp = 100.0 * C / (cliente + 1);

    printf("A porcentagem de cliente A é: %0.1f\n", Ap);
    printf("A porcentagem de cliente B é: %0.1f\n", Bp);
    printf("A porcentagem de cliente C é: %0.1f\n", Cp);
    
  }
  
  return 0;
}