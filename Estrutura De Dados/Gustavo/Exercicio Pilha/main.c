#include <stdlib.h>
#include <stdio.h>

#define MAX 100
typedef struct {
 int topo;
 int itens[MAX];
} Pilha;

int isEmpty(Pilha *p) {
return p->topo == -1; }

int isFull(Pilha *p) {
return p->topo == MAX - 1; }

void push(Pilha *p, int valor) {
 if (isFull(p)) {
 printf("Pilha cheia!\n");
 } else {
 p->itens[++(p->topo)] = valor;
 }
}

int pop(Pilha *p) {
 if (isEmpty(p)) {
 printf("Pilha vazia!\n");
 return -1;
 } else {
 return p->itens[(p->topo)--];
 }
}

int peek(Pilha *p) {
 if (isEmpty(p)) {
 printf("Pilha vazia!\n");
 return -1;
 } else {
 return p->itens[p->topo];
 }
}
int iniciador(Pilha *p){
    p->topo = -1;
}

int verificar(Pilha *p1, Pilha *p2){
    int cheak = 1;
    
    if(p1->topo == p2->topo && !isEmpty(p1) && !isEmpty(p2)){
        for(int i = 0; i<= p1->topo;i++){
            if(p1->itens[i] != p2->itens[i]){
                cheak = 0;
            }
        }
    }else{
        cheak = 0;
    }
    if(cheak){
            printf("A pilha é igual a outra pilha\n");
    }else{
            printf("A pilha é diferente da outra pilha\n");
    }
        
    
}

int Estatisticas(Pilha *p1, Pilha *p2, int escolha){
    int maior, menor;
    float media = 0;
    if(escolha == 1){
        maior = p1->itens[0];
        menor = p1->itens[0];
        for(int i = 0; i <= p1->topo; i++){
            if(p1->itens[i] > maior){
                maior = p1->itens[i];
            }
            
            if(menor < p1->itens[i]){
                menor = p1->itens[i];
            }
            media += p1->itens[i];    
        }
        media = media / p1->topo+1;
        printf("Media: %0.1f\nMaior: %d\nMenor: %d\n",media, maior, menor);
    }else if(escolha == 2){
        maior = p2->itens[0];
        menor = p2->itens[0];
        for(int i = 0; i <= p2->topo; i++){
            if(p2->itens[i] > maior){
                maior = p2->itens[i];
            }
            
            if(menor < p2->itens[i]){
                menor = p2->itens[i];
            }
            media += p2->itens[i];    
        }
        media = media / p2->topo+1;
        printf("Media: %0.1f\nMaior: %d\nMenor: %d\n",media, maior, menor);
    }
}
// se o topo da primeira for maior faz assim:
// if( p1->topo> p2->topo){ int p_principal = p1->topo} else{int p_principal = p2->topo}

int main()
{
    Pilha p1,p2;
    iniciador(&p1);
    iniciador(&p2);
    int escolha, escolhapilha;
    
    while(1){
        printf("O que fazer?\n1-Adicionar na pilha\n2-Tirar da pilha\n3-Comparar pilha\n4-Estatisticas de cada pilha\n");
        scanf("%d", &escolha);
        if(escolha == 1){
            printf("Qual pilha?\n-1\n-2\n");
            scanf("%d",&escolhapilha);
            if(escolhapilha == 1){
                printf("Qual o valor:\n");
                scanf("%d", &escolha);
                push(&p1, escolha);
            }else if(escolhapilha == 2){
                printf("Qual o valor:\n");
                scanf("%d", &escolha);
                push(&p2, escolha);
            }
        }else if(escolha == 2){
            printf("Qual pilha?\n-1\n-2\n");
            scanf("%d",&escolhapilha);
            if(escolhapilha == 1){
                pop(&p1);
            }else if(escolhapilha == 2){
                pop(&p2);
            }
        }else if(escolha == 3){
            verificar(&p1,&p2);
        }else if(escolha == 4){
            printf("Qual pilha:\n-1\n-2\n");
            scanf("%d",&escolha);
            Estatisticas(&p1,&p2, escolha);
        }else{
            break;
        }
    }

    return 0;
}