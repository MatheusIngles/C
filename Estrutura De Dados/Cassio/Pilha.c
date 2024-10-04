#include <stdio.h>
#include <stdlib.h>

struct elemento{
  int conteudo;
  struct elemento *prox;
};

typedef struct elemento Elem;
typedef struct elemento* Pilha;

Pilha* cria_pilha(){
  Pilha* pi = (Pilha*) malloc(sizeof(Pilha));
  if(pi!=NULL){
    *pi=NULL;
  }
  return pi;
}

void libera_pilha(Pilha* pi){
  if(pi!=NULL){
    Elem* no;
    while((*pi)!=NULL){
      no = *pi;
      *pi=(*pi)->prox;
      free(no);
    }
    free(pi);
  }
}

int consulta_topo(Pilha* pi){
  if(pi==NULL){
    return 0;
  }
  if((*pi)==NULL){
    return 0;
  }
  return (*pi)->conteudo;
}

int insere_Pilha(Pilha* pi,int x ){
  if(pi==NULL){
    return 0;
  }
  Elem* no;
  no = (Elem*)malloc(sizeof(Elem));
  if(no==NULL){
    return 0;
  }
  no->conteudo = x;
  no->prox = (*pi);
  *pi=no;
  return 1;
}

int remove_Pilha(Pilha* pi){
  if(pi==NULL){
    return 0;
  }
  if((*pi)==NULL){
    return 0;
  }
  Elem *no = *pi;
  *pi = no->prox;
  free(no);

  return 1;
}

void imprime_Pilha(Pilha* pi){
  if(pi==NULL){
    return;
  }
  Elem* no =*pi;
  printf("\n----------Pilha----------");
  while(no!=NULL){
    printf("\nConteudo: %d\n", no->conteudo);
    no = no->prox;
  }
  printf("\n----------------------");

}

int main(void) {

  Pilha* pi = cria_pilha();

  insere_Pilha(pi, 0);
  insere_Pilha(pi, 1);
  insere_Pilha(pi, 2);
  insere_Pilha(pi, 3);
  insere_Pilha(pi, 4);
  imprime_Pilha(pi);

  remove_Pilha(pi);
  remove_Pilha(pi);
  
  imprime_Pilha(pi);
  return 0;
}