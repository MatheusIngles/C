#include <math.h>
#include <stdio.h>

#define Tamanho 50
#define Pi 3.14
//Declarando as Funçoes
void Area(float *p1, int Raio);
void Volume(float *p2, int Raio);
//Chamando elas;
void Area(float *p1, int Raio){
  float CalcularArea = 4 * Pi * pow(Raio, 2);
  *p1 = CalcularArea;
}
void Volume(float *p2, int Raio){
  float CalcularVolume = (4/3) * Pi * pow(Raio, 3);
  *p2 = CalcularVolume;
}

int main(void) {
  int Raio;
  float area, volume, *p1, *p2;
  p1 = &area;
  p2 = &volume;

  for (int i = 0; i < Tamanho; i++) {
    printf("\n Qual o Valor do Raio?\n ");
    scanf("%i",&Raio);
    Area( p1,Raio);
    Volume( p2, Raio);
    printf("\n O valor da area sera: %0.1f\n", area);
    printf("\n O valor do volume sera: %0.1f\n", volume);
  }
  return 0;
}