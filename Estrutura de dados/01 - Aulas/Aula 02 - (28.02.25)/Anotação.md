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

## Código 1 feito em aula
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

## Código 2 feito em aula
```java

import java.util.ArrayList;
import java.util.Iterator;
import java.util.Random;

public class lista{
    public static void main(String[] args) { //atalho: psvm
        //codigo que popula uma lista com n numeros aleatorios inteiros
        ArrayList<Integer> lista = new ArrayList<>();
        
        Random gerador = new Random();
        int tamanho = gerador.nextInt(10,20);
        int numero;
        for (int i=0;i<tamanho;i++){
            numero = gerador.nextInt(1000);
            lista.add(numero);
        }

        //exibir
    
        //System.out.println(lista);
        System.out.println("Exibindo por indices...");
        for(int i =0; i<lista.size();i++){
            System.out.println(lista.get(i));
        }

        System.out.println("Exibindo por objetos...");
        for(Integer i : lista){
            System.out.println(i);
        }

        System.out.println("Lista de inteiros usando Interator:"); //melhor para o caso de precisar alterar algo na lista
        Iterator<Integer> iterator = lista.iterator();
        while (iterator.hasNext()){
            numero=iterator.next();
            System.out.println(numero);
        }


    }
}
```

## Código 3 feito em aula
```java

import java.util.ArrayList;
import java.util.Random;


public class lista{
    public static void main(String[] args) { //atalho: psvm
        //codigo que popula uma lista com n numeros aleatorios inteiros
        ArrayList<Integer> lista = new ArrayList<>();
        
        Random gerador = new Random();
        int tamanho = gerador.nextInt(10,15);
        int numero;

        for (int i=0;i<tamanho;i++){
            numero = gerador.nextInt(50);
            if(!lista.contains(numero)){ // se o numero não tiver adicona
                lista.add(numero);
            }
        }

        //ordenar
        lista.sort(null);
       
        //exbir
        System.out.println("Exibindo por objetos...");
        System.out.println("Total de "+lista.size());
        for(Integer i : lista){
            System.out.println(i);
        }

        //apagar algum numero
        
        //numero = 15;
        /*if(lista.contains(15)){ //da certo mas não é a melhor opção 
            lista.remove(numero);//apaga apenas a primeira ocorrncia
            System.out.println("numero localizado e excluido");
        }else{
            System.out.println("numero não localizado");
        }*/

        if(lista.remove((Integer)15)){ //conversão pois o 15 é int e a lista é integer
            System.out.println("numero localizado e apagado");
        }else{
            System.out.println("numero não localizado");
        }

        //PERCORRER

        //percorre via indice 

       for (int i=0;i<tamanho;i++){
            if(lista.get(i) % 2 != 0){ 
                lista.set(i,-1); //coloca o -1 na posiçao i
            }
       }

        //exbir NOVAMENTE COM -1 NO LUGAR DOS IMPARES
        System.out.println("Exibindo por objetos...");
        System.out.println("Total de "+lista.size());
        for(Integer i : lista){
            System.out.println(i);
        }




    }
}
```

## Código Separado 1: Utilizando índices (for tradicional)
```java
import java.util.ArrayList; // Importa a classe ArrayList para criar listas dinâmicas
import java.util.Random;    // Importa a classe Random para gerar números aleatórios

public class ListaIndices { // Declara a classe principal chamada ListaIndices
    public static void main(String[] args) { // Método principal onde a execução começa
        
        ArrayList<Integer> lista = new ArrayList<>(); // Cria uma lista para armazenar números inteiros
        
        Random gerador = new Random(); // Cria um objeto para gerar números aleatórios
        int tamanho = gerador.nextInt(10, 15); // Gera um tamanho aleatório entre 10 e 14
        int numero; // Declara a variável que armazenará os números aleatórios

        // Preenchendo a lista com números aleatórios sem repetições
        for (int i = 0; i < tamanho; i++) { 
            numero = gerador.nextInt(50); // Gera um número aleatório entre 0 e 49
            if (!lista.contains(numero)) { // Verifica se o número já está na lista
                lista.add(numero); // Adiciona o número à lista se não for repetido
            }
        }

        lista.sort(null); // Ordena a lista em ordem crescente

        // Exibir os números da lista utilizando índices
        System.out.println("Exibindo por índices:");
        for (int i = 0; i < lista.size(); i++) { // Percorre a lista do primeiro ao último índice
            System.out.println(lista.get(i)); // Imprime o número da posição i
        }

        // Substituir números ímpares por -1 usando índices
        for (int i = 0; i < lista.size(); i++) { // Percorre a lista novamente
            if (lista.get(i) % 2 != 0) { // Verifica se o número na posição i é ímpar
                lista.set(i, -1); // Substitui o número ímpar por -1
            }
        }

        // Exibir a lista após a substituição dos números ímpares
        System.out.println("Lista após substituição dos ímpares:");
        for (int i = 0; i < lista.size(); i++) { // Percorre a lista
            System.out.println(lista.get(i)); // Imprime o valor atualizado
        }
    }
}

```

## Código Separado 2: Utilizando Objetos (for-each e .remove())
```java
import java.util.ArrayList; // Importa a classe ArrayList para criar listas dinâmicas
import java.util.Random;    // Importa a classe Random para gerar números aleatórios

public class ListaObjetos { // Declara a classe principal chamada ListaObjetos
    public static void main(String[] args) { // Método principal onde a execução começa
        
        ArrayList<Integer> lista = new ArrayList<>(); // Cria uma lista para armazenar números inteiros
        
        Random gerador = new Random(); // Cria um objeto para gerar números aleatórios
        int tamanho = gerador.nextInt(10, 15); // Gera um tamanho aleatório entre 10 e 14
        int numero; // Declara a variável que armazenará os números aleatórios

        // Preenchendo a lista com números aleatórios sem repetições
        for (int i = 0; i < tamanho; i++) { 
            numero = gerador.nextInt(50); // Gera um número aleatório entre 0 e 49
            if (!lista.contains(numero)) { // Verifica se o número já está na lista
                lista.add(numero); // Adiciona o número à lista se não for repetido
            }
        }

        lista.sort(null); // Ordena a lista em ordem crescente

        // Exibir os números da lista utilizando `for-each`
        System.out.println("Exibindo por objetos:");
        for (Integer num : lista) { // Percorre cada elemento da lista diretamente
            System.out.println(num); // Imprime o número
        }

        // Remover um número específico (15, se existir)
        if (lista.remove((Integer) 15)) { // Converte 15 para Integer e tenta remover da lista
            System.out.println("Número 15 localizado e removido.");
        } else {
            System.out.println("Número 15 não encontrado.");
        }

        // Exibir a lista após remoção
        System.out.println("Lista após remoção do número 15:");
        for (Integer num : lista) { // Percorre a lista novamente
            System.out.println(num); // Imprime cada número atualizado
        }
    }
}

```

## Código Separado 3: Utilizando Iterator para Modificação
```java
import java.util.ArrayList; // Importa a classe ArrayList para armazenar números dinamicamente
import java.util.Iterator;  // Importa a classe Iterator para percorrer a lista
import java.util.Random;    // Importa a classe Random para gerar números aleatórios

public class ListaInteger { // Declara a classe principal chamada ListaInteger
    public static void main(String[] args) { // Método principal onde a execução começa
        
        ArrayList<Integer> lista = new ArrayList<>(); // Cria uma lista para armazenar números inteiros
        Random gerador = new Random(); // Cria um objeto para gerar números aleatórios
        int tamanho = gerador.nextInt(10, 15); // Gera um tamanho aleatório entre 10 e 14
        int numero; // Declara a variável que armazenará os números aleatórios

        // Preenchendo a lista com números aleatórios sem repetições
        for (int i = 0; i < tamanho; i++) { 
            numero = gerador.nextInt(50); // Gera um número aleatório entre 0 e 49
            if (!lista.contains(numero)) { // Verifica se o número já está na lista
                lista.add(numero); // Adiciona o número à lista se não for repetido
            }
        }

        lista.sort(null); // Ordena a lista em ordem crescente

        // Exibir os números da lista utilizando `for-each`
        System.out.println("Exibindo por objetos:");
        for (Integer num : lista) { // Percorre cada elemento da lista diretamente
            System.out.println(num); // Imprime o número
        }

        // Remover um número específico (15, se existir)
        if (lista.remove((Integer) 15)) { // Converte 15 para Integer e tenta remover da lista
            System.out.println("Número 15 localizado e removido.");
        } else {
            System.out.println("Número 15 não encontrado.");
        }

        // Modificar os números ímpares da lista utilizando um `Iterator`
        Iterator<Integer> iterator = lista.iterator(); // Cria um iterador para percorrer a lista
        while (iterator.hasNext()) { // Enquanto houver elementos na lista
            Integer num = iterator.next(); // Obtém o próximo elemento da lista
            if (num % 2 != 0) { // Verifica se o número é ímpar
                lista.set(lista.indexOf(num), -1); // Substitui o número ímpar por -1
            }
        }

        // Exibir lista após modificação
        System.out.println("Lista após substituição de ímpares por -1:");
        for (Integer num : lista) { // Percorre a lista novamente
            System.out.println(num); // Imprime cada número atualizado
        }
    }
}

```
