# CORREÇÃO DA AVALIAÇÃO
## 1) Explique e exemplifique os papéis de Listas, Pilhas, Filas, Árvores e Grafos em Sistemas de Informação.
* Lista
  * Conjunto de dados que podem ser ordenados e tem controle de duplicidade (equals)
  * Exemplo: Lista de livros emprestados 
* Pilhas
  * Herda listas, **mais regras de remoção e adição** - <ins>SEMPRE NO TOPO</ins>
  * Exemplo: Sistema de e-mail
* Filas
  * Herda de listas, com regra de remoção e einserção - O ÚLTIMO QUE ENTRA É O ÚLTIMO QUE SAI
  * Exemplo: Fila de banco com prioridade 
* Árvores
  * Não linear, com poder de armazenar e buscar dados mais rápido do que uma lista, pois trabalha com poda
  * Exemplo: Roteamento de pacotes na internet 
* Grafos
  * 
  *

## 2) Qual a diferença entre Listas e Dicionários? Quando devemos usar um ou outro?

## 3) Ao usarmos listas de objetos com controle de duplicidade, precisamos reescrever o métodos equals() da classe que estamos implementando. Imagine uma classe Turma, em que há os atributos nome, cpf, dataNascimento. A partir daí, implemente a classe e reescreva o método equals() que use o atributo cpf com identficador (chave primária) da classe.

## 4) Em sua linguagem de preferência, crie um programa (usando funções/métodos) que:
* preencha N nomes de equipes de futebol, obrigatóriamente em maiúsculo. Esses nomes devem ser armazenados em um dicionário que se possa controlar duplicados.
* exiba os nomes das equipes cadastradas
* exiba a quantidade de equipes cadastradas

## 5) Em sua linguagem de preferência, crie um programa que manipule objetos cidades baseados na classe Cidade, contendo, nome da cidade e sigla do estado do Brasil. O controle de duplicidade deve ser via o nome da cidade. O programa deve apresentar um pequeno Menu, em que o usuário possa:
* cadastrar uma cidade em lista de cidades: nome completo em maiúsculo e a sigla em maiúsculo
* listar as cidades cadastradas tendo como ordem de ordenação os nomes das cidades
* pesquisar uma cidade por seu nome e mostrar o seu estado respectivo (no caso, sigla)
* remover uma cidade, pesquisando-a por seu nome
* finalizar o programa
