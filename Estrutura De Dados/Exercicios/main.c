/******************************************************************************
 1: Tipo abstrato é quando cria um tipo que não é padrão no C exemplo: 
 tipo String e sendo uma struct String que possue um array de char,por exemplo.
 Ela é bom justamente porque alem de alinhar temos na memoria em sequancia, ele
 permite carregar os dados junto similar a um objeto com seus atributos. Depois
 que vc cria um tipo vc pode acessar suas porpriedades e altera-las, assim 
 permitindo que quando instanciado vc pode se poupar de fazer a manipulação com 
 de forma se os dados estivecem separados, alem disso o usaario agradece. 
 Um exemplo de pilha é stack ou até mesmo um baralho empilhado.
 
 
 
 2: 
 #define MAX 10
 typedef filav{
     int valor[MAX];
     int comeco,fim,tamanho;
 }
 Operações: queue = adicionar se adicionar for estourar ele volta do comeco,dequeue retira e possue o mesmo filtro do queue,
 peek pega o primeiro a entrar, IsVazia verifica se a fila está vazia e IsFull se está completa.
 A fila circula se diferencia da fila normal é quando no queue e o dequeue é necessario fazer 
 uma verificação vendo se ela passou do final do array assim resetando o valor deles para o começo = 0;
 Uma fila circular é melhor caso a fila ira durar por mais tempo rodando, justamente se uma fila normal
 ser execultada em larga escala, embora ela possa use menos memoria, terá uma hora que ela não poderá ser usada pois o começo = fim
 e ira estourar se tentar colocar mais alguma coisa. Já na circular se vc usar ela sempre estará disponivel pois ela corrige 
 o começo e fim para poder colocar mais dados.
 
 3: O principal uso do ponteiro é justamente não ligar mais para escopo, ele aponta para o endereço de memoria e depois pode
 acessar em qualquer lugar que ele recebe sua referencia, mas quando estamos falando de um ponteiro em listar ele é essêncial 
 para declarar o fim da mesma. O problema do ponteiro apontar para nada ou lixo de memoria é justamente seu dado não será salvo
 corretamente perdendo as informação. Então é melhor fazer a verificação.
 
 4: Desenho no Docs do Bassul
 
 5:

******************************************************************************/
#include <stdio.h>
#include <stdlib.h>



int main()
{
    printf("Hello World");

    return 0;
}