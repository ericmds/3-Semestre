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
* remove( ) → Apaga somente a primeira ocorrência do elemento na estrutura.
* removeAll( ) → Remove todas as ocorrências do elemento.

## 6. Copilot e GitHub Education
### 6.1 Configuração do Copilot
Para ativar o Copilot na conta do GitHub Education:
 1) Usar o e-mail acadêmico (UFN).
 2) No GitHub Education, cadastrar-se com usuário e senha.
 3) Vincular o GitHub Copilot à conta.

## Código feito em aula
```java
import java.util.ArrayList;
import java.util.Iterator;
import java.util.Random;

public class Lista{
    public static void main(String[] args) {
       
        // Código que popula uma lista com n números aleatórios inteiros
        ArrayList<Integer> lista = new ArrayList<>();

        Random gerador = new Random();
        int tamanho = gerador.nextInt(10, 15);
        int numero;

        // Metodo inserir
        for (int i=0; i<tamanho; i++){
            numero = gerador.nextInt(50); // Gerando números de 0 até 999
            if(!lista.contains(numero)){ // Controlar duplicados
                lista.add(numero);
            }
        }

        //  Ordenar
        lista.sort(null);

        // Metodo exibir
    
        // Exibindo por índices
        /*System.out.println("Exibindo por índices");;
        for(int i=0; i < lista.size(); i++){
            System.out.println(lista.get(i));
        }*/

        // Exibindo por objetos
        System.out.println("Exibindo por objetos");
        System.out.println("Total de "+lista.size()); // Mostrar total
        for(Integer i: lista){
            System.out.println(i);
        }
        
        // Apagar um número
        numero = 15;
        if (lista.remove((Integer)15)){
            System.out.println("Número localizado e excluido");
        } else{
            System.out.println("Numero nao localizado");
        }

        /*System.out.println("Lista de inteiros usando Iterator");
        Iterator<Integer> iterator = lista.iterator();
        while (iterator.hasNext()){
            numero = iterator.next();
            System.out.println(numero);
        }*/

        // PERCORRER VIA INDICE
        for (int i = 0; i < lista.size(); i++) {
            if (lista.get(i) % 2 != 0) {
                lista.set(i,-1);
            }
        }
        System.out.println("Exibindo por objetos");
        System.out.println("Total de "+lista.size()); // Mostrar total
        for(Integer i: lista){
            System.out.println(i);
        }
        
        // PERCORRER VIA OBJETO
        //for (Integer i: lista){
        //   if (i % 2 != 0){
        //        i = -1;
        //    }
        //}
    }
}
```

## Código Separado 1: Utilizando objetos
```java
import java.util.ArrayList;
import java.util.Random;

public class ListaObjeto {
    public static void main(String[] args) {

        // Criando uma lista dinâmica para armazenar números inteiros
        ArrayList<Integer> lista = new ArrayList<>();
        Random gerador = new Random();

        // Definindo um tamanho aleatório entre 10 e 15 para a lista
        int tamanho = gerador.nextInt(10, 15);

        // Populando a lista sem elementos duplicados
        while (lista.size() < tamanho) { // Usa while para garantir o tamanho correto
            int numero = gerador.nextInt(50); // Gera número entre 0 e 49
            if (!lista.contains(numero)) { // Evita duplicados
                lista.add(numero);
            }
        }

        // Ordenando a lista
        lista.sort(null);

        // Exibindo os números usando for-each (por objetos)
        System.out.println("Exibindo por objetos:");
        System.out.println("Total de " + lista.size());
        for (Integer i : lista) {
            System.out.println(i);
        }

        // Removendo um número da lista
        if (lista.remove((Integer) 15)) {
            System.out.println("Número localizado e excluído");
        } else {
            System.out.println("Número não localizado");
        }

        // Criando uma nova lista para substituir números ímpares por -1
        ArrayList<Integer> listaAtualizada = new ArrayList<>();
        for (Integer i : lista) {
            if (i % 2 != 0) {
                listaAtualizada.add(-1); // Substitui os ímpares por -1
            } else {
                listaAtualizada.add(i);
            }
        }

        // Atualizando a lista original
        lista = listaAtualizada;

        // Exibindo a lista após a substituição
        System.out.println("Exibindo por objetos após modificação:");
        System.out.println("Total de " + lista.size());
        for (Integer i : lista) {
            System.out.println(i);
        }
    }
}
```

## Código Separado 2: Utilizando Iterators
```java
import java.util.ArrayList;
import java.util.Iterator;
import java.util.Random;

public class ListaIterator {
    public static void main(String[] args) {

        // Criando uma lista dinâmica para armazenar números inteiros
        ArrayList<Integer> lista = new ArrayList<>();
        Random gerador = new Random();
        
        // Definindo um tamanho aleatório entre 10 e 15 para a lista
        int tamanho = gerador.nextInt(10, 15);

        // Populando a lista sem duplicatas
        while (lista.size() < tamanho) {
            int numero = gerador.nextInt(50);
            if (!lista.contains(numero)) {
                lista.add(numero);
            }
        }

        // Ordenando a lista
        lista.sort(null);

        // Exibindo os números usando Iterator
        System.out.println("Exibindo por Iterator:");
        System.out.println("Total de " + lista.size());
        Iterator<Integer> iterator = lista.iterator();
        while (iterator.hasNext()) {
            System.out.println(iterator.next());
        }

        // Removendo um número específico da lista
        iterator = lista.iterator(); // Criando um novo iterator para remoção
        while (iterator.hasNext()) {
            if (iterator.next().equals(15)) { // Verifica se o número é 15
                iterator.remove(); // Remove o número da lista
                System.out.println("Número localizado e excluído");
                break;
            }
        }

        // Substituindo números ímpares por -1 usando Iterator
        iterator = lista.iterator(); // Criando um novo iterator para modificação
        ArrayList<Integer> novaLista = new ArrayList<>();
        while (iterator.hasNext()) {
            int num = iterator.next();
            if (num % 2 != 0) {
                novaLista.add(-1);
            } else {
                novaLista.add(num);
            }
        }
        
        // Atualizando a lista original
        lista = novaLista;

        // Exibindo a lista após substituição
        System.out.println("Exibindo por Iterator após modificação:");
        System.out.println("Total de " + lista.size());
        iterator = lista.iterator();
        while (iterator.hasNext()) {
            System.out.println(iterator.next());
        }
    }
}
```

## Código Separado 3: Utilizando índices (for tradicional)
```java
import java.util.ArrayList;
import java.util.Random;

public class ListaIndice {
    public static void main(String[] args) {

        // Criando uma lista dinâmica para armazenar números inteiros
        ArrayList<Integer> lista = new ArrayList<>();
        Random gerador = new Random();
        
        // Definindo um tamanho aleatório entre 10 e 15 para a lista
        int tamanho = gerador.nextInt(10, 15);

        // Populando a lista sem duplicatas
        while (lista.size() < tamanho) {
            int numero = gerador.nextInt(50);
            if (!lista.contains(numero)) {
                lista.add(numero);
            }
        }

        // Ordenando a lista
        lista.sort(null);

        // Exibindo os números usando índice
        System.out.println("Exibindo por índice:");
        System.out.println("Total de " + lista.size());
        for (int i = 0; i < lista.size(); i++) {
            System.out.println(lista.get(i));
        }

        // Removendo um número específico da lista
        for (int i = 0; i < lista.size(); i++) {
            if (lista.get(i) == 15) { // Verifica se o número é 15
                lista.remove(i); // Remove o número
                System.out.println("Número localizado e excluído");
                break; // Evita erro ao modificar a lista durante a iteração
            }
        }

        // Substituindo números ímpares por -1 usando índice
        for (int i = 0; i < lista.size(); i++) {
            if (lista.get(i) % 2 != 0) {
                lista.set(i, -1); // Modifica diretamente na posição correta
            }
        }

        // Exibindo a lista após substituição
        System.out.println("Exibindo por índice após modificação:");
        System.out.println("Total de " + lista.size());
        for (int i = 0; i < lista.size(); i++) {
            System.out.println(lista.get(i));
        }
    }
}
```
