// Crie uma função e seu protótipo que receba como argumento um número inteiro
// qualquer representando os segundos de realização de um teste de laboratório e
// retorne as horas, minutos e segundos convertidos deste número. Use a função
// (100 vezes) no programa principal e exiba a informação conforme a seguir:
// Exemplo: Tempo: 10000 Segundos = 2 Hora(s) + 46 Minuto(s) + 40 Segundo(s).
#include <stdio.h>

// Declarando a Função
void Calcular(int n, int *p1, int *p2, int *p3);
// Chamando a Função
void Calcular(int n, int *p1, int *p2, int *p3) {
  int Horas =  n / 3600 , Minutos = ((n % 3600) / 60), Segundos = n % 60;
  *p1 = Horas;
  *p2 = Minutos;
  *p3 = Segundos;
}
int main(void) {

  int n, Minutos, Horas, Segundo, *p1, *p2, *p3;
  p1 = &Horas;
  p2 = &Minutos;
  p3 = &Segundo;

  printf("Qual o numero que Vc deseja Ver o tempo?\n ");
  scanf("%i",&n);
  Calcular(n, p1, p2, p3);
  printf("\n O valor em tempo é %i Horas e %i Minutos e %i Segundos", Horas, Minutos, Segundo);
  return 0;
}