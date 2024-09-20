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
