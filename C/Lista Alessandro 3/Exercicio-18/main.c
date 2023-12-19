// Crie uma função + protótipo que receba como argumento um valor real do Tempo
// T (Horas) e converta em: Horas + Minutos + Segundos. Na main, use a função 50
// vezes para valores de T lidos do usuário. Exemplo: T (12.47 Horas) = 12
// Hora(s) + 28 Minuto(s) + 12 Segundo(s). ( Dica: Use a Função: modff )
#include <stdio.h>
#include <math.h>
// Declarando a Função
void CalcularTempo(float T, int *p1, int *p2, int *p3);
// Chamando a Função
void CalcularTempo(float T, int *p1, int *p2, int *p3) {
  int Minutos, Segundos;
  float TempoMinutos, Horas;

  Horas = modff(Horas, &TempoMinutos);
  
}

int main(void) {
  float Tempo, Horas, Minutos, ;
  int  , Segundos, *p1, *p2, *p3;
  p1 = &Horas;
  p2 = &Minutos;
  p3 = &Segundos;

  for(int i = 0; i< 50; i++){
    printf("\n Qual o tempo? (Em horas) \n ");
    scanf("%f",&Tempo);
    CalcularTempo(Tempo, p1, p2, p3);
    printf("O Tempo é %i Horas + %i Minutos + %i Segundos", Horas, Minutos, Segundos);
  }
  return 0;
}