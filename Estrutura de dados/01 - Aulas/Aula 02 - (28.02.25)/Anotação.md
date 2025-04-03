# Estrutura de Dados - Java, C#, Python, C++
## 1. Estruturas Físicas
As estruturas físicas de dados estão diretamente relacionadas aos tipos de variáveis e ao espaço de memória ocupado por elas.

### 1.1 Tipos de Variáveis
Os tipos básicos de variáveis variam conforme a linguagem, mas geralmente incluem:
* int → Números inteiros (4 bytes em Java e C++)
* double → Números decimais de dupla precisão (8 bytes)
* float → Números decimais de precisão simples (4 bytes)
* char → Caracteres individuais (1 byte)
* boolean → Verdadeiro ou falso (1 bit ou 1 byte, dependendo da implementação)

### 1.2 Alocação de Memória
* O tamanho da memória alocada depende da linguagem de programação e do compilador.
* Em linguagens como C e C++, a alocação pode ser manual (malloc, new), enquanto em Java e Python é gerenciada pelo Garbage Collector.

## 2. Estruturas Abstratas (Coleções)
As coleções são estruturas de dados que armazenam e organizam múltiplos valores.

### 2.1 Operações CRUD (Create, Read, Update, Delete)
Operações fundamentais para manipulação de dados em coleções:

* Inserção → add, Add, append, push_back
* Percurso
 * Exibir elementos → System.out.print (Java), Console.WriteLine (C#), print (Python, C++)
 * Contar elementos → size (Java, C++), Count (C#), len (Python)
 * Localizar elementos → contains (Java), Contains (C#), in (Python)

* Remoção
 * Remove a primeira ocorrência → remove, Delete
 * Remove todas as ocorrências → removeAll (Java, C#)

* Atualização → update

## 3. Estruturas Lineares
São organizadas de forma sequencial na memória.

### 3.1 Listas
Armazenam elementos de forma ordenada e permitem acesso por índice.

* Exemplos:
 * Java → ArrayList
 * C# → List<T>
 * Python → [] (listas)
 * C++ → vector

* Aplicação: Relatórios, manipulação de dados sequenciais.

### 3.2 Pilhas (Stack - LIFO)
Segue a regra Last In, First Out (LIFO) → O último elemento inserido é o primeiro a ser removido.

* Operações:
 * Inserção: push ou add
 * Remoção: pop ou delete

* Exemplos de implementação:
 * Java → Stack<T>
 * C# → Stack<T>
 * Python → list (append para inserir, pop para remover)
 * C++ → stack<T>

### 3.3 Filas (Queue - FIFO)
Segue a regra First In, First Out (FIFO) → O primeiro elemento inserido é o primeiro a ser removido.

* Operações:
 * Inserção (cauda/fim): add ou append
 * Remoção (cabeça/início): delete ou remove

* Exemplos:
 * Java → Queue<T>
 * C# → Queue<T>
 * Python → collections.deque
 * C++ → queue<T>

## 4. Estruturas Não Lineares
Não possuem um formato sequencial rígido.

### 4.1 Árvores
Usadas para busca e organização hierárquica de dados.

* Exemplo: Árvore Binária de Busca (BST)
 * Aplicação: Organização eficiente para consultas rápidas.
 * Estruturas: TreeMap (Java), SortedDictionary (C#), set (C++).

### 4.2 Grafos
Representam redes e relações complexas entre elementos.

* Aplicação:
 * Mapeamento de rotas (Google Maps).
 * Estruturas de rede (infraestrutura de internet).
 * IA e jogos (caminho mais curto entre pontos).

## 5. Observações sobre Remoção
* remove() → Apaga somente a primeira ocorrência do elemento na estrutura.
* removeAll() → Remove todas as ocorrências do elemento.

## 6. Copilot e GitHub Education
### 6.1 Configuração do Copilot
Para ativar o Copilot na conta do GitHub Education:
 1) Usar o e-mail acadêmico (UFN).
 2) No GitHub Education, cadastrar-se com usuário e senha.
 3) Vincular o GitHub Copilot à conta.
