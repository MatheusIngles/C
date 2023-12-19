#include <stdio.h>
#include <string.h>

#define TAMANHO 1000

int main(void) {

  char String[TAMANHO];

  while(1){
    scanf("\n%[^\n]", String);
    if(strcmp(String, "FIM") == 0){
      break;
  } else {
      
  }
    
  
  printf("Hello World\n");
  
  return 0;
}