# Exercícios
1) Descobrir a diferença em java de Vector, ArrayList e LinkedList e construir exemplos
2) Qual a diferença de banco de dados e sistemas gerenciadores de banco de dados (SGBD)
3) O que são SGBD relacionais e SGBD não relacionais

## 1) Descobrir a diferença em java de Vector, ArrayList e LinkedList e construir exemplos
### ArrayList
* Como funciona?
  * Internamente usa um array dinâmico
  * Acesso rápido por índice (O(1)) porque os elementos ficam em posições contíguas na memória
  * Inserções e remoções no fim são rápidas (O(1))
  * Inserções e remoções no meio são lentas (O(n)), pois exige deslocamento dos elementos
    
* Quando usar?
  * Quando há muitas operações de leitura (busca por índice)
  * Quando as inserções/remoções forem sempre no final da lista
  * Exemplo: Lista de produtos em um carrinho de compras

Exemplo de ArrayList
```java
import java.util.ArrayList;
import java.util.List;

public class ArrayListExample {
    public static void main(String[] args) {
        List<String> arrayList = new ArrayList<>();

        // Adicionando elementos
        arrayList.add("Banana");
        arrayList.add("Maçã");
        arrayList.add("Laranja");

        // Acessando rapidamente pelo índice
        System.out.println("Elemento na posição 1: " + arrayList.get(1)); // Maçã

        // Removendo um elemento do meio (custo O(n))
        arrayList.remove(1);
        System.out.println("Após remoção: " + arrayList);

        // Percorrendo a lista
        for (String fruta : arrayList) {
            System.out.println("Fruta: " + fruta);
        }
    }
}
```
* Acesso por índice (get(index)) é rápido (O(1))
* Remover elementos do meio da lista é lento (O(n)), pois exige deslocamento

### LinkedList
* Como funciona?
  * Internamente usa uma lista duplamente encadeada
  * Inserções e remoções são rápidas (O(1)) em qualquer posição, pois só ajusta os ponteiros dos nós
  * Acesso por índice é lento (O(n)), pois precisa percorrer a lista do início até o índice desejado
  
* Quando usar?
  * Quando há muitas inserções e remoções no meio da lista
  * Quando não há necessidade de acesso rápido por índice
  * Exemplo: Implementação de filas e listas de espera

Exemplo de LinkedList
```java
import java.util.LinkedList;
import java.util.List;

public class LinkedListExample {
    public static void main(String[] args) {
        List<String> linkedList = new LinkedList<>();

        // Adicionando elementos
        linkedList.add("Carro");
        linkedList.add("Moto");
        linkedList.add("Bicicleta");

        // Inserindo no meio (rápido em comparação com ArrayList)
        linkedList.add(1, "Ônibus");
        System.out.println("Lista após inserção: " + linkedList);

        // Removendo do meio (rápido)
        linkedList.remove("Moto");
        System.out.println("Lista após remoção: " + linkedList);

        // Iterando pela lista
        for (String veiculo : linkedList) {
            System.out.println("Veículo: " + veiculo);
        }
    }
}
```
* Remover e adicionar no meio da lista é rápido (O(1)) porque só muda os ponteiros
* Acesso por índice (get(index)) é lento (O(n)) porque precisa percorrer a lista

### Vector
* Como funciona?
  * Similar ao ArrayList, mas é sincronizado (thread-safe)
  * As operações são mais lentas que ArrayList devido ao controle de concorrência
   
* Quando usar?
  * Quando há múltiplas threads acessando e modificando a lista ao mesmo tempo
  * Se precisar de um ArrayList sincronizado, é melhor usar Collections.synchronizedList(new ArrayList<>()) em vez de Vector
  * Exemplo: Quando múltiplas threads estão adicionando e removendo logs em tempo real

Exemplo de Vector
```java
import java.util.List;
import java.util.Vector;

public class VectorExample {
    public static void main(String[] args) {
        List<String> vector = new Vector<>();

        // Adicionando elementos
        vector.add("João");
        vector.add("Maria");
        vector.add("Carlos");

        // Acessando elementos
        System.out.println("Primeiro elemento: " + vector.get(0));

        // Removendo um elemento
        vector.remove("Maria");
        System.out.println("Lista após remoção: " + vector);

        // Percorrendo a lista
        for (String nome : vector) {
            System.out.println("Nome: " + nome);
        }
    }
}
```
* Vector é sincronizado (thread-safe), então funciona bem em múltiplas threads
* Possui as mesmas operações que ArrayList, mas é mais lento devido à sincronização
