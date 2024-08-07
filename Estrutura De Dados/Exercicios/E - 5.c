#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define Tamanho 1000

typedef struct {
  char nome[Tamanho], emprego[Tamanho], dataDeNascimento[Tamanho];
} pessoa;

// Cabeçalho
int VerificarData(pessoa Pessoa, char dataDeNascimento[Tamanho]);
pessoa AdicionarPessoa(char nome[Tamanho], char emprego[Tamanho],
                       char dataDeNascimento[Tamanho]);

pessoa AdicionarPessoa(char nome[Tamanho], char emprego[Tamanho],
                       char dataDeNascimento[Tamanho]) {
  pessoa NovaPessoa;
  strcpy(NovaPessoa.nome, nome);
  strcpy(NovaPessoa.emprego, nome);
  strcpy(NovaPessoa.dataDeNascimento, dataDeNascimento);
  return NovaPessoa;
}
int VerificarData(pessoa Pessoa, char dataDeNascimento[Tamanho]) {
  int boll = 0;
  char tempo[Tamanho];
  
  
  return boll;
}

int main(void) {

  pessoa Funcionarios[Tamanho];
  int rande, BollC = 1, resposta, i;
  char nome[Tamanho], emprego[Tamanho], dataDeNascimento[Tamanho];

  srand(time(NULL));

  // Populando Os Funcionarios
  for (i = 0; i < 10; i++) {

    rande = rand() % 3 + 1;

    switch (rande) {
    case 1:
      strcpy(nome, "Siclano");
      break;

    case 2:
      strcpy(nome, "Beltrano");
      break;

    case 3:
      strcpy(nome, "Fulano");
      break;
    }

    rande = rand() % 3 + 1;

    switch (rande) {
    case 1:
      strcpy(emprego, "Engenheiro");
      break;

    case 2:
      strcpy(emprego, "Medico");
      break;

    case 3:
      strcpy(emprego, "Traficante");
      break;
    }

    rande = rand() % 3 + 1;

    switch (rande) {
    case 1:
      strcpy(dataDeNascimento, "01-02-2005");
      break;

    case 2:
      strcpy(dataDeNascimento, "02-03-2020");
      break;

    case 3:
      strcpy(dataDeNascimento, "03-04-2016");
      break;
    }

    Funcionarios[i] = AdicionarPessoa(nome, emprego, dataDeNascimento);
  }

  while (BollC) {

    printf(
        "O que deseja fazer?\n1- Adicionar um novo funcionario?\n2- Conferir "
        "quais funcionarios são maiores que a data escolhida?\n3- Sair!");
    scanf("%i", &resposta);

    switch (resposta) {
    case 1:
      printf("\n Qual O nome do funcionario? ");
      scanf("\n%[^\n]", nome);
      printf("\n Qual O emprego? ");
      scanf("\n%[^\n]", emprego);
      printf("\n Qual a Data de Nascimento? ");
      scanf("\n%[^\n]", dataDeNascimento);
      Funcionarios[i] = AdicionarPessoa(nome, emprego, dataDeNascimento);
      i++;
      break;

    case 2:
      printf("\n Qual a Data de Nascimento vc quer usar como ponto de "
             "referencia? ");
      scanf("\n%[^\n]", dataDeNascimento);
      printf("\n Funcionarios que são mais velhos que essa data:");
      for (int j = 0; j <= i; j++) {
        int isMaduro = 0;
        isMaduro = VerificarData(Funcionarios[j], dataDeNascimento);

        if (isMaduro) {
          printf(" \n - %s é mais velho", Funcionarios[i].nome);
        }
      }
      break;

    case 3:
      BollC = 0;
      printf("\n Adeus \n");
      break;

    default:
      printf("\n Digita Certo Porra \n");
      break;
    }
  }

  return 0;
}