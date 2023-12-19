#include <stdio.h>
#include <string.h>

#define Tamanho 1000

int main(void) {

  int j = 0;

  do {
    char palavra[Tamanho], palavraNova[Tamanho];
    printf("\n Qual a palavra que você quer derivar? \n ");
    scanf("\n%[^\n]", palavra);

    if(strcmp(palavra, "SAIR") == 0){
      break;
    }
    
    for (int i = 0; i < strlen(palavra); i++) {
      palavraNova[j] = palavra[i];
      j++;
      palavraNova[j] = ' ';   
      j++;
    }

    palavraNova[j] = '\0';

    printf("\n A palavra antiga: %s\n A palavra nova: %s\n", palavra, palavraNova);

    j = 0;
  } while (1);

  return 0;
}
