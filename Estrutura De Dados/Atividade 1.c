/* Simulação de Torneio de Pedra-Papel-Tesoura com Fila
Desenvolva uma simulação de um torneio de Pedra-Papel-Tesoura onde os jogadores competem
em pares e os vencedores continuam para a próxima rodada. Utilize uma fila para organizar os
jogadores. A cada rodada, dois jogadores são removidos da fila e competem entre si. O vencedor
da partida deve retornar ao final da fila, enquanto o perdedor é eliminado do torneio. O processo
continua até que reste apenas um jogador na fila, que será o campeão do torneio. Por exemplo,
se a fila inicial tiver 8 jogadores, o algoritmo deve continuar removendo pares de jogadores,
competindo, e reordenando os vencedores até que reste apenas um vencedor final.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

#define Max 10

/*TABELA DE TIPO:
    1- Papel
    2- Tisoura
    3- Pedra
*/


// Criando uma struct para poder Guardar os nomes
typedef struct{
    char nome[Max];
}Jogadore;

typedef struct{
    Jogadore Jogadores[Max];
    int comeco,fim,tamanho;
    int itens[Max];
}fila;

void inicializar(fila *f){
    f->tamanho = 0;
    f->comeco = 0;
    f->fim = -1;
}

int isVazia(fila *f){
    return (f->tamanho == 0);
}

int isFull(fila *f){
    return (f->tamanho == Max);
}

void Enqueue(fila *f, int estilo){
    if(!isFull(f)){
        f->fim++;
        if((f->fim) == Max){
            (f->tamanho++);
            f->fim = 0;
            f->itens[f->fim] = estilo;
        }else{
            f->tamanho++;
            f->itens[(f->fim)] = estilo;
        }
    }else{
        printf("A fila está cheia");    
    }
}

int Dequeue(fila *f){
    if(!isVazia(f)){
        int v = f->itens[f->comeco];
        f->comeco++;
        if((f->comeco) == Max){
            f->tamanho--;
            f->comeco = 0;
            return v;
        }else{
            f->tamanho--;
            return v;
        }
    }else{
        printf("A fila está vazia");
        return -1;
    }
}

int peek(fila *f){
    if(!isVazia(f)){
        return f->itens[f->comeco];
    }else{
        return -1;
    }
}

// Começando a Fazer as funções para manipular a  lista

void AdicionarJogador(fila *f, Jogadore *j, int estilo){
    if(!isFull(f)){
        Enqueue(f,estilo);
        f->Jogadores[f->fim] = *j;
    }else{
        printf("A fila está cheia");
    }
}

void AdicionarVencedores(fila *f, fila *f2, int indice){
    if(!isFull(f)){
        Enqueue(f,f2->itens[indice]);
        f->Jogadores[f->fim] = f->Jogadores[indice];
    }else{
        printf("A fila está cheia");
    }
}

char *RemoverJogador(fila *f){
    Dequeue(f);
    int x = f->comeco;
    int temp = x + 1;
    return f->Jogadores[temp].nome;
}

void popularMentade(fila *f){
    int a;
    
    for(int i = 0; i < Max/2;i++){
        Jogadore j;
        char nome[Max];
        int tipo;
        a = (rand() % 3) + 1;
        switch(a){
            case 1:
                strcpy(j.nome,"Julia");
                tipo = (rand() % 3) + 1;
                AdicionarJogador(f,&j, tipo);
            break;
            
            case 2:
                strcpy(j.nome,"Pedro");
                tipo = (rand() % 3) + 1;
                AdicionarJogador(f,&j, tipo);
            break;
            
            case 3:
                strcpy(j.nome,"Joao");
                tipo = (rand() % 3) + 1;
                AdicionarJogador(f,&j, tipo);
            break;
        }
    }
}

void mostrarJogadores(fila *f) {
    int cont, i;

    for (cont = 0, i = f->comeco; cont < f->tamanho; cont++) {
        printf("Jogadores: %s - Tipo de jogada:%d \n",f->Jogadores[i++].nome, f->itens[i]);
        if (i == f->tamanho)
            i = 0;
    }
    printf("\n\n");
}

void chaveamento(fila *f){
    fila temporaria;
    int cont, i;

    for (cont = 0, i = f->comeco; cont < f->tamanho; cont++) {
        i++;
        if(f->itens[i + 1] == sizeof(int)){
            do{
                if(f->itens[i] == 1 &&  f->itens[i+1] == 2){
                    AdicionarVencedores(&temporaria,f,i+1);
                    break;
                }else if(f->itens[i] == 1 &&  f->itens[(i+1)] == 3){
                    AdicionarVencedores(&temporaria,f,i);
                    break;
                }else if(f->itens[i] == 2 &&  f->itens[(i+1)] == 3){
                    AdicionarVencedores(&temporaria,f,i+1);
                    break;
                }else{
                    int a = (rand() % 3)+1, a2 = (rand() % 3) + 1;
                    f->itens[i] = a;
                    f->itens[i+1] = a2;
                } 
            }while(1);
        }else if(f->tamanho % 2 != 0){
            AdicionarVencedores(&temporaria,f,i);
        }
        
        if (i == Max){
            i = 0;
        }
    }
    *f = temporaria;
    
    if(f->tamanho != 1){
     chaveamento(f);
    }
}

int main()
{
    int escolha,tipo;
    fila f, *novaFila;
    char *JogadorRetirado;
    Jogadore J;
    inicializar(&f);
    srand(time(NULL));
    while(1){
        printf("O que vc quer fazer?\n1-Adicionar Jogador\n2-Remover Jogador\n3-Popular Mentade\n4-Mostrar Fila\n5-Começar a competição\n");
        scanf("%d",&escolha);
        if(escolha == 1){
            printf("Qual o Nome do Jogador e o tipo, respectivamente de jogada seguindo a tabela\n");
            scanf("\n%[^\n]",J.nome);
            scanf("%d",&tipo);
            AdicionarJogador(&f,&J,tipo);
        }else if(escolha == 2){
            JogadorRetirado = RemoverJogador(&f);
            printf("Nome do Jogador Removido: %s\n",JogadorRetirado);
        }else if(escolha == 3){
            popularMentade(&f);
        }else if(escolha == 5){
            chaveamento(&f);
            mostrarJogadores(&f);
        }else if(escolha == 4){
            mostrarJogadores(&f);
        }else{
            break;
        }
    }
    return 0;
}