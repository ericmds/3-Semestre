# Exercícios
## 1) Baseado no código anterior (lista de Integer), construir um programa em Java que receba , via teclado do usuário, n nomes de pessoas.
* Assim como o primeiro código:
  * Não poderá haver nomes duplicados
  * Ao final do cadastro, a lista precisará ser ordenada;
  * O código deve permitir que o usuário digite um nome para pesquisa e o programa exclua esse nome da lista
  * Exiba novamente a lista
```java
import java.util.ArrayList;
import java.util.Scanner;

public class ListaNomes{
    public static void main(String[] args) {
        
        Scanner teclado = new Scanner(System.in);
        ArrayList<String> listaNomes = new ArrayList<>();

        int quantidade;
        String nome, excluir;

        System.out.print("Informe a quantidade de nomes que voce deseja na lista: ");
        quantidade = teclado.nextInt();
        teclado.nextLine();

        for(int i=0; i<quantidade; i++) {
            System.out.print("Digite o nome " + (i+1) + ": ");
            nome = teclado.nextLine().toUpperCase();
            if(!listaNomes.contains(nome)){
                listaNomes.add(nome);
            } else {
                System.out.println("Nome ja cadastrado!");
                i--;
            }
        }

        listaNomes.sort(null);
        
        System.out.println("\nLista ordenada:");
        for (String nomes : listaNomes) {
            System.out.println(nomes);
        }

        System.out.print("\nDigite um nome para excluir: ");
        excluir = teclado.nextLine().toUpperCase();

        if (listaNomes.remove(excluir)) {
            System.out.println("\nNome " + excluir + " removido com sucesso\n");
        } else {
            System.out.println("\nNome nao encontrado na lista\n");
        }

        System.out.println("Lista final:");
        for (String nomes : listaNomes) {
            System.out.println(nomes);
        }

        teclado.close();
    }
}
```


## 2) Descobrir a diferença em java de Vector, ArrayList e LinkedList e construir exemplos
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

## 3) Qual a diferença de banco de dados e sistemas gerenciadores de banco de dados (SGBD)
* Banco de Dados
  * É um conjunto de informações organizadas e armazenadas para serem recuperadas e manipuladas
  * Pode ser um arquivo simples ou um sistema mais estruturado

* SGBD (Sistema Gerenciador de Banco de Dados)
  * É um software que gerencia bancos de dados
  * Permite criar, modificar, consultar e garantir a segurança dos dados
  * Exemplos: MySQL, PostgreSQL, Oracle, SQL Server, MongoDB

## 4) O que são SGBD Relacionais e SGBD Não Relacionais?
* SGBD Relacionais (SQL)
  * Usam tabelas (linhas e colunas) para armazenar os dados
  * Seguem o modelo relacional e utilizam chaves primárias e estrangeiras
  * Utilizam SQL (Structured Query Language) para manipulação dos dados
  * São ótimos para relacionamentos bem estruturados
  * Exemplos: MySQL, PostgreSQL, SQL Server, Oracle

* SGBD Não Relacionais (NoSQL)
  * Não usam tabelas e podem armazenar os dados em documentos JSON, chave-valor, colunas ou grafos
  * Mais flexíveis para grandes volumes de dados não estruturados
  * Não seguem o modelo tradicional de SQL
  * São ótimos para big data e aplicações escaláveis
  * Exemplos: MongoDB (documentos), Redis (chave-valor), Cassandra (colunar), Neo4j (grafos)
