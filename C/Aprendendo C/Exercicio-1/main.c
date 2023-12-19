#include <stdio.h>
#define PI 3.14

int main(void) {
  
  float raio;

  printf("Digite o valor do raio da circunferência:\n");
  scanf("%f", &raio);
   
  printf("Area: %.2f\n", 4 * PI * (raio * raio));
  printf("Volume: %.2f\n", (4.0/3) * PI * (raio * raio * raio));
  
  return 0;
}