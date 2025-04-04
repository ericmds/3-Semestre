# ESTRUTURA DE DADOS

## FÍSICAS
* Variáveis e seus tipos

## ABSTRATAS
* Algoritmos de manipulação + coleções
* Listas
  * Conjunto de dados
* Pilha
* Pila
* Árvore
* Grafo

* List, Set, Map

```java
  List<Integer> lista = new ArrayList<>()
  HashMap<String,String> dicionario = new HashMap<>(); → Dicionário

class Aluno {
  private int matricula;
  private String nome;

  public Aluno() {   → CONSTRUTOR

  }

  public Aluno(String nome) {   → CONSTRUTOR
    this.matricula = this.gerarMatricula();
    this.nome = nome;
  }
}

Aluno umAluno = new Aluno("Ceretta");
```

```java
import java.util.ArrayList;
import java.util.Scanner;
import java.util.List;

class Aluno{
    int matricula;
    String nome;
    
    public Aluno(int matricula, String nome){
        this.matricula = matricula;
        this.nome = nome;
    }

    @Override // Botão direito do mouse, Source Action
    public String toString() {
        return "Aluno [matricula=" + matricula + ", nome=" + nome + "]";
    }

}

public class ListaObjeto {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        List<Aluno> alunos = new ArrayList<>();
        int matricula;
        String nome;
        Aluno tmp;
        for (int i = 0; i < 3; i++){
            System.out.print("Matricula: ");
            matricula = teclado.nextInt();
            teclado.nextLine();

            System.out.print("Nome: ");
            nome = teclado.nextLine();
            tmp = new Aluno(matricula, nome);
            alunos.add(tmp);

            /*if (alunos.contais(tmp)) {                    - NÃO VAI FUNCIONAR, PESQUISAR
                System.out.println("Aluno já cadastrado!"); - NÃO VAI FUNCIONAR, PESQUISAR
            } else {                                        - NÃO VAI FUNCIONAR, PESQUISAR
                alunos.add(tmp);                            - NÃO VAI FUNCIONAR, PESQUISAR
            }*/
            
        }
        //alunos.sort();                                    - NÃO VAI FUNCIONAR, PESQUISAR
        
        for (Aluno aluno : alunos){
            System.out.println(aluno); // Com o toString
            System.out.println("Matricula: "+aluno.matricula+ " Aluno: "+ aluno.nome); // Metodo normal com for
        }
    }
}
```

## Exemplo 01
```java
import java.util.ArrayList;
import java.util.Scanner;
import java.util.List;

class Aluno {
    int matricula;
    String nome;

    public Aluno(int matricula, String nome) {
        this.matricula = matricula;
        this.nome = nome;
    }

    @Override // Botão direito do mouse, Source Action
    public String toString() {
        return "Aluno [matricula=" + matricula + ", nome=" + nome + "]";
    }

}

public class ListaObjeto {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        List<Aluno> alunos = new ArrayList<>();
        int matricula;
        String nome;
        Aluno tmp;
        for (int i = 0; i < 3; i++) {
            System.out.print("Matricula: ");
            matricula = teclado.nextInt();
            teclado.nextLine();

            System.out.print("Nome: ");
            nome = teclado.nextLine();
            tmp = new Aluno(matricula, nome);
            alunos.add(tmp);

            /*
             * if (alunos.contais(tmp)) { - NÃO VAI FUNCIONAR, PESQUISAR
             * System.out.println("Aluno já cadastrado!"); - NÃO VAI FUNCIONAR, PESQUISAR
             * } else { - NÃO VAI FUNCIONAR, PESQUISAR
             * alunos.add(tmp); - NÃO VAI FUNCIONAR, PESQUISAR
             * }
             */

        }
        // alunos.sort(); - NÃO VAI FUNCIONAR, PESQUISAR

        for (Aluno aluno : alunos) {
            System.out.println(aluno); // Com o toString
            System.out.println("Matricula: " + aluno.matricula + " Aluno: " + aluno.nome); // Metodo normal com for
        }
    }
}
```

## Exemplo 2
```java
import java.util.Scanner;

public class Nomes {
    public static void main(String[] args) {
        String nomeCompleto;
        Scanner teclado = new Scanner(System.in);
        String vetorNome[];

        do {
            System.out.print("Nome completo: ");
            nomeCompleto = teclado.nextLine();
            nomeCompleto = nomeCompleto.toUpperCase();
            vetorNome = nomeCompleto.split(" ");
        } while (vetorNome.length < 2);

        String email = vetorNome[0] + "." + vetorNome[vetorNome.length - 1] + "@ufn.edu.br";
        email = email.toLowerCase();
        System.out.println(email);

        System.out.println(vetorNome[vetorNome.length - 1]);
        // for (i=0; i<vetorNome.length; i++){
        // System.out.println(vetorNome[i]);
        // }

        // System.out.println(nomeCompleto);

        teclado.close();
    }
}
```
