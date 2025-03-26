# Listas: dicionário ou objeto
  Fazer um programa em Java, C# ou C++ que receba nomes completos de pessoas (validar se nome foi digitado completo). A partir disso, gerar email da pessoa combinando o primeiro nome com o último nome, separados por '.', mais '@ufn.edu.br'. Por exemplo, João Pedro Garcia -> joao.garcia@ufn.edu.br. Uma vez que o email foi gerado, adicionar o par (nome completo e email) em uma lista. Essa lista pode ser composta por dicionários (email será a chave e nome completo o valor) ou por objetos (da classe Pessoa, com atributos nome e email). Contudo, não pode haver emails repetidos. Ao final, exibir a lista com os dados (nomes e emails).
  * Data de entrega: 25/03/2025
  * Forma de entrega: o programa deve ser disponibilizado no GitHub pessoal do aluno e o link enviado para alexz@ufn.edu.br
---
## Linguagem escolhida: **JAVA**
```java
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

class Usuario {
    String nome;
    String email;

    public Usuario(String nome, String email) {
        this.nome = nome;
        this.email = email;
    }
}

class GerenciadorEmail {
    List<String> emailsCadastrados;

    public GerenciadorEmail() {
        emailsCadastrados = new ArrayList<>();
    }

    public String gerarEmailUnico(String emailBase) {
        String emailFinal = emailBase;
        int contador = 1;

        while (emailsCadastrados.contains(emailFinal)) {
            emailFinal = emailBase.split("@")[0] + contador + "@ufn.edu.br";
            contador++;
        }
        
        emailsCadastrados.add(emailFinal);
        return emailFinal;
    }
}

public class AtividadeAvaliativa {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        List<Usuario> listaUsuarios = new ArrayList<>();
        GerenciadorEmail gerenciador = new GerenciadorEmail();
        
        int opcao = 0;
        String nomeCompleto, emailBase, emailFinal;

        do {
            System.out.print("Digite o nome completo: ");
            nomeCompleto = teclado.nextLine().toLowerCase();
            String[] partesNome = nomeCompleto.split(" ");
            
            if (partesNome.length < 2) {
                System.out.println("\n*** ERRO: Digite o nome completo! ***\n");
                continue;
            }
            
            emailBase = partesNome[0] + "." + partesNome[partesNome.length - 1] + "@ufn.edu.br";
            emailFinal = gerenciador.gerarEmailUnico(emailBase);
            listaUsuarios.add(new Usuario(nomeCompleto, emailFinal));
            
            System.out.println("\n1 - Continuar | 2 - Encerrar");
            System.out.print("Escolha uma opcao: ");
            opcao = teclado.nextInt();
            teclado.nextLine();
            System.out.println();
        } while (opcao == 1);
        
        System.out.println("\nUsuarios cadastrados:");
        for (Usuario u : listaUsuarios) {
            System.out.println("Nome: " + u.nome + " | E-mail: " + u.email);
        }
        
        teclado.close();
    }
}
```
