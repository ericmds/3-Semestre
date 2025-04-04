# Estruturas de Dados
Disciplina de estruturas de dados da UFN, contendo códigos dos programas e métodos discutidos e trabalhados em laboratório.

## Conceitos
* Estruturas de Dados Físicas: são estruturas de armazenamento de dados em memória principal. São dependentes da linguagem de programação

* Estruturas de Dados Abstratas: são algoritmos com operações específicas (inserir, pesquisar, atualizar, deletar) para melhor gestão da memória. Por serem algoritmos, são independentes de linguagem

  * Pilha (Stack): Last In, First Out (LIFO) - Ultimo que entra é o primeiro a sair
    * operações: inserir (add ou append ou push) e remover (remove ou delete ou pop)
    * topo (peek)
    * outros métodos: isEmpty() ou empty()
    * aplicações: backups, problemas em jogos de lógica, gerenciamento de processos em SO
      
* Lista (List): Ordenação (quando possível)
    * operações: inserir (add ou append), pesquisar (contains ou in), atualizar (set), deletar (remove ou delete)
    * outros métodos: size() ou Count() ou len(lista); isEmpty ou Empty
    * aplicações: guardar dados ordenados (pesquisar mais eficiente)

* Fila (Queue): First In, First Out - Primeiro que entra é o primeiro a sair
    * operações: inserir (final ou na cauda/tail - add) ou remover (início ou na cabeça/head - remove)
    * outros métodos: isEmpty ou Empty; size ou Count
    * aplicações: quando há necessidade de gerenciar prioridades

* Árvore (Tree): Armazenamento para busca eficaz
    * operações: inserir (add), pesquisar (contains), atualizar (set), deletar (remove)
    * aplicações: técnicas de IA ou jogos de lógica ou simplesmente eletrônicos

* Grafo (Graph): Roteamento ou Percurso
    * operações: inserir (add), pesquisar (contains), atualizar (set), deletar (remove)
    * usa matriz de adjacência
    * aplicações: técnicas de IA para escolher o melhor caminho
 
---
## 1) Explique e exemplifique os papéis de Listas, Pilhas, Filas, Árvores e Grafos em Ciência da Computação.
#### Listas: São estruturas de dados lineares utilizadas para armazenar e manipular coleções de elementos. Seu uso é indicado quando há necessidade de inserção, remoção e acesso sequencial de elementos. Exemplos incluem listas de contatos e histórico de navegação.
#### Pilhas (Stacks): São estruturas de dados do tipo LIFO (Last In, First Out). Utilizadas quando é necessário um controle de acesso baseado no princípio de último a entrar, primeiro a sair, como no controle de chamadas de funções em linguagens de programação (stack de execução).
#### Filas (Queues): Funcionam no modelo FIFO (First In, First Out). São amplamente empregadas em sistemas de processamento de tarefas, como filas de impressão e gerenciamento de requisições HTTP em servidores.
#### Árvores: Estruturas hierárquicas úteis para representar relações e permitir busca eficiente. Exemplo: árvore de diretórios em um sistema operacional.
#### Grafos: Modelam relacionamentos complexos, como redes de transporte, redes sociais e circuitos eletrônicos. São compostos por vértices (nós) e arestas (ligações).

## 2) Qual a diferença de List, ArrayList e LinkedList nas linguagens Java e C#?
### List (Interface em Java e Classe em C#):
#### Em Java, List é uma interface que define o comportamento de coleções ordenadas, sendo implementada por classes como ArrayList e LinkedList.
#### Em C#, List<T> é uma classe genérica da biblioteca System.Collections.Generic, baseada em arrays dinâmicos.

### ArrayList:
#### Em Java, é uma implementação baseada em arrays dinâmicos. Apresenta desempenho eficiente para acessos diretos (O(1)) e ineficiente para inserções/remoções no meio da lista (O(n)).
#### Em C#, List<T> funciona de maneira similar ao ArrayList de Java.

### LinkedList:
#### Em Java, é uma implementação de lista duplamente encadeada, proporcionando eficiência em inserções e remoções (O(1) quando se tem referência ao nó).
#### Em C#, LinkedList<T> também é uma lista duplamente encadeada, ideal para operações frequentes de inserção e remoção.

## 3) As Listas são estruturas lineares que podem armazenar dados primitivos (int, double, String, etc), outras listas, dicionários e objetos. Escreva e justifique qual é a melhor utilização de listas. Ou com dados primitivos, ou com outras listas, ou dicionários, ou com objetos.
A melhor utilização depende do contexto:
#### Dados primitivos: São eficientes em consumo de memória e velocidade de acesso, sendo ideais quando não há necessidade de encapsulamento.
#### Outras listas: Utilizadas para modelagem de matrizes ou estruturas aninhadas.
#### Dicionários: Melhor para armazenar pares chave-valor.
#### Objetos: Mais flexível e recomendado para modelar entidades do sistema.
Justificativa: O uso de listas de objetos é a melhor escolha porque permite maior organização, encapsulamento e reutilização de código.

## 4) Na construção de sistemas com uso de Listas de objetos, qual o artifício de programação que deve ser implementado para que a lista tenha controle de duplicados na estrutura?
A duplicidade pode ser controlada de três formas:
#### Usando Set (como HashSet) em vez de List.
#### Verificando a existência do objeto antes da inserção na lista.
