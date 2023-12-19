// Crie uma função e seu protótipo que receba a hora de entrada e saída de um
// estacionamento e retorne o tempo de permanência e total a pagar. No programa
// principal o usuário informa:
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Preco 3.55
// Declarando a função
int VerificarNumero(char Tempo[6]);
void MinutosEntrada(char entrada[6], int *p4);
void MinutosSaida(char saida[6], int *p5);
void Calcular(int MinutosEntrada, int MinutosSaida, float *p1, int *p2,
              int *p3);
// Chamando a função
int VerificarNumero(char tempo[6]) {
  int Flag = 0;
  if ((tempo[0] != '0' && tempo[0] != '1' && tempo[0] != '2') ||
      (tempo[1] != '0' && tempo[1] != '1' && tempo[1] != '2' &&
       tempo[1] != '3' && tempo[1] != '4' && tempo[1] != '5' &&
       tempo[1] != '6' && tempo[1] != '7' && tempo[1] != '8' &&
       tempo[1] != '9') ||
      (tempo[2] != ':') ||
      (tempo[3] != '0' && tempo[3] != '1' && tempo[3] != '2' &&
       tempo[3] != '3' && tempo[3] != '4' && tempo[3] != '5') ||
      (tempo[4] != '0' && tempo[4] != '1' && tempo[4] != '2' &&
       tempo[4] != '3' && tempo[4] != '4' && tempo[4] != '5' &&
       tempo[4] != '6' && tempo[4] != '7' && tempo[4] != '8' &&
       tempo[4] != '9')) {
    Flag = 1;
  }
  return Flag;
}
void MinutosEntrada(char entrada[6], int *p4) {
  char calcula[3];
  int MinutosEntrada = 0;

  calcula[0] = entrada[0];
  calcula[1] = entrada[1];
  MinutosEntrada += (atoi(calcula) * 60);

  calcula[0] = entrada[3];
  calcula[1] = entrada[4];
  MinutosEntrada += atoi(calcula);
  *p4 = MinutosEntrada;
}
void MinutosSaida(char saida[6], int *p5) {

  char calcula[3];
  int MinutosSaida = 0;

  calcula[0] = saida[0];
  calcula[1] = saida[1];
  MinutosSaida += (atoi(calcula) * 60);

  calcula[0] = saida[3];
  calcula[1] = saida[4];
  MinutosSaida += atoi(calcula);
  *p5 = MinutosSaida;
}
void Calcular(int MinutosEntrada, int MinutosSaida, float *p1, int *p2,
              int *p3) {

  int MinutosTotais, horas, minutos;
  float preco;

  if (MinutosEntrada > MinutosSaida) {
    MinutosTotais = MinutosSaida + 1440 - MinutosEntrada;
  } else {
    MinutosTotais = MinutosSaida - MinutosEntrada;
  }

  horas = (MinutosTotais / 60);
  minutos = MinutosTotais % 60;
  preco = (horas * Preco) + (minutos * (Preco / 60));

  *p1 = preco;
  *p2 = horas;
  *p3 = minutos;
}
int main(void) {

  int resposta, minutos, horas, MinutosEntrad, MinutosSaid, *p5, *p2, *p3, *p4;
  float preco, *p1;
  char entrada[6], saida[6];
  p1 = &preco;
  p2 = &horas;
  p3 = &minutos;
  p4 = &MinutosEntrad;
  p5 = &MinutosSaid;

  do {
    printf("\n Quer Calcular: \n 1: Sim\n 2: Sair\n ");
    scanf("%i", &resposta);
    if (resposta == 1) {
      printf("\n Qual o tempo de entrada: (HH:MM) \n ");
      scanf(" \n%[^\n]", entrada);
      if (VerificarNumero(entrada) == 1) {
        printf("\n\n Digite Certo o Tempo \n\n");
      } else {
        MinutosEntrada(entrada, p4);
        printf("\n Qual o tempo de saida: (HH:MM) \n ");
        scanf(" \n%[^\n]", saida);
        if (VerificarNumero(saida) == 1) {
          printf("\n\n Digite Certo o Tempo \n\n");
        } else {
          MinutosSaida(saida, p5);
          Calcular(MinutosEntrad, MinutosSaid, p1, p2, p3);
          printf("O tempo que vc ficou é: %2d:%2d e o preço é: %0.2f", horas,
                 minutos, preco);
        }
      }
    } else {
      break;
    }
  } while (1);
  return 0;
}