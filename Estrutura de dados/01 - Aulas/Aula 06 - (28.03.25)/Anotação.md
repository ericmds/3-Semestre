# Revisão
* Listas
  * Dicionário: par de atributos: 1º é a chave primária, 2º é o valor
  * Listas de: tipos primitivos; listas; dicionários; objetos
* Pilhas
* Filas
* Arvores
* Grafos

# Lista com Controle de Duplicidade - EQUALS e CONTAINS

## JAVA
### Classe Aluno
``` java
package Java;
public class Aluno {
    public int matricula;
    public String nome;
    public String email;
    
    public Aluno(int matricula, String nome) {
        this.matricula = matricula;
        this.nome = nome;
        this.email = this.gerarEmail();
    }

    public String gerarEmail(){
        String vetorNomes[];
        vetorNomes = this.nome.toLowerCase().split(" ");
        return vetorNomes[0] + "." + vetorNomes[vetorNomes.length - 1] + "@ufn.edu.com";
    }

    @Override
    public String toString() {
        return "Aluno [Nome = " + nome + ", email = " + email + "]";
    }

    @Override
    public boolean equals(Object obj) {
        Aluno aluno = (Aluno) obj;
        if (this.email.equals(aluno.email))
            return false;
        return false;
    }
}
```

### Classe princiapal
``` java
package Java;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Principal {
    public static void main(String[] args) {
        List<Aluno> alunos = new ArrayList<>();
        Aluno tmp;
        String nome;
        int matricula = 1;
        String opcao;
        Scanner teclado = new Scanner(System.in);

        while (true) {
            System.out.print("Digite o nome: ");
            nome = teclado.nextLine().toUpperCase();
            tmp = new Aluno(matricula, nome);
            if (alunos.contains(tmp)) {
                System.out.println("Aluno com este email já cadastrado!");
                System.gc();
            } else {
                System.out.println("Aluno cadastrado com a matrícula de numero" + matricula);
                System.out.println("E com o email " + tmp.email);
                alunos.add(tmp);
                matricula++;
            }
            System.out.println("Continua? [1 - Sim | 2 - Não]" );
            opcao = teclado.nextLine();
            if (!opcao.equals("1")){
                break;
            }
        }

        alunos.sort((aluno1, aluno2) -> aluno1.nome.compareTo(aluno2.nome));

        System.out.println("Relacao alunos");
        for (Aluno aluno : alunos) {
            System.out.println(aluno);
        }

        teclado.close();
    }
}
```
## Python
### Classe Aluno
``` py
class Aluno:
    # Construtor
    def __init__(self, matricula, nome): # Self = método da classe aluno
        self.matricula = matricula
        self.nome = nome
        self.email = self.gerar_email()

    def gerar_email(self):
        vetor_nomes = self.nome.lower().split(" ")
        return vetor_nomes[0] + "." + vetor_nomes[-1] + "@ufn.edu.br"

    def __str__(self): # toString -> mostrar objto
        return "Aluno [Nome = " + self.nome + "] | Email = " + self.email + "]"
    
    def __eq__(self, obj): ## Reescreve o equals para definir uma chave primária e controlar duplicidade
        # Verificando se obj é uma instancia da classe Aluno
        if not isinstance(obj, Aluno):
            return False
        # Comparando o email dos dois objetos
        return self.email == obj.email
```

### Classe Princiapl
``` py
from aluno import Aluno

class Principal:
    alunos = [] # ou alunos = list(Aluno)
    matricula = 1
    while (True):
        nome = input("Digite um nome: ").upper()
        tmp = Aluno(matricula, nome)

        if (tmp in alunos):
            print("Aluno com este email já cadastrado!")
        else:
            print("Aluno cadastrado com a matrícula de numero", matricula)
            print("E com o email ", tmp.email)
            alunos.append(tmp)
            matricula+=1

        opcao = input("Continua? [1 - Sim | 2 - Não]" )
        if (opcao != "1"):
            break

    alunos.sort(key = lambda aluno: aluno.nome) # Para ordernar de forma decrescente acrescena o reserver -> alunos.sort(key=lambda aluno: aluno.nome)

    print("Relacao alunos")
    for aluno in alunos: # for -> por objeto
        print(aluno)
```
