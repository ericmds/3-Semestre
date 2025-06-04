# Diagrama de Atividades
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
* **Nó inicial:** Ponto de início da atividade modelada

![image](https://github.com/user-attachments/assets/687de893-fde7-4e4d-9214-cd6327cddf44)

* **Fluxo / Aresta:** Ou ainda transição.Descreve a sequência na qual as atividadesse realizam. Conexões entre duas ações.Representado por uma seta.

![image](https://github.com/user-attachments/assets/fc146e78-cbf0-490b-9610-32697cfd0307)

* **Decisão:** Um único fluxo de entrada evários fluxos de saída. Cada fluxo desaída possui uma sentinela ou guarda,que é condição booleana, entrecolchetes. Sentinelas são mutuamente exclusivas.

![image](https://github.com/user-attachments/assets/6f013a1d-00fe-469d-94fa-36cfe1f5fba9)

* **Intercalação:** Vários fluxos de entradae uma única saída. Marca o final de umcondicional iniciado por uma decisão

![image](https://github.com/user-attachments/assets/b9342142-b8f9-4c99-bf5e-906740793621)

* **Divergência:** (Fork) ponto no qual duas atividades ou maistarefas podem se iniciar em paralelo.

![image](https://github.com/user-attachments/assets/3abb408a-184a-4d0c-839f-6fa40d9e3749)

* **Convergência:** (Join) ponto no qual duas atividades ou maistarefas paralelas se unem para dar início a uma nova tarefa.

![image](https://github.com/user-attachments/assets/edb09743-1b00-4b39-92e9-86eebe46c6f2)

* **Nó Final de Atividade:** Ponto ondetermina a atividade modelada.

![image](https://github.com/user-attachments/assets/d843356e-7e40-4b87-b07f-42cd2b34dabf)

* **Partições:** Mostra quem faz o que ( quem realiza cada açãoou conjunto de ações). Na UML 1.1 eram chamadas de “raias” (swimlanes)

![image](https://github.com/user-attachments/assets/18745f41-a7c4-4ab0-bc6a-3518628a06f9)

* **Sinais ou Mensagens:** Envio ou recebimento de sinais ou mensagens

![image](https://github.com/user-attachments/assets/014644da-926f-47d1-82f5-67efe8cdfb21)

* **Chamada de Subatividade:** Sub Rotina que deve ser realizada para compor uma das ações da atividade principal. 

![image](https://github.com/user-attachments/assets/a2491d8e-6820-4f18-895c-2a1a2deadc06)

* **Final de Fluxo:** Uma parte dos fluxos da atividade terminaram, mas a atividade ainda prossegue

![image](https://github.com/user-attachments/assets/2eda50a7-29e3-4fe1-83b0-57c0c35f3399)

### Para o diagrama estar sintaticamente correto, deve-se observar que:
* A acada nó branch deve corresponder um nó merge
* A cada fork deve corresponder um nó join
* Os nós branch, merge, fork e join devem estar perfeitamente aninhados
  * Um branch não pode terminar com um join e um fork não pode terminar com merge nem podem estar entrelaçados
* Só pode existir um nó inicial
* Só pode existir um nó final
* Cada atividade só pode ter um único fluxo de entrada e um único fluxo de saída
  * Isso não vale para os nós join, fork, merge e branch, que não são atividades
* Os nós fork, join, branch e merge podem estar em qualquer uma das raias, pois seu significado não é afetado por elas 

# Diagrama de Máquina de Estado
* É um diagrama comportamental empregado para descrevercomo um sistema se comporta quando um evento ocorre,considerando todos os estados, transições e ações possíveis de um objeto
* Representa o estado ou situação na qual um objeto pode se encontrar ao longo da execução dos processos em um sistema.
*  Mostra como um elemento se comporta por meio de um conjunto de transições de estado, a chamada "máquina de estados”.

## Para que serve
São muito usados paramodelar o comportamento de:
* Interfaces
* Casos de Uso
* Instâncias de classe
* Modelagem desistemas reativos

## Elementos de um diagrama de estados
* Estado (simples): Condição ou situação na vida de um objeto que satisfaz alguma condição, realiza alguma atividade ou espera um evento.

* Estado inicial: Determina o início da modelagem dos estados de um elemento.

* Estado Final: Indica o final dos estados modelados para o elemento.

* Estado composto: Estado que possui sub-estado.

* Transição: Movimento de um estado para outro estado. Representa um evento que causa uma mudança no estado de um objeto, levando a um novo estado.
* Ocorre da seguinte forma:
  1. Um elemento está em um estado inicial;
  2. Um evento ocorre;
  3. Uma ação é realizada;
  4. O elemento muda para um estado distinto

* Evento: Incidente que leva os objetos a transacionar de um estado para outro. Ocorrência de um estímulo que pode disparar uma transição de estados. Pode ser interno ou externo.
  * Tipo de eventos: Sinal, Chamada, Temporização, Mudança

* Ação: Execução atômica que se completa sem interrupção, resultando em uma alteração de estado.
 
* Atividade: Execução atual não atômica em uma máquina de estados.

* Pseudo Estado de escolha: Ponto na transição de estado de um objeto no qual uma decisão será tomada, baseada em uma condição. É um nó de decisão, condicionado por condições de guarda, para decidir qual o próximo estado a ser gerado para o objeto.

* Condições de guarda: Condição avaliada após o disparo de um evento, que determina como ocorrerá a transição (pode haver múltiplas transições possíveis do mesmo estado com o mesmodisparo) mas só uma ocorrerá.

* Barra de Bifurcação: Ocorre quando duas ou mais transições partem de um mesmo estado. Assim, haverá mais de um processo ocorrendo de forma paralela.

* Barra de União / Junção: Quando duas ou mais transições levam a um mesmo estado. Determina o momento em que dois ou mais processos paralelos se unem em um único processo.

* Atividades internas: Um objeto pode realizar atividades enquanto está em um estado. Essas atividades podem ser detalhadas por meio das seguintes cláusulas:
  * entry/ Atividade executada quando o objeto entra em um estado
  * do/Executada enquanto o objeto está em um estado
  * exit/ Quando o objeto sai de um estado (antes da transição)
  * onevent/ Realizada em resposta a um evento (estímulo
 
 ### Como criar um diagrama de estados
* Determinando o estado inicial e o estado final
* Identificando todos os estados possíveis para o processo modelado
* Use setas ou linhas para destacar as transições de controle de um estado para outro, conectando origem e destino
* Rotule oseventos que disparam essas transições
* Estabeleça condições de guarda para assegurar que as transições são apropriadas e relevantes. Uma condição de guarda força a verificação da transição contra uma condição antes de prosseguir.
