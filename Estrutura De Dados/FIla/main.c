/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>


typedef struct{
    int capacidade;
    int *itens;
    int quantidade;
    int comeco;
    int fim;
} fila;

int isFull(fila *f){
    if(f->quantidade == f->capacidade){
        printf("A fila já esta cheia\n");
        return 1;
    } else {
        return -1;
    }
    
}

int isEmpty(fila *f){
    if(f->quantidade == 0){
        return 0;
    }else{
        return 1;
    }
}

void enqueue(fila *f){
    if(!isEmpty(f)){
        f->comeco++;
        if(f->comeco == f->capacidade){
            f->comeco = 0;
        }
        f->quantidade--;
    }
}

void queue(fila *f, int i){
    if(!isFull(f)){ 
        f->fim++;
        if(f->fim == f->capacidade){
            f-> fim = 0;
        }
        f->itens[f->fim]= i;
        f->quantidade++;
    }
}

void inicializacao(fila *f, int c){
    f->itens = malloc(int *)
    f->comeco = -1;
}

void inprimirifla(ila *f){
    while({}
}
int main()
{
    fila f;
    inicializacao(&f);
    
    return 0;
}