## Aula 01 - Software e Engenharia de Software

### Definição de Software

Software é o conjunto de instruções executadas por um computador, incluindo código, estruturas de dados e documentação associada. Ele é um produto desenvolvido por profissionais da computação e pode ser distribuído em diversas formas, como arquivos executáveis, scripts, páginas web, etc.

Existem diferentes tipos de software, classificados conforme seu uso:
- **Software de sistema:** como sistemas operacionais, drivers, compiladores.
- **Software de aplicação:** voltado para o usuário final (ex: editores de texto, navegadores).
- **Software científico e de engenharia:** usado em cálculos complexos, simulações, etc.
- **Software embutido:** embarcado em dispositivos como micro-ondas e carros.
- **Software para linha de produtos:** como editores de texto, planilhas, e jogos.
- **Aplicações para web:** sites e sistemas web.
- **Software de inteligência artificial:** sistemas que aprendem e tomam decisões (ex: chatbots, reconhecimento de voz).

**Características do software:**
- Não se desgasta com o tempo, pois não sofre ação de agentes físicos.
- Diferente do hardware, não existe processo de fabricação, mas sim desenvolvimento.
- A manutenção é contínua, com atualizações e correções de falhas.
- Componentização: crescente uso de componentes reutilizáveis.

**Problemas associados ao software:**
- A complexidade aumenta com o tamanho e escopo do sistema.
- A qualidade é subjetiva e difícil de medir.
- Difícil de visualizar por não ser tangível.

### Engenharia de Software

É a disciplina que aplica princípios de engenharia para o desenvolvimento de software, com foco em qualidade, custo e prazos. Envolve práticas sistemáticas e quantificáveis para desenvolvimento, operação e manutenção de sistemas.

**Tecnologia em camadas (segundo Pressman):**
1. **Qualidade:** base de todo processo.
2. **Processo:** define as atividades organizadas.
3. **Métodos:** abordagens técnicas para realizar tarefas (análise, projeto, testes).
4. **Ferramentas:** apoio automatizado/semi-automatizado (IDE, ferramentas de modelagem, etc).

**Processo de Engenharia de Software:**
1. **Comunicação:** entender o que o cliente precisa.
2. **Planejamento:** definir cronograma, equipe, recursos.
3. **Modelagem:** criar representações (diagramas, estruturas).
4. **Construção:** codificação e testes.
5. **Emprego:** implantação, uso e manutenção.

---

## Aula 02 - Modelos de Processo

### O que é um Processo de Software?

É um conjunto de atividades organizadas para criar um produto de software. Ajuda a garantir que o software seja produzido com qualidade, dentro do prazo e do orçamento. 

**Importância:**
- Fornece um caminho sistemático para o desenvolvimento.
- Ajuda na organização e gerenciamento.
- Possibilita controle da qualidade e do progresso.

### Fluxos de Processo

Os fluxos descrevem como as atividades do processo de software são organizadas no tempo. Os principais fluxos são:

- **Fluxo Linear:**
  - Cada uma das cinco atividades metodológicas é realizada de forma sequencial.
  - Ideal para projetos com requisitos bem definidos.
  - Pouco adaptável a mudanças.

- **Fluxo Iterativo:**
  - Repete uma ou mais atividades antes de passar para a próxima.
  - Permite revisões e melhorias em cada ciclo.
  - Comum em projetos onde os requisitos evoluem.

- **Fluxo Evolucionário:**
  - Executa atividades de forma cíclica.
  - Cada ciclo entrega uma versão mais completa do software.
  - Muito usado em modelos de prototipação e desenvolvimento incremental.

- **Fluxo Paralelo:**
  - Algumas atividades ocorrem simultaneamente.
  - Exemplo: modelagem de uma parte do sistema ao mesmo tempo que se desenvolve outra parte.
  - Requer equipes bem coordenadas.

### Modelos Tradicionais:

- **Modelo Cascata:**
  - Abordagem sequencial: uma fase começa quando a anterior termina.
  - Indicado para projetos com requisitos bem definidos.
  - Problemas:
    - Dificuldade de adaptação a mudanças de requisitos.
    - Longo tempo até que o cliente veja um produto funcional.
    - Erros só são percebidos nas fases finais.

- **Modelo V:**
  - Variante do cascata, enfatiza testes.
  - Cada fase tem uma verificação correspondente.
  - Ideal para sistemas críticos.
  - Problemas:
    - Rigidez semelhante ao modelo cascata.
    - Complexidade elevada em projetos com muitas fases.

- **Modelo Incremental:**
  - Desenvolve o software em partes (versões).
  - Cada versão traz funcionalidades adicionais.
  - Permite entregas mais rápidas.
  - Problemas:
    - Pode haver dificuldade na integração entre os incrementos.
    - Exige bom planejamento para evitar inconsistências.

- **Modelo de Prototipação:**
  - Cria protótipos rápidos para validar ideias.
  - Ajuda a esclarecer requisitos.
  - Problemas:
    - Protótipos muitas vezes são mal documentados.
    - Usuários podem acreditar que o protótipo já é o sistema final.
    - Pode haver compromissos técnicos precipitados.

- **Modelo Espiral:**
  - Iterativo, com foco em análise de riscos.
  - Une elementos de prototipação com desenvolvimento controlado.
  - Problemas:
    - Difícil de convencer o cliente sobre sua estrutura iterativa.
    - Requer experiência em análise de riscos.
    - Pode ser caro e complexo de implementar.

- **Modelo Concorrente:**
  - Atividades ocorrem simultaneamente.
  - Flexível e adaptável.
  - Problemas:
    - Difícil coordenação entre atividades paralelas.
    - Requer equipes maduras e bem integradas.


- **Modelo Cascata:**
  - Abordagem sequencial: uma fase começa quando a anterior termina.
  - Indicado para projetos com requisitos bem definidos.
  - Problema: pouca flexibilidade para mudanças.

- **Modelo V:**
  - Variante do cascata, enfatiza testes.
  - Cada fase tem uma verificação correspondente.
  - Ideal para sistemas críticos.

- **Modelo Incremental:**
  - Desenvolve o software em partes (versões).
  - Cada versão traz funcionalidades adicionais.
  - Permite entregas mais rápidas.

- **Modelo de Prototipação:**
  - Cria protótipos rápidos para validar ideias.
  - Ajuda a esclarecer requisitos.
  - Risco: cliente pode confundir protótipo com sistema final.

- **Modelo Espiral:**
  - Iterativo, com foco em análise de riscos.
  - Une elementos de prototipação com desenvolvimento controlado.
  - Exige bom gerenciamento de riscos.

- **Modelo Concorrente:**
  - Atividades ocorrem simultaneamente.
  - Flexível e adaptável.

---

## Aula 03 - Desenvolvimento Ágil

### Conceito

Metodologia de desenvolvimento que valoriza indivíduos e interações mais do que processos e ferramentas. Foco em entregar rapidamente software funcional, com feedback constante e adaptação a mudanças.

### Princípios (Manifesto Ágil):
1. Satisfazer o cliente com entregas rápidas e contínuas.
2. Acolher mudanças de requisitos, mesmo tardiamente.
3. Entregar software funcional com frequência.
4. Colaboração próxima entre cliente e equipe.
5. Apoiar pessoas motivadas e dar autonomia.
6. Comunicação face a face é a mais eficaz.
7. Software funcional é a principal medida de progresso.
8. Desenvolvimento sustentável.
9. Atenção à excelência técnica.
10. Simplicidade.
11. Equipes auto-organizadas.
12. Reflexão constante e ajuste de comportamento.

### Metodologias Ágeis:

Os métodos ágeis surgiram como uma resposta à rigidez dos modelos tradicionais. Eles priorizam a entrega contínua de software funcional, a comunicação constante com o cliente e a adaptação a mudanças. A seguir, os principais métodos:

- **Scrum:**
  - Organização baseada em ciclos curtos chamados **Sprints**, com duração de 1 a 4 semanas.
  - Utiliza o **Product Backlog** (lista de funcionalidades desejadas) e o **Sprint Backlog** (funcionalidades da sprint atual).
  - Reuniões diárias chamadas **Daily Scrum**, nas quais os membros respondem: "O que fiz ontem?", "O que farei hoje?", "Há impedimentos?".
  - O **Scrum Master** remove obstáculos, e o **Product Owner** prioriza funcionalidades.
  - Ao final de cada sprint, há uma **review** (demonstração) e uma **retrospectiva** (análise do processo).

- **Extreme Programming (XP):**
  - Foco em qualidade e simplicidade do código.
  - Utiliza **programação em pares**, onde dois desenvolvedores trabalham juntos no mesmo código.
  - Forte uso de **testes automatizados** e **integração contínua**.
  - Código é escrito somente para funcionalidades solicitadas (evita superprojeto).
  - Baseado em histórias de usuário que definem o que será implementado.

- **FDD (Feature Driven Development):**
  - Baseado em **funcionalidades específicas do sistema**.
  - Envolve um planejamento detalhado e design antes da implementação.
  - Adequado para equipes grandes com foco em rastreabilidade e controle.

- **Kanban:**
  - Não possui sprints fixos, mas um fluxo contínuo de tarefas.
  - Utiliza quadros visuais (Kanban Boards) para mostrar o andamento das atividades.
  - Limita o número de tarefas em progresso (WIP – Work In Progress).
  - Excelente para ambientes de manutenção ou equipes que lidam com demandas variáveis.

### Benefícios dos Métodos Ágeis:
- Maior adaptação às mudanças de requisitos.
- Entregas constantes e de valor para o cliente.
- Redução de riscos por meio de ciclos curtos.
- Maior motivação e participação da equipe.

### Desafios:
- Pode ser difícil para equipes com baixa maturidade.
- Necessita comprometimento contínuo do cliente.
- Documentação pode ser reduzida demais se não houver equilíbrio.

- **Scrum:**
  - Organização em Sprints (ciclos curtos de 1 a 4 semanas).
  - Daily Scrum (reuniões diárias).
  - Product Backlog, Sprint Backlog e entregas incrementais.

- **Extreme Programming (XP):**
  - Ênfase em testes automatizados, programação em pares.
  - Design simples e código limpo.
  - Histórias de usuário e iterações curtas.

- **FDD (Feature Driven Development):**
  - Desenvolvimento orientado a funcionalidades.
  - Design antes da implementação.

- **Kanban:**
  - Visualização do fluxo de trabalho em quadros.
  - Controle de tarefas em andamento.

---

## Aula 04 - Rational Unified Process (RUP)

### Características:

- Processo iterativo e incremental.
- Baseado em orientação a objetos (UML).
- Apoia o desenvolvimento disciplinado com boas práticas.

### Fases:
1. **Concepção:** identificar escopo, partes interessadas, objetivos e viabilidade.
2. **Elaboração:** estabelecer arquitetura, modelar requisitos e reduzir riscos.
3. **Construção:** desenvolvimento e testes incrementais.
4. **Transição:** implantação, treinamento e suporte inicial.

### Três Perspectivas:
- **Dinâmica:** representa as fases ao longo do tempo.
- **Estática:** workflows como análise, design, implementação, testes.
- **Prática:** boas práticas recomendadas.

**Boas práticas do RUP:**
1. Desenvolver de forma iterativa.
2. Gerenciar requisitos de forma controlada.
3. Usar arquitetura baseada em componentes.
4. Modelar visualmente (com UML).
5. Verificar qualidade continuamente.
6. Gerenciar mudanças sistematicamente.

---

## Aula 07 - Engenharia de Requisitos

### Conceito:

É o processo de descobrir, analisar, documentar e validar os requisitos de um sistema. Envolve entender o que os usuários realmente precisam.

### Tipos de Requisitos:
- **Requisitos Funcionais:**
  - Especificam o comportamento do sistema.
  - Ex: "O sistema deve permitir que o usuário cadastre novos clientes".

- **Requisitos Não-Funcionais:**
  - Dizem respeito à qualidade, restrições ou atributos do sistema.
  - Ex: tempo de resposta, usabilidade, segurança.

**Classificações dos Requisitos Não-Funcionais:**
- **Produto:** desempenho, confiabilidade, portabilidade.
- **Organizacionais:** padrões da empresa, cronogramas.
- **Externos:** leis, normas, interoperabilidade.

### Atividades da Engenharia de Requisitos:
1. **Elicitação:** levantamento junto aos stakeholders.
2. **Análise:** verificar se há ambiguidade, contradições.
3. **Documentação:** formalizar os requisitos.
4. **Validação:** revisar e aprovar requisitos.

### Técnicas de Elicitação:
- Entrevistas
- Questionários
- Workshops
- Brainstorming
- Prototipagem
- JAD (Joint Application Design)
- VORD (Viewpoint-Oriented Requirements Definition)

**Importância:**
- Alinha expectativas dos stakeholders com o que será entregue.
- Previne mudanças de escopo inesperadas.
- Facilita planejamento, testes e manutenção futura.

---

1. Definição de Software
a) Qual é a principal característica que diferencia o software do hardware?
A principal diferença é que o software não se desgasta com o tempo, pois não sofre a ação de agentes físicos, ao contrário do hardware, que se desgasta com o uso e depende de um processo de fabricação.

b) Cite e explique dois tipos de software, com exemplos.

Software de aplicação: voltado para o usuário final, como editores de texto (ex: Microsoft Word) e navegadores de internet (ex: Google Chrome).

Software embutido: embarcado em dispositivos físicos, como micro-ondas e carros, realizando funções específicas dentro do dispositivo.

c) Quais são os problemas associados ao software, conforme mencionado no texto?

A complexidade aumenta com o tamanho e escopo do sistema.

A qualidade do software é subjetiva e difícil de medir.

O software não é tangível, o que torna sua visualização difícil.

2. Engenharia de Software
a) O que é engenharia de software e qual seu foco principal?
A engenharia de software é a disciplina que aplica princípios de engenharia para o desenvolvimento de software, com foco na qualidade, custo e prazos. Ela envolve práticas sistemáticas para desenvolvimento, operação e manutenção de sistemas.

b) Explique o modelo de "Tecnologia em camadas" segundo Pressman.
O modelo de "Tecnologia em camadas" consiste em quatro camadas:

Qualidade: base de todo o processo.

Processo: define as atividades organizadas.

Métodos: técnicas para realizar tarefas como análise, projeto e testes.

Ferramentas: apoio automatizado/semi-automatizado, como IDEs e ferramentas de modelagem.

c) Descreva o processo de Engenharia de Software em suas cinco fases.

Comunicação: entender as necessidades do cliente.

Planejamento: definir cronograma, equipe e recursos.

Modelagem: criar representações do sistema (diagramas, estruturas).

Construção: codificação e testes.

Emprego: implantação, uso e manutenção do sistema.

3. Modelos de Processo de Software
a) O que é um processo de software e qual sua importância?
Um processo de software é um conjunto de atividades organizadas para criar um produto de software, garantindo que ele seja produzido com qualidade, dentro do prazo e do orçamento. Sua importância está em fornecer um caminho sistemático para o desenvolvimento e permitir o controle da qualidade e do progresso.

b) Explique as diferenças entre os fluxos de processo Linear, Iterativo, Evolucionário e Paralelo.

Fluxo Linear: As atividades são realizadas de forma sequencial. Ideal para projetos com requisitos bem definidos.

Fluxo Iterativo: Atividades são repetidas antes de avançar. Permite revisões contínuas, comum quando os requisitos evoluem.

Fluxo Evolucionário: Executa atividades cíclicas e entrega versões incrementais do sistema. Usado em prototipação e desenvolvimento incremental.

Fluxo Paralelo: Algumas atividades ocorrem simultaneamente, exigindo coordenação eficiente entre as equipes.

c) Qual a principal vantagem e desvantagem do Modelo Cascata?

Vantagem: A sequência linear das fases torna o processo simples de entender e controlar.

Desvantagem: Dificuldade de adaptação a mudanças de requisitos, e problemas só são percebidos nas fases finais.

d) No Modelo V, o que é enfatizado e qual é a sua principal característica?
O Modelo V enfatiza testes, com cada fase do desenvolvimento tendo uma fase de verificação correspondente, assegurando que cada parte do sistema seja validada à medida que é desenvolvida.

e) Quais são os principais problemas do Modelo de Prototipação?

Protótipos muitas vezes são mal documentados.

Os usuários podem acreditar que o protótipo já é o sistema final.

Pode levar a compromissos técnicos precipitados.

4. Desenvolvimento Ágil
a) O que é desenvolvimento ágil e quais são seus princípios principais?
Desenvolvimento ágil é uma metodologia que prioriza a entrega contínua de software funcional, com foco em indivíduos, interações e adaptação a mudanças.
Princípios principais:

Satisfazer o cliente com entregas rápidas e contínuas.

Acolher mudanças de requisitos, mesmo tardiamente.

Entregar software funcional frequentemente.

Colaboração próxima com o cliente.

Apoiar equipes motivadas e autônomas.

Comunicação face a face é a mais eficaz.

Medir progresso pela entrega de software funcional.

Desenvolvimento sustentável.

Atenção à excelência técnica.

Simplicidade.

Equipes auto-organizadas.

Reflexão constante e ajustes de comportamento.

b) Cite e explique dois métodos ágeis e seus principais pontos.

Scrum: Organiza o trabalho em ciclos curtos chamados Sprints, com reuniões diárias e entregas incrementais.

Extreme Programming (XP): Foca na qualidade do código com programação em pares, testes automatizados e integração contínua.

c) Quais são os principais benefícios e desafios dos métodos ágeis?
Benefícios:

Maior adaptação às mudanças de requisitos.

Entregas contínuas e de valor para o cliente.

Redução de riscos por meio de ciclos curtos.

Maior motivação e participação da equipe.
Desafios:

Pode ser difícil para equipes com baixa maturidade.

Requer comprometimento contínuo do cliente.

A documentação pode ser reduzida se não houver equilíbrio.

5. Rational Unified Process (RUP)
a) Quais são as quatro fases do RUP?

Concepção: Identificar escopo, partes interessadas e objetivos.

Elaboração: Estabelecer arquitetura e reduzir riscos.

Construção: Desenvolvimento e testes incrementais.

Transição: Implantação, treinamento e suporte inicial.

b) O que são as três perspectivas do RUP e qual é a função de cada uma?

Dinâmica: Representa as fases ao longo do tempo.

Estática: Define workflows como análise, design, implementação e testes.

Prática: Boas práticas recomendadas para garantir o sucesso do processo.

c) Quais são as boas práticas recomendadas pelo RUP?

Desenvolver de forma iterativa.

Gerenciar requisitos de forma controlada.

Usar arquitetura baseada em componentes.

Modelar visualmente com UML.

Verificar qualidade continuamente.

Gerenciar mudanças de forma sistemática.

6. Engenharia de Requisitos
a) Qual é a diferença entre requisitos funcionais e não-funcionais?

Requisitos funcionais: Especificam o comportamento do sistema, como funcionalidades que o sistema deve ter.

Requisitos não-funcionais: Definem as qualidades ou restrições do sistema, como desempenho e segurança.

b) Cite e explique os tipos de requisitos não-funcionais.

Produto: Desempenho, confiabilidade e portabilidade.

Organizacionais: Padrões da empresa e cronogramas.

Externos: Leis, normas e interoperabilidade com outros sistemas.

c) Descreva as principais atividades da engenharia de requisitos.

Elicitação: Levantamento de requisitos com stakeholders.

Análise: Verificar se há ambiguidades ou contradições.

Documentação: Formalizar os requisitos em um formato compreensível.

Validação: Revisar e aprovar os requisitos.

d) O que é a elicitação de requisitos e quais técnicas podem ser usadas para isso?
A elicitação de requisitos é o processo de descobrir e entender as necessidades dos stakeholders.
Técnicas:

Entrevistas, questionários, workshops, brainstorming, prototipagem, JAD (Joint Application Design) e VORD (Viewpoint-Oriented Requirements Definition).
