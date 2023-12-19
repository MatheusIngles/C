#include <stdio.h>
// Declarando A função:
float RCQ(float MC, float MQ, char Sexo);
// Chamando a função:
float RCQ(float MC, float MQ, char Sexo) {

  float RCQ;

  if (Sexo == 'M' || Sexo == 'm') {
    RCQ = 0.93 * (MC / MQ);
  } else {
    RCQ = 1.07 * (MC / MQ);
  }

  return RCQ;
}

int main(void) {

  int escolha;
  float MedidaC, MedidaQ, Rcq;
  char Sexo;

  do {
    printf("\n Quer inserir um Aluno? \n 1: Inserir Aluno \n 0: Sair do "
           "programa\n ");
    scanf("%i", &escolha);
    if (escolha == 1) {
      printf("\n Qual o valor de MedidaC? \n ");
      scanf("%f", &MedidaC);
      if (MedidaC > 0) {
        printf("\n Qual o valor de MedidaQ? \n ");
        scanf("%f", &MedidaQ);
        if (MedidaQ > 0) {
          printf("\n Qual o Sexo? (M:Mascolino ou F:Feminino) \n ");
          scanf(" %c", &Sexo);
          if ((Sexo != 'm' && Sexo != 'M') && (Sexo != 'f' && Sexo != 'F')) {
            printf("\n Escolha Certo \n");
          } else {
            Rcq = RCQ(MedidaC, MedidaQ, Sexo);
            printf("\n O valor de RCQ: %f \n", Rcq);
          }
        } else {
          printf("\n Escolha Certo \n");
        }
      } else {
        printf("\n Escolha Certo \n");
      }
    } else if (escolha == 0) {
      break;
    } else {
      printf("\n Escolha Certo \n");
    }

  } while (1);

  return 0;
}