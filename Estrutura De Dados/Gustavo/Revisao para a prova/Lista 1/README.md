
# Estrutura de Dados em C - Perguntas e Respostas

## 1. Explique a estrutura de uma pilha e o funcionamento das operações "empilhar" e "desempilhar". Em que situações práticas o uso de pilhas é mais adequado?

Uma **pilha** é uma estrutura de dados que segue o princípio **LIFO** (Last In, First Out), onde o último elemento inserido é o primeiro a ser removido. As operações principais são:
- **Empilhar (push)**: Insere um novo elemento no topo da pilha.
- **Desempilhar (pop)**: Remove o elemento do topo da pilha.

Situações práticas incluem:
- Algoritmos de **recursão**, onde o controle de chamadas é empilhado.
- **Avaliação de expressões**, como notação polonesa inversa (RPN).
- **Navegação** de grafos ou árvores em algoritmos de busca em profundidade (DFS).

---

## 2. Compare listas simplesmente ligadas e listas duplamente ligadas. Quais são as vantagens e desvantagens de cada tipo de lista em termos de eficiência e uso de memória?

### Lista Simplesmente Ligada:
- **Vantagens**:
  - Menor consumo de memória, já que cada nó armazena apenas o ponteiro para o próximo nó.
- **Desvantagens**:
  - Não permite navegação bidirecional.
  - Remover um nó intermediário requer percorrer a lista a partir do início.

### Lista Duplamente Ligada:
- **Vantagens**:
  - Navegação em ambos os sentidos (próximo e anterior).
  - Remoções e inserções no meio da lista são mais eficientes.
- **Desvantagens**:
  - Maior consumo de memória, pois cada nó armazena dois ponteiros (anterior e próximo).

---

## 3. Descreva os principais desafios na implementação de uma lista ligada em comparação com um array. Quais são os benefícios de uma lista ligada sobre um array?

### Desafios:
- Gerenciamento de **ponteiros** para conectar os nós de forma correta.
- **Alocação dinâmica** de memória, que pode levar a fragmentação.

### Benefícios de uma Lista Ligada:
- **Flexibilidade** no tamanho: cresce ou diminui dinamicamente, ao contrário de arrays que têm tamanho fixo.
- **Inserções e deleções** eficientes, sem a necessidade de reorganizar os elementos, como ocorre em arrays.

---

## 4. Explique como acessar os membros de uma struct em C usando ponteiros. Por que é importante dominar o uso de ponteiros para manipular estruturas de dados complexas?

Os membros de uma `struct` em C podem ser acessados por meio de ponteiros usando duas formas:
- `p->membro` ou `(*p).membro`.

É fundamental dominar ponteiros porque:
- Permite o acesso eficiente a dados dinâmicos.
- Facilita a implementação de estruturas de dados complexas como listas, árvores e grafos.

---

## 5. Defina o conceito de ponteiro em C e descreva um cenário onde o uso de ponteiros seria essencial para a manipulação de dados. Como o uso de ponteiros pode ajudar na implementação de estruturas de dados dinâmicas?

Um **ponteiro** é uma variável que armazena o endereço de memória de outra variável. O uso de ponteiros é essencial em cenários como:
- Funções que precisam retornar ou modificar múltiplos valores.
- Alocação dinâmica de memória para criar estruturas como listas ligadas e árvores.

Com ponteiros, é possível alocar e liberar memória dinamicamente, permitindo a criação de estruturas de dados de tamanho variável durante a execução do programa.

---

## 6. O que são structs em C e qual é a importância de agrupar diferentes tipos de variáveis em uma única estrutura? Forneça um exemplo prático de uso de struct para representar um objeto do mundo real.

Uma `struct` em C é uma estrutura que agrupa variáveis de diferentes tipos em uma única unidade lógica. Isso é importante para organizar dados relacionados de maneira eficiente.

### Exemplo:
```c
struct Aluno {
    int matricula;
    char nome[100];
    float nota;
};
```
Aqui, a `struct Aluno` agrupa os dados de um estudante em um só lugar, facilitando o acesso e a manipulação.

---

## 7. Descreva o funcionamento da função `malloc()` e o que deve ser feito após a alocação de memória para evitar problemas como vazamento de memória (memory leak). Qual a importância de verificar o valor retornado pela função `malloc()`?

A função `malloc()` aloca um bloco de memória na **heap** e retorna um ponteiro para esse bloco. Após a alocação, é importante:
- Verificar se o valor retornado é diferente de `NULL` para garantir que a alocação foi bem-sucedida.
- Utilizar a função `free()` para liberar a memória quando ela não for mais necessária, evitando vazamentos de memória.

---

## 8. Suponha que você precisa dividir uma lista ligada de números inteiros em duas novas listas: uma contendo os números pares e outra contendo os números ímpares. Como você faria essa divisão usando apenas manipulação de ponteiros, sem copiar o conteúdo dos nós? Explique a lógica da solução.

Para dividir a lista sem copiar os nós:
1. Percorra a lista original.
2. Para cada número, ajuste os ponteiros para que ele faça parte de uma lista de pares ou ímpares.
3. Certifique-se de ajustar os ponteiros da lista original para que os nós não sejam duplicados.

Dessa forma, você reutiliza os nós existentes, apenas mudando os ponteiros para formar duas novas listas.

---

## 9. Explique o funcionamento de uma fila (queue) e descreva como seria implementada a operação de inserção (enqueue). Quais são as diferenças entre filas e pilhas em termos de ordem de inserção e remoção de elementos?

Uma **fila** segue o princípio **FIFO** (First In, First Out), onde o primeiro elemento a entrar é o primeiro a sair. A operação **enqueue** insere um novo elemento no final da fila.

### Diferenças com Pilhas:
- **Fila**: o primeiro elemento inserido é o primeiro a ser removido.
- **Pilha**: o último elemento inserido é o primeiro a ser removido (**LIFO**).

---

## 10. Dado o código parcial para inserir um novo nó no início de uma lista ligada, explique cada etapa do processo, desde a alocação de memória até o ajuste dos ponteiros para garantir a correta inserção do nó. Por que é importante ajustar corretamente os ponteiros em uma lista ligada?

### Processo de Inserção:
1. **Alocação de Memória**: Aloca-se um novo nó usando `malloc()`.
2. **Ajuste dos Valores**: O valor do novo nó é definido.
3. **Ajuste de Ponteiros**: O ponteiro do novo nó passa a apontar para o primeiro nó atual da lista.
4. **Atualização da Cabeça**: O ponteiro cabeça da lista é atualizado para apontar para o novo nó.

Ajustar os ponteiros corretamente garante que a lista não perca referências importantes, prevenindo erros como perda de acesso a nós ou *memory leaks*.

---

