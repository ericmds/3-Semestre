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

'''
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
'''
