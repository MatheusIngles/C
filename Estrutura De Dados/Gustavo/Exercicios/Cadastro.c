#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define TAMANHO 100

typedef struct {
  int Matricula;
  char Nome[TAMANHO], endereco[TAMANHO], DataDeNascimento[TAMANHO];
} aluno;

// Cabeçalho:
aluno AdicionarAluno(aluno NovoAluno, int mactricula, char Nome[TAMANHO]);
void PesquisarAluno(aluno Alunos[TAMANHO], int matricula, char Nome[TAMANHO]);
aluno *OrganizarLista(aluno Alunos[TAMANHO], int matricula);

// A função:
aluno AdicionarAluno(aluno NovoAluno, int matricula, char Nome[TAMANHO]) {
  NovoAluno.Matricula = matricula +1;
  strcpy(NovoAluno.Nome, Nome);
  strcpy(NovoAluno.endereco, "Brasil, Vila Velha");
  strcpy(NovoAluno.DataDeNascimento, "01-02-2005");
  return NovoAluno;
}
void PesquisarAluno(aluno Alunos[TAMANHO], int matricula, char Nome[TAMANHO]) {

  int bull = 1;

  for (int i = 0; i < matricula; i++) {
    if (!(strcmp(Alunos[i].Nome, Nome))) {
      printf("\nSim, o aluno %s da matricula está %i está na lista.",
             Alunos[i].Nome, Alunos[i].Matricula);
      bull = 0;
    }
  }

  if (bull) {
    printf("\n Não está na lista!");
  }
  printf("\n\n");
}
aluno *OrganizarLista(aluno Alunos[TAMANHO], int matricula) {

  aluno temp;

  for (int i = 0; i < matricula - 1; i++) {
    for (int j = 0; j < matricula - i - 1; j++) {
      if (Alunos[j].Nome[0] > Alunos[j + 1].Nome[0]) {
        temp = Alunos[j];
        Alunos[j] = Alunos[j + 1];
        Alunos[j + 1] = temp;
      }
    }
  }

  return Alunos;
}

int main(void) {
  aluno NovoAluno, Alunos[TAMANHO], *AlunosOrganizados;
  int boll = 1, resposta, matricula, numeroAleatorio;
  char Nome[TAMANHO];

  for (matricula = 0; matricula < 10; matricula++) {
    numeroAleatorio = (rand() % 3 + 1);
    switch (numeroAleatorio) {
    case 1:
      strcpy(Nome, "Joao");
      break;
    case 2:
      strcpy(Nome, "Maria");
      break;
    case 3:
      strcpy(Nome, "Carla");
      break;
    }

    Alunos[matricula] = AdicionarAluno(NovoAluno, matricula, Nome);
  }

  while (boll) {
    printf("O que deseja fazer?\n 1- Adicionar um novo aluno a Lista?\n"
           " 2- Procurar um Aluno na lista?\n 3- Organizar a Lista?\n"
           " 4- Excluir aluno existente?\n 5- Mostrar Lista\n 6- Sair?\n");
    scanf("%i", &resposta);

    switch (resposta) {
    case 1:
      printf("Qual o Nome do aluno?\n");
      scanf("\n%[^\n]", Nome);
      Alunos[matricula] = AdicionarAluno(NovoAluno, matricula, Nome);
      matricula++;
      strcpy(Nome, "");
      printf("\nAdicionado com sucesso\n\n");
      break;

    case 2:
      printf("\n Qual o Aluno que vc deseja procurar?\n");
      scanf("\n%[^\n]", Nome);
      PesquisarAluno(Alunos, matricula, Nome);
      break;

    case 3:
      AlunosOrganizados = OrganizarLista(Alunos, matricula);
      printf("\n Alunos em ordem:\n");
      for (int i = 0; i < matricula; i++) {
        printf("- %s\n", AlunosOrganizados[i].Nome);
      }
      break;

    case 4:
      printf("\nEscolha o Nome do Aluno que Deseja Excluir: \n");
      scanf("\n%[^\n]", Nome);

      int j = 0;

      for (int i = 0; i < matricula; i++) {
        if (!(strcmp(Alunos[i].Nome, Nome))) {
          continue;
        } else {
          Alunos[j] = Alunos[i];
          j++;
        }
      }

      matricula = j;
      for (int i = 0; i < matricula; i++) {
        printf("- %s\n", Alunos[i].Nome);
      }
      break;

    case 5:
      printf("\n Alunos em ordem:\n");
      for (int i = 0; i < matricula; i++) {
        printf("- %s\n", Alunos[i].Nome);
      }
      break;

    case 6:
      printf("Voce escolheu sair!");
      boll = 0;
      break;

    default:
      printf("\nParece que voce digitou errado! Tente novamente!\n\n");
      break;
    }
  }

  return 0;
}