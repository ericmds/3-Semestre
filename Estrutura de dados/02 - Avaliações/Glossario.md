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
* Listas: São estruturas de dados lineares utilizadas para armazenar e manipular coleções de elementos. Seu uso é indicado quando há necessidade de inserção, remoção e acesso sequencial de elementos. Exemplos incluem listas de contatos e histórico de navegação.
* Pilhas (Stacks): São estruturas de dados do tipo LIFO (Last In, First Out). Utilizadas quando é necessário um controle de acesso baseado no princípio de último a entrar, primeiro a sair, como no controle de chamadas de funções em linguagens de programação (stack de execução).
* Filas (Queues): Funcionam no modelo FIFO (First In, First Out). São amplamente empregadas em sistemas de processamento de tarefas, como filas de impressão e gerenciamento de requisições HTTP em servidores.
* Árvores: Estruturas hierárquicas úteis para representar relações e permitir busca eficiente. Exemplo: árvore de diretórios em um sistema operacional.
* Grafos: Modelam relacionamentos complexos, como redes de transporte, redes sociais e circuitos eletrônicos. São compostos por vértices (nós) e arestas (ligações).

## 2) Qual a diferença de List, ArrayList e LinkedList nas linguagens Java e C#?
* List (Interface em Java e Classe em C#):
* Em Java, List é uma interface que define o comportamento de coleções ordenadas, sendo implementada por classes como ArrayList e LinkedList.
* Em C#, List<T> é uma classe genérica da biblioteca System.Collections.Generic, baseada em arrays dinâmicos.

### ArrayList:
* Em Java, é uma implementação baseada em arrays dinâmicos. Apresenta desempenho eficiente para acessos diretos (O(1)) e ineficiente para inserções/remoções no meio da lista (O(n)).
* Em C#, List<T> funciona de maneira similar ao ArrayList de Java.

### LinkedList:
* Em Java, é uma implementação de lista duplamente encadeada, proporcionando eficiência em inserções e remoções (O(1) quando se tem referência ao nó).
* Em C#, LinkedList<T> também é uma lista duplamente encadeada, ideal para operações frequentes de inserção e remoção.

## 3) As Listas são estruturas lineares que podem armazenar dados primitivos (int, double, String, etc), outras listas, dicionários e objetos. Escreva e justifique qual é a melhor utilização de listas. Ou com dados primitivos, ou com outras listas, ou dicionários, ou com objetos.
A melhor utilização depende do contexto:
* Dados primitivos: São eficientes em consumo de memória e velocidade de acesso, sendo ideais quando não há necessidade de encapsulamento.
* Outras listas: Utilizadas para modelagem de matrizes ou estruturas aninhadas.
* Dicionários: Melhor para armazenar pares chave-valor.
* Objetos: Mais flexível e recomendado para modelar entidades do sistema.

Justificativa: O uso de listas de objetos é a melhor escolha porque permite maior organização, encapsulamento e reutilização de código.

## 4) Na construção de sistemas com uso de Listas de objetos, qual o artifício de programação que deve ser implementado para que a lista tenha controle de duplicados na estrutura?
A duplicidade pode ser controlada de três formas:
* Usando Set (como HashSet) em vez de List.
* Verificando a existência do objeto antes da inserção na lista.

## 5) Em sua linguagem de preferência, crie um programa (usando funções/métodos) que:
* preencha N nomes de equipes de futebol, obrigatóriamente em maiúsculo. Esses nomes devem ser armazenados em uma estrutura adequada que se possa controlar duplicados e receber ordenação.
* exiba os nomes das equipes cadastradas (de forma ordenada)
* exiba a quantidade de equipes cadastradas
```java
import java.util.Scanner;
import java.util.Set;
import java.util.TreeSet;

public class CadastroTimes {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in); // Cria um scanner para entrada do usuário
        
        System.out.print("Quantos times deseja cadastrar? ");
        int n = scanner.nextInt(); // Lê o número de times a serem cadastrados
        scanner.nextLine(); // Consumir a quebra de linha deixada pelo nextInt()
        
        Set<String> times = new TreeSet<>(); // Usamos TreeSet para evitar duplicatas e manter ordenação
        
        for (int i = 0; i < n; i++) { // Loop para coletar os nomes dos times
            System.out.print("Digite o nome do time " + (i + 1) + ": ");
            String nomeTime = scanner.nextLine().toUpperCase(); // Lê o nome e converte para maiúsculas
            times.add(nomeTime); // Adiciona ao TreeSet
        }
        
        scanner.close(); // Fecha o scanner para evitar vazamento de recursos
        
        System.out.println("\nTimes cadastrados (ordenados e sem duplicatas):");
        for (String time : times) { // Percorre e imprime os times ordenados
            System.out.println(time);
        }
        
        System.out.println("\nQuantidade total de times cadastrados: " + times.size()); // Exibe a quantidade de times
    }
}
```
Ou
```java
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class CadastroTimes {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Quantos times deseja cadastrar? ");
        int n = scanner.nextInt();
        scanner.nextLine(); // Consumir a quebra de linha
        
        List<String> times = new ArrayList<>(); // Usando List ao invés de Set
        
        for (int i = 0; i < n; i++) {
            System.out.print("Digite o nome do time " + (i + 1) + ": ");
            String nomeTime = scanner.nextLine().toUpperCase();
            
            if (!times.contains(nomeTime)) { // Verifica se já existe na lista
                times.add(nomeTime);
            }
        }
        
        scanner.close();
        
        Collections.sort(times); // Ordena a lista manualmente
        
        System.out.println("\nTimes cadastrados (ordenados e sem duplicatas):");
        for (String time : times) {
            System.out.println(time);
        }
        
        System.out.println("\nQuantidade total de times cadastrados: " + times.size());
    }
}
```
## 6) Em sua linguagem de preferência, crie um programa que manipule objetos cidades baseados na classe Cidade, contendo, nome da cidade e sigla do estado do Brasil. O controle de duplicidade deve ser via o nome da cidade. O programa deve apresentar um pequeno Menu, em que o usuário possa:
* cadastrar uma cidade em lista de cidades: nome completo em maiúsculo e a sigla em maiúsculo
* listar as cidades cadastradas tendo como ordem de ordenação os nomes das cidades
* pesquisar uma cidade por seu nome e mostrar o seu estado respectivo (no caso, sigla)
* remover uma cidade, pesquisando-a por seu nome
* finalizar o programa
```java
import java.util.*; // Importa a biblioteca para usar listas e scanner

// Classe que representa uma cidade
class Cidade {
    private String nome; // Armazena o nome da cidade
    private String siglaEstado; // Armazena a sigla do estado

    // Construtor que recebe nome e estado e os armazena em maiúsculas
    public Cidade(String nome, String siglaEstado) {
        this.nome = nome.toUpperCase(); // Converte o nome para maiúsculas
        this.siglaEstado = siglaEstado.toUpperCase(); // Converte a sigla para maiúsculas
    }

    public String getNome() {
        return nome; // Retorna o nome da cidade
    }

    public String getSiglaEstado() {
        return siglaEstado; // Retorna a sigla do estado
    }
}

// Classe principal do programa
public class GerenciadorCidades {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in); // Scanner para entrada de dados
        List<Cidade> cidades = new ArrayList<>(); // Lista para armazenar as cidades
        
        while (true) { // Loop infinito para manter o programa rodando até escolher sair
            System.out.println("\nMenu:");
            System.out.println("1 - Cadastrar cidade");
            System.out.println("2 - Listar cidades");
            System.out.println("3 - Pesquisar cidade");
            System.out.println("4 - Remover cidade");
            System.out.println("5 - Sair");
            System.out.print("Escolha uma opção: ");
            int opcao = scanner.nextInt();
            scanner.nextLine(); // Consumir quebra de linha

            switch (opcao) {
                case 1: // Cadastro de cidade
                    System.out.print("Digite o nome da cidade: ");
                    String nome = scanner.nextLine().toUpperCase(); // Lê o nome e converte para maiúsculas
                    
                    boolean existe = false; // Variável para verificar se a cidade já existe
                    for (Cidade c : cidades) {
                        if (c.getNome().equals(nome)) {
                            existe = true; // Cidade encontrada na lista
                            break;
                        }
                    }
                    
                    if (existe) {
                        System.out.println("Cidade já cadastrada!");
                    } else {
                        System.out.print("Digite a sigla do estado: ");
                        String sigla = scanner.nextLine().toUpperCase(); // Lê a sigla e converte para maiúsculas
                        cidades.add(new Cidade(nome, sigla)); // Adiciona a cidade à lista
                        System.out.println("Cidade cadastrada com sucesso!");
                    }
                    break;
                
                case 2: // Listar todas as cidades cadastradas em ordem crescente
                    cidades.sort((cidade1, cidade2) -> cidade1.getNome().compareTo(cidade2.getNome())); // Ordena a lista pelo nome da cidade
                    System.out.println("\nCidades cadastradas:");
                    for (Cidade cidade : cidades) {
                        System.out.println(cidade.getNome() + " - " + cidade.getSiglaEstado()); // Exibe nome e estado
                    }
                    break;
                
                case 3: // Pesquisar cidade pelo nome
                    System.out.print("Digite o nome da cidade a pesquisar: ");
                    String pesquisa = scanner.nextLine().toUpperCase(); // Lê a cidade e converte para maiúsculas
                    
                    boolean encontrada = false; // Variável para verificar se a cidade foi encontrada
                    for (Cidade c : cidades) {
                        if (c.getNome().equals(pesquisa)) {
                            System.out.println("Estado: " + c.getSiglaEstado()); // Exibe a sigla do estado
                            encontrada = true;
                            break;
                        }
                    }
                    
                    if (!encontrada) {
                        System.out.println("Cidade não encontrada.");
                    }
                    break;
                
                case 4: // Remover cidade pelo nome
                    System.out.print("Digite o nome da cidade a remover: ");
                    String remover = scanner.nextLine().toUpperCase(); // Lê a cidade e converte para maiúsculas
                    
                    boolean removida = cidades.removeIf(c -> c.getNome().equals(remover)); // Remove a cidade da lista
                    
                    System.out.println(removida ? "Cidade removida com sucesso!" : "Cidade não encontrada."); // Exibe mensagem
                    break;
                
                case 5: // Encerrar o programa
                    System.out.println("Saindo do programa...");
                    scanner.close(); // Fecha o scanner
                    return;
                
                default: // Caso o usuário escolha uma opção inválida
                    System.out.println("Opção inválida!");
            }
        }
    }
}

```
