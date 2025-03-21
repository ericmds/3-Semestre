✦ Estrutura de dados
  ⮛ Físicas - variáveis e seus tipos
  ⮛ Abstratas - algoritmos de manipulação + coleções
    → Listas
      ↳ Conjunto de dados
    → Pilha
    → Fila
    → Árvore
    → Grafo
    
List, Set, Map

```
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
```
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
