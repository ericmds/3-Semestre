# Relembrando o que ja foi visto em Estrutura de Dados
* Físicas
* Abstratas
  * Listas, dicionários, listas de listas, lista de dicionário, lista de objetos
    * Orientação a Objetos
      * Rescrita de operações/métodos
        * toString(), ToString(), __str__, __repr__
        * equals(), Equals(), __eq__
        * hashCode(), GerHashCode(), __hash__
          * Realiza a busca por endereçamento
          * Vantagens: velocidade de busca, e armanezamento
          * Descantagens: não é organizada, não da para buscar por índice
  * Filas Queue - Classe abstrata → Esqueleto com atributos e métodos... só que não instancia objetos
    * FIFO - Fist In, First Out
      * Operações clássicas
        * Inserir no final/cauda → add, push (mesma coisa que o add, mas utilizado para idenficar uma fila)
        * Remover no inicio/cabeça → remove, pop (mesma coisa que pop, mas utilizado para idenficar uma fila)
      * Operações herdadas
        * size
        * contains
        * indexOf(??? não tem certeza se tem)
      * Cenário de aplicação de fila
        1) Gerenciar Processos: id, descrição
           * Classe Processos
             * Aributos → id, descrição
             * Métodos → toString, equals 
        2) Processos tem prioridades: Processos com id entre 1 e 500 tem alta prioridade e processos entre 501 e 1000 tem baixa prioridade
        3) Há duas filas: normal(processos de 501 e 1000) e prioritaria (processos entre 1 a 500)
        4) Dinâmica
           * Um número aleatório será gerado entre 0 e 1000
             * 0 → Atender/remover a cabeça da fila de prioridade - tratar quando vazia
             * 500 → Atender/remover a cabeça da fila normal - tratar quando vazia
             * Demais números → Seguem a dinâmica acima → Controle de duplicados
             * A dinâmica deve repetir 10000
        5) Exibir as filas ao final, com os processos não atendidos (mostrando contadores)
