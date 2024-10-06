
# Tipos Abstratos de Dados (TAD) e Estruturas de Dados em C - Perguntas e Respostas

## 1. Explique o que são tipos abstratos de dados (TAD) e como eles ajudam a abstrair a implementação de estruturas de dados, como pilhas e filas.

Tipos Abstratos de Dados (TAD) são uma forma de abstração que define as operações que podem ser realizadas em um conjunto de dados, sem especificar como essas operações são implementadas. Isso permite que estruturas de dados, como pilhas e filas, sejam usadas em diferentes programas sem que o programador precise conhecer sua implementação interna.

### Exemplo:
Ao utilizar um TAD para pilha, um programador pode usar as operações **push** e **pop** em diferentes programas sem se preocupar com a estrutura interna da pilha (se é implementada com arrays ou listas ligadas).

---

## 2. Defina um TAD para uma fila circular, incluindo suas operações básicas. Explique quais operações esse TAD deve suportar e como elas se diferenciam das operações de uma fila tradicional.

Um TAD para uma **fila circular** deve incluir as seguintes operações:
- **enqueue** (inserir no fim),
- **dequeue** (remover do início),
- **isFull** (verificar se está cheia),
- **isEmpty** (verificar se está vazia).

A principal diferença para uma fila tradicional é que, ao atingir o fim da estrutura de armazenamento, a fila circular "dá a volta" e começa a inserir no início, se houver espaço livre. Isso torna o uso da memória mais eficiente.

### Situações práticas:
- Buffers de comunicação em sistemas de tempo real são um exemplo onde filas circulares são mais apropriadas que filas tradicionais ou pilhas.

---

## 3. Explique o conceito de ponteiro e por que ele é fundamental em estruturas de dados dinâmicas, como listas encadeadas e árvores.

Um **ponteiro** é uma variável que armazena o endereço de outra variável. Em estruturas dinâmicas como listas encadeadas e árvores, os ponteiros são fundamentais para conectar os nós de forma dinâmica, permitindo que a estrutura cresça e diminua conforme necessário.

### Exemplo de problema:
Tentar acessar um ponteiro nulo pode causar erros de segmentação ou comportamento indefinido, já que ele não aponta para um endereço de memória válido.

---

## 4. Considere dois ponteiros p e q que inicialmente apontam para nós diferentes em uma lista encadeada. Desenhe a lista e mostre o que acontece quando atribuímos p = q.

Quando `p = q`, o ponteiro `p` passa a apontar para o mesmo nó que `q`. Isso significa que ambos os ponteiros agora referenciam o mesmo nó, o que pode levar a perda de referência do nó original de `p`, afetando operações subsequentes, como remoções ou inserções.

---

## 5. Descreva o comportamento da pilha em termos de inserção (push) e remoção (pop) de elementos. Explique por que a recursão utiliza pilhas para armazenar estados intermediários.

Em uma pilha:
- **Push** insere um elemento no topo da pilha.
- **Pop** remove o elemento do topo.

A **recursão** usa pilhas para armazenar estados intermediários, permitindo que as funções sejam chamadas repetidamente e as execuções anteriores sejam retomadas após o retorno de uma função recursiva.

### Exemplo de algoritmo recursivo:
O cálculo do fatorial usa uma pilha para armazenar as chamadas recursivas, sendo que a última função chamada é a primeira a ser resolvida (LIFO).

---

## 6. Considere uma sequência de operações em uma pilha inicialmente vazia: Push(7), Push(3), Pop(), Push(9), Push(2), Pop().

### Conteúdo da pilha após cada operação:
- Push(7): `[7]`
- Push(3): `[7, 3]`
- Pop(): `[7]`
- Push(9): `[7, 9]`
- Push(2): `[7, 9, 2]`
- Pop(): `[7, 9]`

Isso ilustra o comportamento **LIFO (Last In, First Out)**.

---

## 7. Implemente a função isEmpty() para uma pilha implementada utilizando uma lista encadeada e explique a complexidade dessa operação.

A função `isEmpty()` verifica se a pilha está vazia:

```c
int isEmpty(Pilha *p) {
    return (p->topo == NULL);
}
```

A complexidade é **O(1)**, pois basta verificar se o ponteiro topo é nulo. Essa função é importante para garantir que as operações de pop não sejam realizadas em uma pilha vazia.

---

## 8. Explique a diferença entre uma fila do tipo FIFO (First In, First Out) e uma pilha (Last In, First Out).

### Diferença:
- **Fila (FIFO)**: O primeiro elemento a entrar é o primeiro a sair. Exemplo: Fila de pessoas no banco.
- **Pilha (LIFO)**: O último elemento a entrar é o primeiro a sair. Exemplo: Pilha de pratos em uma cozinha.

Cada estrutura tem seu uso específico, dependendo da ordem de processamento necessária.

---

## 9. Uma fila inicialmente vazia recebe as seguintes operações: Enqueue(5), Enqueue(10), Enqueue(15), Dequeue(), Enqueue(20).

### Comportamento da fila após cada operação:
- Enqueue(5): `[5]`
- Enqueue(10): `[5, 10]`
- Enqueue(15): `[5, 10, 15]`
- Dequeue(): `[10, 15]`
- Enqueue(20): `[10, 15, 20]`

A fila segue o comportamento FIFO.

---

## 10. Implemente a função dequeue() para uma fila que foi implementada usando uma lista encadeada.

A função `dequeue()` remove o primeiro elemento da fila:

```c
int dequeue(Fila *f) {
    if (f->inicio == NULL) return -1; // Fila vazia
    
    No *temp = f->inicio;
    int valor = temp->dado;
    f->inicio = f->inicio->proximo;
    free(temp);
    return valor;
}
```

A remoção no início tem complexidade **O(1)**, já que envolve apenas o ajuste de ponteiros.

---

## 11. Explique a diferença entre uma lista simplesmente encadeada e uma lista duplamente encadeada em termos de uso de memória e operações de navegação.

- **Lista Simplesmente Encadeada**: Menor uso de memória, mas só permite navegação em um sentido.
- **Lista Duplamente Encadeada**: Maior uso de memória (dois ponteiros por nó), mas permite navegação bidirecional.

### Vantagem:
Usar uma lista duplamente encadeada é vantajoso em aplicações que exigem remoções e inserções frequentes em ambas as direções, como em editores de texto.

---

## 12. Dada uma lista encadeada que contém os elementos 1 -> 3 -> 5 -> 7, descreva o que deve ser feito para inserir um elemento 4 entre os nós 3 e 5.

1. Crie um novo nó com o valor 4.
2. Ajuste o ponteiro do nó 3 para apontar para o nó 4.
3. Ajuste o ponteiro do nó 4 para apontar para o nó 5.

A atualização dos ponteiros garante que a lista mantenha sua integridade.

---

## 13. Liste as vantagens de se ter ponteiros tanto para o nó anterior quanto para o próximo em uma lista duplamente encadeada.

Ter ponteiros para o nó anterior e o próximo permite navegar em ambos os sentidos e facilita operações como remoção e inserção de nós no meio da lista, já que não é necessário percorrer a lista inteira para encontrar o nó anterior.

### Exemplo:
Na remoção de um nó arbitrário, os ponteiros dos nós adjacentes podem ser atualizados diretamente.

---

## 14. Considere uma lista duplamente encadeada que contém os elementos 2 <-> 4 <-> 6 <-> 8. Desenhe a lista após a remoção do elemento 6.

Após a remoção do elemento 6:
- O ponteiro `próximo` do nó 4 aponta para o nó 8.
- O ponteiro `anterior` do nó 8 aponta para o nó 4.

Isso garante a integridade da lista.

---

## 15. Implemente a função deleteNode() para remover um nó específico de uma lista duplamente encadeada.

```c
void deleteNode(No *nodo) {
    if (nodo->anterior != NULL)
        nodo->anterior->proximo = nodo->proximo;
    if (nodo->proximo != NULL)
        nodo->proximo->anterior = nodo->anterior;
    
    free(nodo);
}
```

Essa função atualiza os ponteiros dos nós adjacentes ao nó removido, garantindo a integridade da lista.

---
