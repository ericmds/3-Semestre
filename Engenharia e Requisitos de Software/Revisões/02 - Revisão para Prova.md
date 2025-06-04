# Diagrama de Atividades -  Máquina de Estado
* É um diagrama comportamental
* Representa graficamente o fluxo de controle de uma atividade para outra
* Possui descrição de ações passoa-a-passo em um sistema
* Especifica a transformação de entradas em saídas por meio de uma sequência controlada temporal de ações
  *  Semelhante a um fluxograma, porém com suporte a concorrência (paralelismo) e sincronismo de atividades.
* Permite modelar comportamento baseado em fluxo

## Conceitos-chave
* **Ação:** é um passo individual dentro de uma atividade
  * Exemplo: Pesquisar livros

## Para que serve um diagrama de atividade
* É utilizado na captura de trabalhos que vão ser executados quando uma operação específica do sistema é disparada
 * **Ação**

## Elementos de um diagrama de atividades
**Nó inicial:** Ponto de início da atividade modelada

**Fluxo / Aresta:** Ou ainda transição.Descreve a sequência na qual as atividadesse realizam. Conexões entre duas ações.Representado por uma seta.

**Decisão:** Um único fluxo de entrada evários fluxos de saída. Cada fluxo desaída possui uma sentinela ou guarda,que é condição booleana, entrecolchetes. Sentinelas são mutuamente exclusivas.

**Intercalação:** Vários fluxos de entradae uma única saída. Marca o final de umcondicional iniciado por uma decisão

**Divergência:** (Fork) ponto no qual duas atividades ou maistarefas podem se iniciar em paralelo.

**Convergência:** (Join) ponto no qual duas atividades ou maistarefas paralelas se unem para dar início a uma nova tarefa.

**Nó Final de Atividade:** Ponto ondetermina a atividade modelada.

**Partições:** Mostra quem faz o que ( quem realiza cada açãoou conjunto de ações). Na UML 1.1 eram chamadas de “raias” (swimlanes)

**Sinais ou Mensagens:** Envio ou recebimento de sinais ou mensagens

**Chamada de Subatividade:** Sub Rotina que deve ser realizada para compor uma das ações da atividade principal. Final de Fluxo: Uma parte dos fluxos da atividade terminaram, mas a atividade ainda prossegue
