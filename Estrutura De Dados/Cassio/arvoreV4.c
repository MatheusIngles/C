#include <stdio.h>
#include <stdlib.h>

struct NO{
  int info;
  struct NO *esq;
  struct NO *dir;
};

typedef struct NO* ArvBin;

ArvBin * cria_ArvBin(){
  ArvBin* raiz= (ArvBin*) malloc(sizeof(ArvBin));
  if(raiz!=NULL){
      *raiz = NULL;
  }
  return raiz;
}

void libera_NO(struct NO* no){
  if(no == NULL){
    return;
  }
  libera_NO(no->esq);
  libera_NO(no->dir);
  free(no);
  no = NULL;
}

void libera_ArvBin(ArvBin *raiz){
  if(raiz ==NULL){
    return;
  }
  libera_NO(*raiz);
  free(raiz);
}

int insere_ArvBina(ArvBin* raiz, int valor){
  if(raiz==NULL){
      return 0;
  }

  struct NO* novo;
  novo = (struct NO*) malloc(sizeof(struct NO));
  if(novo == NULL){
      return 0;
  }
  novo->info = valor;
  novo->dir = NULL;
  novo->esq = NULL;

  if(*raiz == NULL){
    *raiz = novo;
  }
  else{
    struct NO*  atual = *raiz;
    struct NO* ant = NULL;
    while(atual!=NULL){
      ant = atual;
      if(valor == atual->info){
        free(novo);
        return 0;
      }

      if(valor>atual->info){
        atual = atual->dir;
      }
      else{
        atual = atual->esq;
      }
    }
    if(valor>ant->info){
        ant->dir= novo;
    }else{
        ant->esq = novo;
    }
  }
  return 1;
}

int altura_ArvBin(ArvBin* raiz){
  if(raiz==NULL){
      return -1;
  }
  if(*raiz==NULL){
      return -1;
  }
  int alt_esq = altura_ArvBin(&((*raiz)->esq));
  int alt_dir = altura_ArvBin(&((*raiz)->dir));
  if(alt_esq>alt_dir){
    return(alt_esq+1);
  }else{
    return(alt_dir+1);
  }
}

int totalNosArvBin(ArvBin* raiz){
  if(raiz==NULL){
      return 0;
  }
  if(*raiz==NULL){
      return 0;
  }
  int alt_esq = totalNosArvBin(&((*raiz)->esq));
  int alt_dir = totalNosArvBin(&((*raiz)->dir));

  return(alt_esq+alt_dir+1);
}

void preOrdem_arvBin(ArvBin *raiz){
  if(raiz==NULL){
      return;
  }
  if(*raiz!=NULL){
    printf("%d\t", (*raiz)->info);
    preOrdem_arvBin(&((*raiz)->esq));
    preOrdem_arvBin(&((*raiz)->dir));
  }
}

void emOrdem_arvBin(ArvBin *raiz){
  if(raiz==NULL){
      return;
  }
  if(*raiz!=NULL){
    emOrdem_arvBin(&((*raiz)->esq));
    printf("%d\t", (*raiz)->info);
    emOrdem_arvBin(&((*raiz)->dir));
  }
}

void posOrdem_arvBin(ArvBin *raiz){
  if(raiz==NULL){
      return;
  }
  if(*raiz!=NULL){
    posOrdem_arvBin(&((*raiz)->esq));
    posOrdem_arvBin(&((*raiz)->dir));
    printf("%d\t", (*raiz)->info);
  }
}


//especial para arv bin busca
int consulta_ArvBin(ArvBin *raiz, int valor){
  if(raiz == NULL){
    return 0;
  }
  struct NO* atual = *raiz;
  while(atual != NULL){
    if(valor == atual->info){
      return 1;
    }
    if(valor>atual->info){
      atual=atual->dir;
    }else{
      atual=atual->esq;
    }
  }
  return 0;
}

struct NO* remove_atual(struct NO* atual){
    struct NO *no1, *no2;
    if(atual->esq ==NULL){
        no2 = atual->dir;
        free(atual);
        return no2;
    }
    no1 = atual;
    no2 = atual->esq;
    while(no2->dir!=NULL){
        no1 = no2;
        no2 = no2->dir;
    }
    no2->dir = atual->dir;
    free(atual);
    return no2;
}

int remove_ArvBin(ArvBin* raiz, int valor){
    if(raiz == NULL){
        return 0;
    }
    struct NO* ant  = NULL;
    struct NO* atual = *raiz;
    
    while(atual!=NULL){
        if(valor == atual->info){
            if(atual == *raiz){
                *raiz = remove_atual(atual);
            }else{
                if(ant->dir ==atual){
                    ant->dir = remove_atual(atual);
                }else{
                    ant->esq = remove_atual(atual);
                }
            }
          return 1;
        }
        
        ant  = atual;
        if(valor>atual->info){
            atual = atual->dir;
        }else{
            atual = atual->esq;
        }
    }
    return 0;
}



int main(void) {

  ArvBin* raiz = cria_ArvBin();
  int N = 8,dados[8] = {50,100,30,20,40,45,35,37};
  for(int i=0;i<N;i++){
    insere_ArvBina(raiz, dados[i]);
  }

  //libera_ArvBin(raiz);
  int altura = altura_ArvBin(raiz);
  printf("\nAltura: %d ",altura);
  int quantidade = totalNosArvBin(raiz);
  printf("\nQuantidade: %d ",quantidade);

  printf("\nPréOrdem:");
  preOrdem_arvBin(raiz);
  printf("\nEmOrdem:");
  emOrdem_arvBin(raiz);
  printf("\nPosOrdem:");
  posOrdem_arvBin(raiz);
  printf("\nFinalizou.");
  
  remove_ArvBin(raiz, 30);
  printf("\nPréOrdem:");
  preOrdem_arvBin(raiz);
  printf("\nEmOrdem:");
  emOrdem_arvBin(raiz);
  printf("\nPosOrdem:");
  posOrdem_arvBin(raiz);
  printf("\nFinalizou.");
  
  return 0;
}
