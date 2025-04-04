Avaliação Parcial - Lista

A avaliação tem como objetivo verificar compreensão e domínio sobre a teoria de Estruturas de Dados com foco em Listas.
Realização e entrega

A avaliação deve ser respondida em arquivos .txt (contendo respostas das questões teóricas) e arquivos .java, ou .cs, ou .py (contendo os códigos das questões práticas). Esses arquivos serão entregues ao professor, dentro da pasta de cada aluno, com seu nome completo.
Questões

01) Explique e exemplifique os papéis de Listas, Pilhas, Filas, Árvores e Grafos em Sistemas de Informação.
	Listas: São utilizadas para armazenar e manipular “pacotes” de elementos. Seu uso é indicado quando há necessidade de inserir, pesquisar, atualizar e deletar. Uma aplicação seria guardar dados ordenados, como uma lista de contatos, relatórios.
	Pilhas: Quando pensamos em pilhas, podemos usar o conceito Last In, First Out (LIFO) – O último elemento que entrar é o primeiro a sair. Permite apenas inserção e remoção no topo e possui operações de inserir (add, append ou push) e remover (remove, delete ou pop) e topo (peek). Possui também outros métodos como isEmpty() ou empty(). Algumas aplicações: backups, problemas em jogos de lógicas.
	Filas: Quando pensamos em filas, podemos usar o conceito First In, First Out – Primeiro elemento a entrar é o primeiro elemento a sair. Permite inserções no fim (cauda) e remoções no início (cabeça) e possui operações de inserir (final ou cauda/tail – add) ou remover (início ou na cabeça/head – remove). Possui também outros métodos como isEmpty ou Empty, size ou Count. Aplicação: quando há necessidade de gerenciar prioridades, como filas de impressão.
	Árvores: É uma estrutura hierárquica, que permite um armazenamento para busca eficaz. Possui operações de inserir (add), pesquisar (contains), atualizar (set), deletar (remove). Aplicações: sistemas eletrônicos, técnicas de IA, jogos
	Grafos: Utilizados em roteamento ou percusrso. Utiliza matriz de adjacência e possui operações de inserir (add), pesquisar (contains), atualizar (set), deletar (remove). Aplicações: técnica de IA para escolher o melhor caminho

02) Qual a diferença entre Listas e Dicionários? Quando devemos usar um ou outro?
	Usamos LISTA quando:
• Precisamos manter a ordem dos elementos
• Quando valores duplicados são permitidos
• Quando precisamos percorrer frequentemente a lista
Usamos DICIONÁRIO quando
• Melhor armazenamento de chaves pares
• Precisamos de fazer uma busca rápida
• Precisamos garantir uma chave única

Ao usarmos listas de objetos com controle de duplicidade, precisamos reescrever o métodos equals() da classe que estamos implementando. Imagine uma classe Turma, em que há os atributos nome, cpf, dataNascimento. A partir daí, implemente a classe e reescreva o método equals() que use o atributo cpf com identficador (chave primária) da classe.

```
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Turma {
    String cpf;
    String nome;
    String dataNascimento;

    public Turma(String cpf, String nome, String dataNascimento) {
        this.cpf = cpf;
        this.nome = nome;
        this.dataNascimento = dataNascimento;
    }

    @Override
    public String toString() {
        return "Turma [CPF =" + cpf + ", NOME =" + nome + ", DATA NASCIMENTO =" + dataNascimento + "]";
    }

    @Override
    public boolean equals(Object obj) {
        if (this == obj)
            return true;
        if (obj == null)
            return false;
        if (getClass() != obj.getClass())
            return false;
        Turma other = (Turma) obj;
        if (cpf == null) {
            if (other.cpf != null)
                return false;
        } else if (!cpf.equals(other.cpf))
            return false;
        return true;
    }

    public static void main(String[] args) {
        List<Turma> alunos = new ArrayList<>();
        Scanner teclado = new Scanner(System.in);
        Turma tmp;

        while (true) {
            System.out.print("Digite um nome: ");
            String nome = teclado.nextLine().toUpperCase();
            System.out.print("Digite a data de nascimento (11/07/2000): ");
            String dataNascimento = teclado.nextLine();
            System.out.print("Informe o CPF (123.456.789-00): ");
            String cpf = teclado.nextLine();
            tmp = new Turma(cpf, nome, dataNascimento);
            alunos.add(tmp);

            System.out.print("Continuar? (1 - SIM | 2 - NÃO): ");
            String opcao = teclado.nextLine();
            if (!opcao.equals("1")) {
                break;
            }
        }

        alunos.sort((aluno1,aluno2) -> aluno1.cpf.compareTo(aluno2.cpf));

        System.out.println("\n*** Relação de alunos ***");
        for(Turma aluno : alunos) {
            System.out.println(aluno);
        }

        teclado.close();


    }
}

```

Em sua linguagem de preferência, crie um programa (usando funções/métodos) que:
preencha N nomes de equipes de futebol, obrigatóriamente em maiúsculo. Esses nomes devem ser armazenados em um dicionário que se possa controlar duplicados.
exiba os nomes das equipes cadastradas
exiba a quantidade de equipes cadastradas

```
import java.util.Scanner;
import java.util.Set;
import java.util.TreeSet;

public class CadastroTimes {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        
        System.out.print("Infome quantos times deseja cadastrar: ");
        int n = teclado.nextInt();
        teclado.nextLine();
        
        Set<String> times = new TreeSet<>();
        
        for (int i = 0; i < n; i++) {
            System.out.print("Time " + (i + 1) + ": ");
            String nomeTime = teclado.nextLine().toUpperCase();
            times.add(nomeTime);
        }
        
        teclado.close();
        
        System.out.println("\n*** Times cadastrados ***");
        for (String time : times) {
            System.out.println(time);
        }
        
        System.out.println("\nQuantidade total de times cadastrados: " + times.size());
    }
}
```

Em sua linguagem de preferência, crie um programa que manipule objetos cidades baseados na classe Cidade, contendo, nome da cidade e sigla do estado do Brasil. O controle de duplicidade deve ser via o nome da cidade. O programa deve apresentar um pequeno Menu, em que o usuário possa:
cadastrar uma cidade em lista de cidades: nome completo em maiúsculo e a sigla em maiúsculo
listar as cidades cadastradas tendo como ordem de ordenação os nomes das cidades
pesquisar uma cidade por seu nome e mostrar o seu estado respectivo (no caso, sigla)
remover uma cidade, pesquisando-a por seu nome
finalizar o programa
```
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

class Cidade {
    private String nome;
    private String siglaEstado;

    public Cidade(String nome, String siglaEstado) {
        this.nome = nome.toUpperCase();
        this.siglaEstado = siglaEstado.toUpperCase();
    }

    public String getNome() {
        return nome;
    }

    public String getSiglaEstado() {
        return siglaEstado;
    }
}

public class GerenciadorCidades {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        List<Cidade> cidades = new ArrayList<>();
        
        while (true) {
            System.out.println("*** MENU DE OPÇÕES ***");
            System.out.println("1 - Cadastrar cidade");
            System.out.println("2 - Listar cidades");
            System.out.println("3 - Pesquisar cidade");
            System.out.println("4 - Remover cidade");
            System.out.println("5 - Sair");
            System.out.print("\nEscolha uma opção: ");
            int opcao = teclado.nextInt();
            teclado.nextLine();

            switch (opcao) {
                case 1:
                    System.out.print("Digite o nome da cidade: ");
                    String nome = teclado.nextLine().toUpperCase();
                    
                    boolean existe = false;
                    for (Cidade c : cidades) {
                        if (c.getNome().equals(nome)) {
                            existe = true;
                            break;
                        }
                    }
                    
                    if (existe) {
                        System.out.println("Cidade já cadastrada!");
                    } else {
                        System.out.print("Digite a sigla do estado: ");
                        String sigla = teclado.nextLine().toUpperCase();
                        cidades.add(new Cidade(nome, sigla));
                        System.out.println("Cidade cadastrada com sucesso!");
                    }
                    break;
                
                case 2:
                    cidades.sort((cidade1, cidade2) -> cidade1.getNome().compareTo(cidade2.getNome()));
                    System.out.println("\nCidades cadastradas:");
                    for (Cidade cidade : cidades) {
                        System.out.println(cidade.getNome() + " - " + cidade.getSiglaEstado());
                    }
                    break;
                
                case 3:
                    System.out.print("Digite o nome da cidade a pesquisar: ");
                    String pesquisa = teclado.nextLine().toUpperCase();
                    
                    boolean encontrada = false;
                    for (Cidade c : cidades) {
                        if (c.getNome().equals(pesquisa)) {
                            System.out.println("Estado: " + c.getSiglaEstado());
                            encontrada = true;
                            break;
                        }
                    }
                    
                    if (!encontrada) {
                        System.out.println("Cidade não encontrada.");
                    }
                    break;
                
                case 4:
                    System.out.print("Digite o nome da cidade a remover: ");
                    String remover = teclado.nextLine().toUpperCase();
                    
                    boolean removida = cidades.removeIf(c -> c.getNome().equals(remover));
                    
                    System.out.println(removida ? "Cidade removida com sucesso!" : "Cidade não encontrada.");
                    break;
                
                case 5:
                    System.out.println("Saindo do programa...");
                    return;
                    
                    default:
                    System.out.println("Opção inválida!");
                }
                teclado.close();
        }
    }
}
```
