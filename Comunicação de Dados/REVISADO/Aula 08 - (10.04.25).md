# Modelo OSI
7 - APLICAÇÃO

6 - APRESENTAÇÃO

5 - SESSÃO

4 - TRANSPORTE

3 - REDE

2 - ENLASE

1 - FÍSICO
 
## Internet Protocol - IP
* Exemplos
  * IP**V4**: 192.168.1.10
  * IV**V6**: FF A1 2C XX XX XX
* Tem uma característica que, quando você precisa mexer em alguma camada, não precisa mexer nas outras

## Camada física

## Camada enlase
* Detectar erros e se possível corrigir erros por ventura do nível físico
* **A camada de enlase não tem conhecimento de qualquer outra rede que não seja sua, ela só ve de um ponto inicial (sai da máquina) até o ponto final (entra no switch) do seu enlase, a partir do momento que ele entra no switch e muda  de enlase, ela não tem mais conhecimento** - <ins>**PROVA***</ins>

## CAMADA DE REDE

## CAMADA DE TRANSPORTE
* Prove mecanismos que possibilitam a troca de dados **fim-a-fim**, ou seja, a camada de transporte não se comunica com máquinas itermediárias, como pode ocorrer com as camadas inferiores

## CAMADA DE SESSÃO
* Responsável pelo estabelecimento de sessões entre dois usuários, permitindo o transporte ordinário de dados (assim como a camada de transporte), porem com algum serviço refinado que podem ser úteis em algumas aplicações
* Controla os diálogos entre as aplicações dos sistemas locar e remoto (Exemplo do torrent)
* Também, pode agrupar dados em blocos e depois marca-los depois de enviados, caso haja uma interrupção na conexão, a próxima pderá recomeçar a partir do fim do último bloco enviado

## CAMADA DE APRESENTAÇÃO
* Prepara os dados em um domínio local e colocá-los em um formato compatível com procedimento de transporte.
* No caminho inverso, padroniza os diferentes tipos de dados de uma forma que qualquer aplicação possa ser  escrita para usar a rede
* Independente das implementações das 5 camadas inferiores
* Exemplo de serviços da camada de Apresentação
  * Criptografia e Compressão de dados
 
## CAMADA DE APLICAÇÃO
* Básicamente, o próprio aplicativo
* Exemplo: Navegador WEB
* Os aplicativos já estão na camada de Aplicação
* Possui protocolos commente necessários aos usuários como http, correio e transferencia de arquivos

# OUTRO SLIDE?

## TCP/IP
* No TCP agrupou as camadas do OSI em quatro camadas
* TCP/IP é formado por 4 camadas
 * Interface com a rede
 * Internet
 * Transporte
 * Aplicação
UDP - VELOCIDADE, ENTREGA MAIS RAPIDA, MANDA OS PACOTES E NAO TEM GERENCIA DE RECEPÇÃO, CHAMADA DE VIDEO, AO VIVO, NÃO ORIENTADO A CONEXAO
TCP - MAIS SEGURANÇA, PACOTE ESPERA CONFIRMACAO DE RECEBIMENTO DO PACOTE PARA MANDAR O PRÓXIMO, YOUTUBE, FILME, NETFLIX, ORIENTADO A CONEXAO

## Internet Protocol (IP)
* Responsável pelo endereçamento entre máquina de origem e máquina de destino
* Cada datagrama é independente dos outros datagramas trafegando na rede
 * Não são estabelecidas conexões lógicas na comunicação
