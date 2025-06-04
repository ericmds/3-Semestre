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

![image](https://github.com/user-attachments/assets/687de893-fde7-4e4d-9214-cd6327cddf44)

**Fluxo / Aresta:** Ou ainda transição.Descreve a sequência na qual as atividadesse realizam. Conexões entre duas ações.Representado por uma seta.

![image](https://github.com/user-attachments/assets/fc146e78-cbf0-490b-9610-32697cfd0307)

**Decisão:** Um único fluxo de entrada evários fluxos de saída. Cada fluxo desaída possui uma sentinela ou guarda,que é condição booleana, entrecolchetes. Sentinelas são mutuamente exclusivas.

![image](https://github.com/user-attachments/assets/6f013a1d-00fe-469d-94fa-36cfe1f5fba9)

**Intercalação:** Vários fluxos de entradae uma única saída. Marca o final de umcondicional iniciado por uma decisão

![image](https://github.com/user-attachments/assets/b9342142-b8f9-4c99-bf5e-906740793621)

**Divergência:** (Fork) ponto no qual duas atividades ou maistarefas podem se iniciar em paralelo.

![image](https://github.com/user-attachments/assets/3abb408a-184a-4d0c-839f-6fa40d9e3749)

**Convergência:** (Join) ponto no qual duas atividades ou maistarefas paralelas se unem para dar início a uma nova tarefa.

![image](https://github.com/user-attachments/assets/edb09743-1b00-4b39-92e9-86eebe46c6f2)

**Nó Final de Atividade:** Ponto ondetermina a atividade modelada.

![image](https://github.com/user-attachments/assets/d843356e-7e40-4b87-b07f-42cd2b34dabf)

**Partições:** Mostra quem faz o que ( quem realiza cada açãoou conjunto de ações). Na UML 1.1 eram chamadas de “raias” (swimlanes)

![image](https://github.com/user-attachments/assets/18745f41-a7c4-4ab0-bc6a-3518628a06f9)

**Sinais ou Mensagens:** Envio ou recebimento de sinais ou mensagens

![image](https://github.com/user-attachments/assets/014644da-926f-47d1-82f5-67efe8cdfb21)

**Chamada de Subatividade:** Sub Rotina que deve ser realizada para compor uma das ações da atividade principal. 

![image](https://github.com/user-attachments/assets/a2491d8e-6820-4f18-895c-2a1a2deadc06)

**Final de Fluxo:** Uma parte dos fluxos da atividade terminaram, mas a atividade ainda prossegue

![image](https://github.com/user-attachments/assets/2eda50a7-29e3-4fe1-83b0-57c0c35f3399)

