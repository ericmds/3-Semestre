# Exercícios
1) Descobrir a diferença em java de Vector, ArrayList e LinkedList e construir exemplos
2) Qual a diferença de banco de dados e sistemas gerenciadores de banco de dados (SGBD)
3) O que são SGBD relacionais e SGBD não relacionais

---

## 1) Descobrir a diferença em java de Vector, ArrayList e LinkedList e construir exemplos
As três classes fazem parte da Java Collection Framework e são usadas para armazenar e manipular listas de elementos, mas há diferenças importantes entre elas:

* Vector
  * Implementado com um array dinâmico.
  * Thread-safe, ou seja, sincronizado (métodos synchronized), o que pode tornar o desempenho mais lento em comparação com ArrayList.
  * Cresce automaticamente dobrando seu tamanho quando necessário.

* ArrayList
  * Também baseado em um array dinâmico, mas não é sincronizado.
  * Melhor desempenho que Vector em ambientes single-thread.
  * Quando precisa crescer, aumenta seu tamanho em 50%.

* LinkedList
  * Implementado como uma lista duplamente encadeada.
  * Operações de inserção e remoção são mais eficientes que ArrayList em listas grandes, pois não precisa realocar memória.
  * Acesso aos elementos é mais lento em comparação com ArrayList, pois precisa percorrer os nós da lista.

Exemplo
```java
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;
import java.util.Vector;

public class CollectionExample {
    public static void main(String[] args) {
        // Usando ArrayList
        List<String> arrayList = new ArrayList<>();
        arrayList.add("A");
        arrayList.add("B");
        arrayList.add("C");
        System.out.println("ArrayList: " + arrayList);

        // Usando Vector
        List<String> vector = new Vector<>();
        vector.add("X");
        vector.add("Y");
        vector.add("Z");
        System.out.println("Vector: " + vector);

        // Usando LinkedList
        List<String> linkedList = new LinkedList<>();
        linkedList.add("1");
        linkedList.add("2");
        linkedList.add("3");
        System.out.println("LinkedList: " + linkedList);
    }
}
```
