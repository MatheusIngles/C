/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define bosta 100

typedef struct no {
char nome[bosta];
struct no* prox;
}No;

void imprime_lista(No *lista) {
 while (lista != NULL) {
 printf("%s\n", lista->nome);
 lista = lista->prox;
 }
}

void insere_comeco(No **lista, char *valor){
No* no;
no = (No*)malloc(sizeof(No));
strcpy(no->nome,valor);
no->prox = *lista;
*lista = no;
}

void insere_final(No **lista, char *toma) {
No *n, *aux;
n = (No*)malloc(sizeof(No));
strcpy(n->nome,toma);
n->prox = NULL; // Ultimo elementob da lista
if (*lista == NULL) {
*lista = n; //lista vazia
} else {
aux = *lista;
while (aux->prox != NULL){ /*procurando
o fim da lista*/
aux = aux->prox;
aux->prox = n;
}
}
}

char *remove_inicio(No **lista) {
No* n;
 char v[bosta];
 if(*lista == NULL) return 1; //lista vazia
n = *lista;
*lista = n->prox; //substitui o atual pelo proximo
 strcpy(v,n->nome);
 free(n); //remove item da memoria
 return v;
}

char *remove_final(No **lista) {
No *n, *aux;
char v[bosta];
if (*lista == NULL) //fim da lista
return "bosta";
if ((*lista)->prox == NULL) {
n = *lista;
*lista = NULL;
} else {
aux = *lista;
/* Para no penúltimo nó */
while (aux->prox->prox != NULL)
aux = aux->prox;
n = aux->prox;
aux->prox = NULL;
}
strcpy(v, n->nome);
free(n);
return v;
}

void main(){
    No *lista;
    lista = NULL;
    insere_comeco(&lista, "Andrade");
    insere_comeco(&lista, "de");
    insere_comeco(&lista, "Drumnond");
    insere_comeco(&lista, "Carlos");
    insere_comeco(&lista, "de");
    insere_comeco(&lista, "Quadrila");
    imprime_lista(lista);
}