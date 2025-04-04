# ESTRUTURA DE DADOS
## Estruturas Físicas
* Definem como os dados são armazenados na memória do computador.
* Determinam a organização e o acesso aos dados, influenciando o desempenho dos algoritmos.
* Dependem da implementação e da arquitetura do computador.

### Exemplos de Estruturas Físicas

#### Array (Vetores e Matrizes)
* Estrutura linear e estática, armazena elementos do mesmo tipo em posições consecutivas de memória.
* Acesso rápido por índice, mas custo alto para inserção/remoção no meio.

Exemplo:
```java
int[] numeros = {1, 2, 3, 4, 5};
System.out.println(numeros[2]); // Saída: 3
```

#### Listas Encadeadas
* Cada elemento contém um valor e um ponteiro para o próximo.
* Estrutura dinâmica (cresce conforme necessário).
* Inserções e remoções eficientes, mas acesso sequencial mais lento que arrays.

#### Filas (Queue)
* FIFO (First In, First Out): o primeiro elemento a entrar é o primeiro a sair.
* Permite inserções no fim (cauda) e remoções no início (cabeça).

Exemplo:
```java
Queue<Integer> fila = new LinkedList<>();
fila.add(10);
fila.add(20);
System.out.println(fila.poll()); // Saída: 10 (o primeiro a entrar)
```

#### Pilhas (Stack)
* LIFO (Last In, First Out): o último elemento a entrar é o primeiro a sair.
* Permite apenas inserção e remoção no topo.

Exemplo:
```java
Stack<Integer> pilha = new Stack<>();
pilha.push(5);
pilha.push(10);
System.out.println(pilha.pop()); // Saída: 10 (último a entrar, primeiro a sair)
```

#### HashMap (Dicionário)
* Estrutura que armazena pares chave-valor, usando uma função hash para acesso eficiente.
* Chaves são únicas.

Exemplo:
```java
Copiar
Editar
HashMap<String, Integer> mapa = new HashMap<>();
mapa.put("João", 25);
System.out.println(mapa.get("João")); // Saída: 25
```

## Estruturas Abstratas
* Modelos lógicos que definem como os dados devem ser organizados e manipulados, sem considerar a implementação física.
* Determinam o comportamento da estrutura e as operações permitidas.

### Exemplos de Estruturas Abstratas

#### List (Lista)
* Coleção ordenada de elementos.
* Permite inserções, remoções e buscas por posição.
* Pode ser implementada com arrays (ArrayList) ou listas encadeadas (LinkedList).

Exemplo:
```java
Copiar
Editar
List<String> lista = new ArrayList<>();
lista.add("A");
lista.add("B");
System.out.println(lista.get(1)); // Saída: B
```

#### Dicionário (Map)
* Armazena pares chave-valor.
* Busca rápida por chave.

Exemplo:
```java
Map<String, Integer> dicionario = new HashMap<>();
dicionario.put("chave1", 100);
System.out.println(dicionario.get("chave1")); // Saída: 100
```

#### Conjunto (Set)
* Não permite elementos duplicados.
* Implementado geralmente com tabelas hash (HashSet).

Exemplo:
```java
Set<String> conjunto = new HashSet<>();
conjunto.add("A");
conjunto.add("B");
conjunto.add("A"); // Ignorado
System.out.println(conjunto.size()); // Saída: 2
```

## Estruturas Lineares vs. Não Lineares
### Estruturas Lineares
* Elementos organizados em sequência.
* Cada elemento tem um único sucessor e um único antecessor (exceto o primeiro e o último).
* Exemplos: Array, Lista, Pilha, Fila.

### Estruturas Não Lineares
* Elementos organizados de forma hierárquica ou interconectada.
* Cada elemento pode ter mais de um sucessor ou antecessor.
* Exemplos: Árvores, Grafos.

## Lista de Objetos vs. Dicionário (Map)
### Use List<T> quando:
* Precisa manter a ordem dos elementos.
* Permite valores duplicados.
* Precisa percorrer frequentemente a coleção.

### Use Map<K, V> quando:
* Precisa de busca rápida por chave.
* Quer garantir chaves únicas.
* Os dados são identificados por um identificador único.

Exemplo Comparativo
```java
// Lista de objetos
List<String> nomes = new ArrayList<>();
nomes.add("Ana");
nomes.add("Bruno");
System.out.println(nomes.get(0)); // Saída: Ana

// Dicionário (Map)
Map<String, Integer> idades = new HashMap<>();
idades.put("Ana", 25);
idades.put("Bruno", 30);
System.out.println(idades.get("Ana")); // Saída: 25
Gerando Números Aleatórios em Java
```

## Gerando Números Aleatórios em Java
```java
import java.util.Random;

public class ExemploRandom {
    public static void main(String[] args) {
        Random rand = new Random();
        
        int inteiro = rand.nextInt(100); // Número entre 0 e 99
        double decimal = rand.nextDouble(); // Número entre 0.0 e 1.0
        boolean booleano = rand.nextBoolean(); // true ou false

        System.out.println("Inteiro: " + inteiro);
        System.out.println("Decimal: " + decimal);
        System.out.println("Booleano: " + booleano);
    }
}
```

## Árvores
* Estrutura hierárquica onde cada nó pode ter filhos.
* O primeiro nó é chamado de raiz.
* Aplicações:
  * Banco de dados (Índices B-Tree).
  * Sistemas de arquivos (pastas e subpastas).
  * Jogos (árvores de decisão).
  * Compiladores (análise sintática).

## ArrayList vs. LinkedList
### ArrayList
* Implementação baseada em array dinâmico.
* Acesso rápido por índice (O(1)).
* Inserção e remoção lentas no meio.

### LinkedList
* Implementação baseada em lista duplamente encadeada.
* Inserções e remoções rápidas no meio.
* Acesso mais lento (O(n)), pois precisa percorrer a lista.

## equals() e contains()
### equals() e hashCode()
* Compara o conteúdo dos objetos (e não a referência de memória).
* Útil quando objetos diferentes podem ser considerados "iguais".

### contains()
* Verifica se um objeto já está na lista.
* Usa equals() para comparar os elementos.

Exemplo
```java
class Pessoa {
    String nome;
    Pessoa(String nome) { this.nome = nome; }
    
    @Override
    public boolean equals(Object obj) {
        if (this == obj) return true;
        if (obj == null || getClass() != obj.getClass()) return false;
        Pessoa pessoa = (Pessoa) obj;
        return nome.equals(pessoa.nome);
    }
}

List<Pessoa> lista = new ArrayList<>();
lista.add(new Pessoa("Carlos"));
System.out.println(lista.contains(new Pessoa("Carlos"))); // true
```
