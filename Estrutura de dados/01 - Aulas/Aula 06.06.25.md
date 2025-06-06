# Árvores

* Entrar na árvore - empilhar
* Sair da árvore - desempilha
* Nó folha é o que não tem galho para direita nem esquerda
* Percurso
  * Pré-fixado ou RED (Visita raiz, vai esquerda, vai direita)
      * Utiliza quando quer localizar alguem, não possui ordenação 
      * Visita (Print) = 50
      * Vai esquerda = Tem algo, visita (print)
      * Vai esquerda = Não tem nada, vai direita, visita (print) 
  * In-fixado ou ERD (Vai esquerda, visita raiz, vai direita)
      * Utiliza na exibição, mostra ordenado 
  * Pós-fixado ou EDR (Vai esquerda, vai direita, visita raiz)
     * Utiliza quando quer apagar uma árvore
     * Vai podando pelo final
     * Percorre toda árvore para depois visitar
    
Árvores binárias de pesquisa ou Árvores binárias 

--

# Árvore

## Percorrer um árvore
* Pré-fixado ou RED (visita raiz, vai esquerda, vai direita)
  * Utilizado para localizar um dado
  * Não possui ordenação
* In-fixado ou ERD (visita esquerda, visita raiz, vai direita)
  * Utilizado para exibir um dado
  * Possui ordenação
* Pós-fixado ou EDR (vai esquerda, vai direita, visita raiz)
  * Utilizado para apagar dados
  * Percorre todos os galhos e começa a visitar somente quando não achar nenhuma nó folha, ou seja, que não tem nenhum dado depos à esquerda ou direita

