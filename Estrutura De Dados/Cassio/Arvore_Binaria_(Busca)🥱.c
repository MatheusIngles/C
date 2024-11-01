/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

typedef struct No{
    int valor;
    struct No *esquerda,*direita;
}No;

typedef No *ArvBin;

ArvBin* cria_ArvBin(){
    ArvBin* raiz = (ArvBin *) malloc(sizeof(ArvBin));
    if(raiz!= NULL){
        *raiz = NULL;
    }
    return raiz;
}

int insere_ArvBin(ArvBin *raiz, int valor){
    if(raiz == NULL){
        return 0;
    }
    
    No* novo = (No *) malloc(sizeof(struct No));
    if(novo == NULL){
        return 0;
    }
    novo->valor = valor;
    novo->direita = NULL;
    novo->esquerda = NULL;
    if(*raiz == NULL){
        *raiz = novo;
    }else{//se for insere no final da arvore
        No* atual = *raiz;
        No* ant =  NULL;
        while(atual!=NULL){
            ant= atual;
            if(valor == atual->valor){
                free(novo);
                return 0;
            }
            if(valor>atual->valor){
                atual = atual->direita;
            }            else{
                atual = atual->esquerda;
            }
        }
        if(valor>ant->valor){
            ant->direita = novo;
        }else{
            ant->esquerda = novo;
        }
    }
    
    return 1;
}

void libera_NO(No* no){
    if(no == NULL){
        return;
    }
    libera_NO(no->esquerda);
    libera_NO(no->direita);
    free(no);
    no = NULL;
}

void libera_ArvBin(ArvBin* raiz){
    if(raiz == NULL){
        return;
    }
    libera_NO(*raiz);
    free(raiz);
}

void preOrdem_Arvore(ArvBin* raiz){
    if(raiz == NULL){
        return;
    }
    if(*raiz != NULL){
        printf("%d\t",(*raiz)->valor);
        preOrdem_Arvore(&((*raiz)->esquerda));
        preOrdem_Arvore(&((*raiz)->direita));
    }
}

void EmOrdem_Arvore(ArvBin* raiz){
    if(raiz == NULL){
        return;
    }
    if(*raiz != NULL){
        EmOrdem_Arvore(&((*raiz)->esquerda));
        printf("%d\t",(*raiz)->valor);
        EmOrdem_Arvore(&((*raiz)->direita));
    }
}

void PosOrdem_Arvore(ArvBin* raiz){
    if(raiz == NULL){
        return;
    }
    if(*raiz != NULL){
        PosOrdem_Arvore(&((*raiz)->esquerda));
        PosOrdem_Arvore(&((*raiz)->direita));
        printf("%d\t",(*raiz)->valor);
    }
}

struct No* remove_atual(struct No* atual){
    struct No *no1, *no2;
    if(atual->esquerda == NULL){
        no2 = atual->direita;
        free(atual);
        return no2;
    }
    no1 = atual;
    no2 = atual->esquerda;
    while(no2->direita != NULL){
        no1 = no2;
        no2 = no2->direita;
    }
    no2->direita = atual->direita;
    free(atual);
    return no2;
}

int remove_ArvBin(ArvBin* raiz, int valor){
    if(raiz == NULL){
        return 0;
    }
    struct No* ant = NULL;
    struct No* atual = *raiz;
    
    while(atual != NULL){
        if(valor == atual->valor){
            if(atual == *raiz){
                *raiz = remove_atual(atual);
            }else {
                if(ant->direita == atual){
                    ant->direita = remove_atual(atual);
                }else{
                    ant->esquerda == remove_atual(atual);
                }
                
            }        
        }
        
        ant = atual;
        if(valor>atual->valor){
            atual = atual->direita;
        }else{
            atual = atual->esquerda;
        }
    }
    return 0;
}

int main()
{
   ArvBin* raiz = cria_ArvBin();
   int N = 8, dados[8] = {50,100,30,20,40,45,35,37};
   for(int i = 0; i< 8;i++){
       insere_ArvBin(raiz,dados[i]);
   }
   printf("\n Pré-Ordem:\n");
   preOrdem_Arvore(raiz);
   remove_ArvBin(raiz, 20);
   
   printf("\n Pré-Ordem:\n");
   preOrdem_Arvore(raiz);
    return 0;
}
