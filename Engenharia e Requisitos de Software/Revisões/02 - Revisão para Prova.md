# Diagrama de Atividades
* É um diagrama comportamental
* Representa graficamente o fluxo de controle de uma atividade para outra
* Possui descrição de ações passo-a-passo em um sistema
* Especifica a transformação de entradas em saídas por meio de uma sequência controlada temporal de ações
  * Semelhante a um fluxograma, porém com suporte a concorrência (paralelismo) e sincronismo de atividades.
* Permite modelar comportamento baseado em fluxo

## Conceitos-chave
* **Ação:** é um passo individual dentro de uma atividade
  * Exemplo: Pesquisar livros

## Para que serve um diagrama de atividade
* É utilizado na captura de trabalhos que vão ser executados quando uma operação específica do sistema é disparada
  * **Ação**

## Elementos de um diagrama de atividades

* **Nó inicial:** Ponto de início da atividade modelada  
<p align="center">
  <img src="https://github.com/user-attachments/assets/687de893-fde7-4e4d-9214-cd6327cddf44" alt="Nó inicial" width="300">
</p>

* **Fluxo / Aresta:** Transição entre ações.  
<p align="center">
  <img src="https://github.com/user-attachments/assets/fc146e78-cbf0-490b-9610-32697cfd0307" alt="Fluxo / Aresta" width="300">
</p>

* **Decisão:** Um fluxo de entrada e vários fluxos de saída.  
<p align="center">
  <img src="https://github.com/user-attachments/assets/6f013a1d-00fe-469d-94fa-36cfe1f5fba9" alt="Decisão" width="300">
</p>

* **Intercalação (Merge):** Vários fluxos de entrada e uma única saída.  
<p align="center">
  <img src="https://github.com/user-attachments/assets/b9342142-b8f9-4c99-bf5e-906740793621" alt="Merge" width="300">
</p>

* **Divergência (Fork):** Início de tarefas paralelas.  
<p align="center">
  <img src="https://github.com/user-attachments/assets/3abb408a-184a-4d0c-839f-6fa40d9e3749" alt="Fork" width="300">
</p>

* **Convergência (Join):** Reunião de tarefas paralelas.  
<p align="center">
  <img src="https://github.com/user-attachments/assets/edb09743-1b00-4b39-92e9-86eebe46c6f2" alt="Join" width="300">
</p>

* **Nó Final de Atividade:** Encerramento da atividade.  
<p align="center">
  <img src="https://github.com/user-attachments/assets/d843356e-7e40-4b87-b07f-42cd2b34dabf" alt="Nó final de atividade" width="300">
</p>

* **Partições (Swimlanes):** Indicam quem executa o quê.  
<p align="center">
  <img src="https://github.com/user-attachments/assets/18745f41-a7c4-4ab0-bc6a-3518628a06f9" alt="Partições" width="300">
</p>

* **Sinais ou Mensagens:** Envio ou recebimento de sinais.  
<p align="center">
  <img src="https://github.com/user-attachments/assets/014644da-926f-47d1-82f5-67efe8cdfb21" alt="Sinais ou Mensagens" width="300">
</p>

* **Chamada de Subatividade:** Sub-rotina da atividade principal.  
<p align="center">
  <img src="https://github.com/user-attachments/assets/a2491d8e-6820-4f18-895c-2a1a2deadc06" alt="Subatividade" width="300">
</p>

* **Final de Fluxo:** Encerramento parcial do fluxo.  
<p align="center">
  <img src="https://github.com/user-attachments/assets/2eda50a7-29e3-4fe1-83b0-57c0c35f3399" alt="Final de Fluxo" width="300">
</p>

### Para o diagrama estar sintaticamente correto, deve-se observar que:
* A cada nó branch deve corresponder um nó merge
* A cada fork deve corresponder um nó join
* Os nós branch, merge, fork e join devem estar perfeitamente aninhados
* Só pode existir um nó inicial
* Só pode existir um nó final
* Cada atividade só pode ter um único fluxo de entrada e um único fluxo de saída (exceto branch, merge, fork e join)
* Esses nós podem estar em qualquer raia

# Diagrama de Máquina de Estado
* É um diagrama comportamental empregado para descrever como um sistema se comporta quando um evento ocorre, considerando todos os estados, transições e ações possíveis de um objeto
* Representa o estado ou situação na qual um objeto pode se encontrar ao longo da execução dos processos em um sistema.
* Mostra como um elemento se comporta por meio de um conjunto de transições de estado, a chamada "máquina de estados”.

## Para que serve
São muito usados para modelar o comportamento de:
* Interfaces
* Casos de Uso
* Instâncias de classe
* Modelagem de sistemas reativos

## Elementos de um diagrama de estados

* **Estado simples:**  
<p align="center">
  <img src="https://github.com/user-attachments/assets/35dc8078-d5a1-4300-8bc0-886d2d4500a3" alt="Estado simples" width="300">
</p>

* **Estado inicial:**  
<p align="center">
  <img src="https://github.com/user-attachments/assets/dec9968e-6c40-45d1-9e9a-e14a3f4f388a" alt="Estado inicial" width="300">
</p>

* **Estado final:**  
<p align="center">
  <img src="https://github.com/user-attachments/assets/5b181226-b781-452a-b53c-ebcf9ad8ac62" alt="Estado final" width="300">
</p>

* **Estado composto:**  
<p align="center">
  <img src="https://github.com/user-attachments/assets/1e5e6e90-c734-47d1-844d-99f7bfe72aea" alt="Estado composto" width="300">
</p>

* **Transição:** Evento que leva um objeto de um estado a outro.  
<p align="center">
  <img src="https://github.com/user-attachments/assets/6bb7b457-af54-459f-b562-92650a21bc97" alt="Transição" width="300">
</p>

* **Pseudoestado de escolha:** Nó de decisão com condição de guarda.  
<p align="center">
  <img src="https://github.com/user-attachments/assets/1f4df729-1ac2-471d-bd06-c2689f8408cb" alt="Pseudoestado de escolha" width="300">
</p>

* **Condições de guarda:** Avaliadas após o evento, determinam se a transição ocorrerá.  
<p align="center">
  <img src="https://github.com/user-attachments/assets/d9c4a9d9-822c-4ae0-90aa-fb9291c5693e" alt="Condições de guarda" width="300">
</p>

* **Barra de bifurcação:** Início de processos paralelos.  
<p align="center">
  <img src="https://github.com/user-attachments/assets/f3442401-4f36-46d6-a8bb-88676b3200fa" alt="Barra de bifurcação" width="300">
</p>

* **Barra de união:** Fim de processos paralelos.  
<p align="center">
  <img src="https://github.com/user-attachments/assets/cbe65317-0f2b-488e-b66d-3fbbd033100c" alt="Barra de união" width="300">
</p>

* **Atividades internas:**  
  * `entry/` Ao entrar no estado  
  * `do/` Enquanto está no estado  
  * `exit/` Ao sair do estado  
  * `onevent/` Em resposta a um evento  
<p align="center">
  <img src="https://github.com/user-attachments/assets/b14a74a5-f9df-47e7-a25b-3de275172634" alt="Atividades internas" width="300">
</p>

## Como criar um diagrama de estados
* Definir estados inicial e final
* Listar todos os estados possíveis
* Conectar estados com setas (transições)
* Rotular eventos que disparam transições
* Estabelecer condições de guarda para as transições
