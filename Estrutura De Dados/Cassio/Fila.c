#include <stdio.h>
#include <stdlib.h>

struct elemento{
  int conteudo;
  struct elemento *prox;
};
typedef struct elemento Elem;

struct fila{
  struct elemento *inicio;
  struct elemento *final;
  int qtd;
};
typedef struct fila Fila;

Fila* cria_fila(){
  Fila* fi = (Fila*) malloc(sizeof(Fila));
  if(fi!=NULL){
    fi->final = NULL;
    fi->inicio = NULL;
    fi->qtd = 0;
  }
  return fi;
}

void libera_fila(Fila* fi){
  if(fi!=NULL){
    Elem* no;
    while(fi->inicio!=NULL){
      no = fi->inicio;
      fi->inicio=fi->inicio->prox;
      free(no);
    }
    free(fi);
  }
}

int insere_Fila(Fila* fi,int x ){
  if(fi==NULL){
    return 0;
  }
  Elem* no = (Elem*)malloc(sizeof(Elem));
  if(no==NULL){
    return 0;
  }
  no->conteudo = x;
  no->prox = NULL;

  if(fi->inicio ==NULL){
    fi->inicio = no;
  }else{
    fi->final->prox = no;
  }
  fi->final= no;
  fi->qtd++;
  return 1;
}

int remove_Fila(Fila* fi){
  if(fi==NULL){
    return 0;
  }
  if(fi->inicio==NULL){
    return 0;
  }
  Elem *no = fi->inicio;
  fi->inicio = fi->inicio->prox;

  if(fi->inicio==NULL){
    fi->final=NULL;
  }
  
  free(no);
  fi->qtd--;

  return 1;
}


void imprime_Fila(Fila* fi){
  if(fi==NULL){
    return;
  }
  Elem* no =fi->inicio;
  printf("\n----------Fila----------\n");
  while(no!=NULL){
    printf("\t  %d ", no->conteudo);
    no = no->prox;
  }
  printf("\n----------------------");
}
int main(void) {

  Fila* fi = cria_fila();

  insere_Fila(fi, 0);
  insere_Fila(fi, 1);
  insere_Fila(fi, 2);
  insere_Fila(fi, 3);
  insere_Fila(fi, 4);

  imprime_Fila(fi);

  remove_Fila(fi);
  remove_Fila(fi);
  remove_Fila(fi);
  imprime_Fila(fi);

  return 0;
}