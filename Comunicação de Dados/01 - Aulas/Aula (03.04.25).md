# Modelo OSI

## Contexto Histórico

- Antigamente, computadores de diferentes fabricantes (ex: IBM, DEC) **só se comunicavam entre si**.
- Caso uma empresa quisesse expandir, era obrigada a **comprar equipamentos da mesma marca**.
- Surgiu então a necessidade de permitir que **computadores de diferentes empresas se comunicassem**.
- Para resolver isso, a **ISO desenvolveu o modelo OSI**, possibilitando a criação de protocolos abertos e padronizados pelos fabricantes.

---

## Objetivos do Modelo OSI

- **Interoperabilidade**: Capacidade de troca de informações entre sistemas de diferentes fabricantes.
  - Tornou a tecnologia mais acessível e **barateou os custos**, pois várias empresas podiam fabricar peças compatíveis.

- **Interconectividade**: Capacidade dos sistemas se conectarem independentemente da arquitetura ou tecnologia.

- **Portabilidade de Aplicações**: Permite que um mesmo software rode em diferentes plataformas.
  - Exemplo: Java utiliza uma **máquina virtual** para se comunicar com o sistema operacional, tornando o programa independente do hardware.

---

## Arquitetura Baseada em Camadas

- Para alcançar esses objetivos, foi criado o **Modelo de Referência para Interconexão de Sistemas Abertos**.
- O modelo é estruturado em **camadas**, onde cada camada **depende da anterior e fornece serviços para a próxima**.

---

## Vantagens de um Sistema Aberto

- **Liberdade de escolha** entre soluções de diversos fabricantes.
- **Acesso mais rápido e barato** a novas tecnologias.
- **Redução de investimentos** em novas máquinas, devido à **portabilidade de sistemas e aplicações**.

---

## Fatores na Adoção de um Modelo em Camadas

- Considerar todos os **eventos possíveis** durante a comunicação.
- Conhecer os **efeitos e causas** desses eventos.
  - Se ocorrer uma falha, deve-se saber **onde** e **por que** ocorreu.
- Especificar detalhadamente os **meios físicos** utilizados na comunicação.
- Conhecer os **detalhes técnicos das aplicações** que serão executadas.

---

## Etapas da Elaboração de um Sistema Aberto

1. Definir os **processos de aplicação** no ambiente OSI.
2. Estabelecer as **conexões entre os processos** de aplicação.
3. Compreender os **sistemas envolvidos** na troca de informações.

### Exemplo de Fluxo de Comunicação

```plaintext
ORIGEM → CODEC → MODEM → MEIO DE TRANSMISSÃO → MODEM → CODEC → DESTINO
