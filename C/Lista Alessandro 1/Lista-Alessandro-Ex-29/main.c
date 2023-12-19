/*Escreva um algoritmo que leia as notas (1° e 2° Bimestre) e o sexo (1:
 * Masculino ou 2: Feminino) de 30 alunos e armazene os dados em (3) vetores
 * apropriados. Após isso, exiba na tela:*/
// 29.A maior média final do aluno do sexo Masculino.
#include <stdio.h>

#define SIZE 30

int main(void) {
  int i = 0, genero[SIZE], pessoasAcDaMe = 0;
  float nota1[SIZE], nota2[SIZE], media[SIZE];

  // Pegando os Valores
  while (i < SIZE) {
    printf(" Qual a nota do aluno %i° no primeiro bimestre?:\n ", i + 1);
    scanf(" %f", &nota1[i]);

    printf(" Qual a nota do aluno %i° no segundo bimestre?:\n ", i + 1);
    scanf(" %f", &nota2[i]);

    printf(" Qual o seu genero do aluno %i°?: (Masc = 1 ou Femi = 2)\n ",
           i + 1);
    scanf(" %i", &genero[i]);

    if ((nota1[i] >= 0 && nota1[i] <= 10) &&
        (nota2[i] >= 0 && nota2[i] <= 10) &&
        (genero[i] == 1 || genero[i] == 2)) {
      media[i] = (nota1[i] + nota2[i]) / 2;
      printf("\n (Aluno Alocado)\n\n");
      i++;
    } else {
      printf(
          " \n Coloque os dados do Aluno corretamente \n Tente novamente \n\n");
    }
  }

  printf(" Media Do Alunos:\n\n");

  for (i = 0; i < SIZE; i++) {
    printf(" Aluno %i°: %0.1f \n", i + 1, media[i]);

    if (media[i] >= 3 && media[i] < 7) {
      pessoasAcDaMe++;
    }
  }

  printf(" Numero de Pessoas Acima Da media: %i\n", pessoasAcDaMe);

  return 0;
}
