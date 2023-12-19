// Escrever um programa em C que leia uma mensagem e exiba a freqüência (número
// de ocorrência) de cada caractere da mensagem. Exemplo de saída: "UVV -
// CIENCIA DA COMPUTACAO" ('U': 2, 'V': 2, ' ': 4, '-': 1, 'C': 4, 'I': 2, 'E':
// 1, 'N': 1, 'A': 4, 'D': 1, 'O': 2, 'M': 1, 'P': 1, 'U': 1, 'T': 1).

#include <stdio.h>
#include <string.h>

#define Tamanho 1000

int main(void) {

  char txt[Tamanho];
  int contador, JaContado = 0;

  printf(" Qual a palavra que você deseja Contar os caracteres?\n ");
  scanf(" \n%[^\n]", txt);

  printf(" Quantidade de caracteres: \n");

  for (int i = 0; i < strlen(txt); i++) {
    contador = 0;
    JaContado = 0;
    
    for (int j = 0; j < i; j++) {
      if (txt[i] == txt[j]) {
        JaContado = 1;
        break;
      }
    }

    if (!JaContado) {
      for (int i2 = 0; i2 < strlen(txt); i2++) {
        if (txt[i] == txt[i2]) {
          contador++;
        }
      }
      printf(" '%c' = %i \n", txt[i], contador);
    }
  }

  return 0;
}