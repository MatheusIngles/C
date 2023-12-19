#include <stdio.h>

#define SalarioBrutoMinimo 1201.25
#define ValorFixoP 605.50
#define ValorFixoVa 1201.25

// Declarando a Função
void Funcionario(float SalarioB, int Q, int C, float *salariol, float *valeAli);

// Chamando
void Funcionario(float SalarioB, int Q, int C, float *salariol, float *valeAli) {
  
  float PlanoDeSaude = (ValorFixoP + (((1 / 100) * SalarioB) * Q));
  *salariol = SalarioB - PlanoDeSaude;
  if (C == 1) {
    *valeAli = 1201.25 + ((0.1 * SalarioB) * Q);
  } else if (C == 2) {
    *valeAli = 1201.25 + ((0.05 * SalarioB) * Q);
  } else if (C == 3) {
    *valeAli = 1201.25 + ((0.01 * SalarioB) * Q);
  }
  
}
int main(void) {

  int escolha, QuantidadeD, Classificacao;
  float SalarioB, Salariol, Ps, ValeAli;

  do {
    printf("\n Quer Verificar o valor do SalarioL, Plano de Saude e Vale "
           "Alimentação de um novo funcionario?\n 1:Inserir Funcionário\n "
           "0:Sair do programa\n ");
    scanf("%i", &escolha);
    if (escolha == 1) {
      printf("\n Qual o seu Salario Liquido: \n");
      scanf("%f", &SalarioB);
      if (SalarioB >= SalarioBrutoMinimo) {
        printf("\n Qual o valor de Quantidade de dependendentes?\n");
        scanf("%i", &QuantidadeD);
        if (QuantidadeD >= 0) {
          printf("\n Qual a classificação?\n");
          scanf("%i", &Classificacao);
          if (!(Classificacao != 1 && Classificacao != 2 &&
                Classificacao != 3)) {
            Funcionario(SalarioB, QuantidadeD, Classificacao, &Salariol,
                        &ValeAli);
            Ps = (ValorFixoP + (((1 / 100) * SalarioB) * QuantidadeD));
            printf("\n Salario Liquido: %0.1f\n Plano De Saude : %0.1f \n Vale "
                   "Alimentação: %0.1f\n ",
                   Salariol, Ps, ValeAli);
          } else {
            printf("\n Classificação dever ser ou 1 ou 2 ou 3 \n");
          }
        } else {
          printf("\n Quantidade de Dependentes tem que ser maior que 0 \n");
        }
      } else {
        printf("\n Opa o Salario Liquido não pode ser menor que %f\n",
               SalarioBrutoMinimo);
      }
    } else if (escolha == 0) {
      break;
    } else {
      printf("\n Escolha Certo \n");
    }

  } while (1);
  return 0;
}
/*
indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali indo ali 
 ⠁⠁⠁⠁⠁⠁⠁⢀⣴⣶⣿⣿⣷⣶⣦⡀⠁⠁⠁⠁⠁⠁⠁⠁⠁⠁⠁⠁ 
 ⠁⠁⠁⠁⠁⠁⠁⣠⣿⣿⣿⣿⣿⣿⣟⣿⣿⣧⣄⠁⠁⠁⠁⠁⠁⠁⠁⠁⠁
 ⠁⠁⠁⠁⣠⣴⣾⣿⣿⣿⣿⣿⣿⣷⣿⣷⣿⣿⣿⣷⣦⣄⡀⠁⠁⠁⠁⠁⠁ 
 ⢀⣠⠶⠿⠿⠛⠛⠛⠛⠛⠛⠉⠋⠉⠋⠙⠙⠋⠛⠛⠟⠿⠿⣷⣦⡀⠁⠁⠁
 ⠘⠤⡁⡐⢀⠁⠁⡀⠂⢀⠁⢀⠁⠂⠁⡀⢀⠁⡀⢀⠁⠁⠁⠁⢉⡹⠁⠁⠁
 ⠁⠁⠁⠁⠁⠄⣦⣾⡼⠁⣤⢄⠤⠠⠠⠄⢠⠁⡄⢠⢀⡢⠦⠁⠁⡀⠁⠁⠁
 ⠁⠁⠁⠁⠁⠘⠥⡄⣀⠓⢍⢡⢃⡜⢰⠨⠦⠊⠈⠁⠁⢀⢀⠁⡌⢸⡇⠁⠁ 
 ⠁⠁⠁⠁⠁⠁⠁⠁⠁⠉⠈⣠⣕⢀⢆⢑⡑⢤⣢⡀⠆⢐⠁⠁⢂⠜⠳⠶⡄
 ⠁⠁⠁⠁⠁⠁⠁⢀⣀⠤⢾⡟⣫⠝⠖⡡⠃⠂⠠⠙⠲⠤⣀⠁⡁⢀⢂⡐⠃ 
 ⠁⠁⠁⢀⣠⣴⢶⡏⠈⠁⣺⢞⡏⡝⠬⡠⢂⡘⣐⣤⠁⠁⠉⠢⣄⣀⡀⠁⠁ 
 ⠁⠁⠁⡛⠁⠁⠁⠁⠁⠁⣿⣮⡧⣽⢶⣵⣿⣾⣧⣿⡦⠂⠁⠁⠠⠁⡎⡩⠁ 
 ⠁⠁⠁⠈⠁⠁⠁⠁⠁⠁⠁⠘⠳⣻⣾⡿⡽⡧⣟⡝⢷⢖⣶⣄⠁⠁⠁⠁⠁ 
 ⠁⠁⠁⠁⠁⠁⠁⠁⠁⣀⠁⠁⠁⣹⡿⣿⠟⠁⠁⣤⣿⢺⡆⡟⢧⠁⠁⠁⠁ 
 ⠁⠁⠁⠁⠁⠁⠖⡛⠻⠛⠿⢟⢿⢻⡻⣯⠁⠁⠈⠛⠘⠁⠃⠑⠁⠁⠁⠁⠁ 
 ⠁⠁⠁⠁⠁⠁⠁⠁⠁⠈⠁⠁⠁⠁⠁⠈⠁⠁⠁⠁⠁⠁⠁⠁⠁⠁⠁⠁⠁ 
*/