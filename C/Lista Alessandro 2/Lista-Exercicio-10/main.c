// 10) Escrever um programa em C que leia várias palavras (uma por uma) e exiba
// a palavra e seu tamanho. Pare o programa quando for digitada a palavra “OK”
// ou "ok".
#include <stdio.h>
#include <string.h>

#define Tamanho 1000

int main(void) {

  char txt[Tamanho];

  do {
    printf("\n\n Palavra Que vc deseja ver o Tamanho: \n\n");
    scanf(" \n%[^\n]",txt);

    if(strstr(txt, "ok") != NULL || strstr(txt, "OK") != NULL) 
      break;
    else{
      printf("\n A palavra Digitada: %s \n o tamanho da palavra: %i", txt, strlen(txt));
    }
  } while (1);
  return 0;
}