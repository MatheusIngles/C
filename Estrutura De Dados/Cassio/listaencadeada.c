#include <stdlib.h>
#include <stdio.h>


typedef struct cel{
    int conteudo;
    struct cel *seg;
}cel;

typedef struct cel* Lista;

Lista* cria_lista(){
    Lista *li = (Lista*)malloc(sizeof(Lista));
    if(li != NULL){
        *li = NULL;
    }
    return li;
}

int insere_lista_fim (Lista* lista, int x){
    if(lista == NULL){ 
        return 0;
        
    } 
    
    cel* aux = (cel*) malloc(sizeof(cel));
    
    if(aux==NULL){
        return 0;
        
    }
    
    aux->conteudo = x;
    aux->seg= NULL;
    
    if((*lista)==NULL){ *lista = aux;}//se lista vazia;
    else{//se não for o primeiro elemento;
        cel *temp;
        temp = *lista;
        while(temp->seg != NULL){
            temp = temp->seg;
        }
        temp->seg = aux;
    }
    return 1;
}

void imprimie_lista_fim (Lista* lista) {
    if(liata==NULL || (*lista)==NULL){
        printf("lista vazia\n");
    } else{
        cel *temp;
        temp = *lista;
        do {
            printf("%d | ", temp->conteudo);
            temp=temp->seg;
        }while(temp != NULL);
    }
}

int busca_lista (Lista* lista, int x){
    if (lista = NULL || (*lista)==NULL){
        printf("lista vazia\n");
    }else{
        cel *temp;
        temp = *lista;
        do {
            if(tem-.conteudo==x){
            printf("achou");
            return 1;
            }
        }while(temp != NULL);
    }
}

void libera_lista (Lista* lista){ //precisa desalocar todos os elementos, se não o ponteiro fica perdido
    if(list!=NULL){
        cel* aux;
        while(*lista!=NULL){
            aux = *lista;
            *lista = (*lista)->seg;
            free(aux);
        }
    }
    free(lista);
}
int main()
{
    Lista *lst;
    lst = cria_lista();
    insere_lista_fim(lst,1);
    insere_lista_fim(lst,2);
    insere_lista_fim(lst,3);
    insere_lista_fim(lst,4);
    insere_lista_fim(lst,5);
    printf("______");

    return 0;
}
