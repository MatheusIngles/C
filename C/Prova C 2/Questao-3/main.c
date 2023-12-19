#include <math.h>
#include <stdio.h>
// Declarando a Função
float IMC(float Massa, float Altura, char Sexo);
// Chamando a Função
float IMC(float Massa, float Altura, char Sexo) {

  float IMC;

  if (Sexo == 'F') {
    IMC = 1.03 * (Massa / pow(Altura, 2));
  } else {
    IMC = 0.97 * (Massa / pow(Altura, 2));
  }

  return IMC;
}
int main(void) {

  int Escolha;
  float Massa, Altura, Imc;
  char Sexo;

  do {

    printf("\n Deseja Calcular o IMC de alguem?\n1:Sim\n2:Não\n ");
    scanf("%i", &Escolha);
    if (Escolha == 1) {
      printf("\nQual a Massa da pessoa?\n ");
      scanf("%f", &Massa);
      if (Massa < 0) {
        printf("\n Digite Certo o numero, massa não pode ser negativa\n");
      } else {
        printf("\n Qual a Altura da pessoa?\n ");
        scanf("%f", &Altura);
        if (Altura < 0) {
          printf("\n Digite Certo o numero, Altura não pode ser negativa\n");
        } else {
          printf("\n Qual o Sexo da pessoa? (M:Masculino, F:Feminino)\n ");
          scanf(" %c", &Sexo);
          if (Sexo != 'M' && Sexo != 'F') {
            printf("\n Digite Certo o numero, Sexo so pode ser M ou F \n");
          } else {
            Imc = IMC(Massa, Altura, Sexo);
            printf("\n O IMC do aluno de Sexo %c é de: %0.1f", Sexo, Imc);
          }
        }
      }
    } else if (Escolha == 2) {
      break;
    } else {
      printf("\n Digite Certo o numero\n");
    }
  } while (1);

  return 0;
}