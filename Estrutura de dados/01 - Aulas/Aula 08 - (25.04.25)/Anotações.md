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
        * Inserir no final/cauda → add, offer (mesma coisa que add, as serve para identificar fila)
        * Remover no inicio/cabeça → remove, 
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

Clasee Processo - JAVA
```java
package Fila;

import java.util.Objects;

public class Processo {
	int id;
	String descricao;

	/***
	 * Construtor de processo
	 * 
	 * @param id        - inteiro com número aleatorio entre 1 e 1000
	 * @param descricao - explicação do processo
	 */

	public Processo(int id, String descricao) {
		super();
		this.id = id;
		this.descricao = descricao;
	}

	public int getId() {
		return id;
	}

	public void setId(int id) {
		this.id = id;
	}

	public String getDescricao() {
		return descricao;
	}

	public void setDescricao(String descricao) {
		this.descricao = descricao;
	}

	@Override
	public String toString() {
		return "Processo [Id = " + id + ", Descricao = " + descricao + "]";
	}

	@Override
	public boolean equals(Object obj) {
		if (this == obj)
			return true;
		if (obj == null)
			return false;
		if (getClass() != obj.getClass())
			return false;
		Processo other = (Processo) obj;
		return Objects.equals(descricao, other.descricao) && id == other.id;
	}

}
```

Classe Principal - JAVA
```java
package Fila;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Random;

public class Principal {
	/***
	 * Método estático ou de Classe responsável por gerar processos aleatórios entre 1 a 1000
	 * distribuindo em duas filas
	 * @param filaPrioritaria - Fila prioritária (números abaixo de 500)
	 * @param filaNormal - Fila normal (números acima de 500)
	 * @param quantidadeProcessos - Gerador de números para os processos
	 */
	public static void gerarProcessosEmFila(Queue<Processo> filaPrioritaria, Queue<Processo> filaNormal, int quantidadeProcessos) {
		Random gerador = new Random();

		int numeroProcessoGerado;

		// Rotina para gerar 10000 processos entre 1 e 10000
		for (int i = 0; i < quantidadeProcessos; i++) {
			numeroProcessoGerado = gerador.nextInt(0, 1001);

			switch (numeroProcessoGerado) {
			case 0:
				// Rotina para retirar da fila prioritaria
				System.out.println("ATENDENDO: " + filaPrioritaria.poll());
				break;
			case 500:
				// Rotina para retirar da fila normal
				System.out.println("ATENDENDO: " + filaNormal.poll());
				break;

			default:
				// Rotina para inserir processo na fila de prioritaria
				if (numeroProcessoGerado < 500) {
					Processo processoTMP = new Processo(numeroProcessoGerado, "Processo de alta prioridade");
					if (!filaPrioritaria.contains(processoTMP)) {
						filaPrioritaria.offer(processoTMP);
						System.out.println(processoTMP);
					}
					// Rotina para inserir processo na fila normal
				} else {
					Processo processoTMP = new Processo(numeroProcessoGerado, "Processo normal");
					if (!filaNormal.contains(processoTMP)) {
						filaNormal.offer(processoTMP);
						System.out.println(processoTMP);
					}
					break;
				}
			}
		}
	}

	/***
	 * Método estático que exibe processos existentes em fila
	 * @param fila - Contem uma fila normal ou prioritária
	 * @param frase - Texto a ser exibido no cabeçalho de exibição ou listagem
	 */
	public static void exibirProcessosNaoAtendidos(Queue<Processo> fila, String frase) {
		System.out.println(frase);
		System.out.println("Total de processos não atendidos: " + fila.size());

		for (Processo processo : fila) {
			System.out.println(processo);
		}
	}

	public static void main(String[] args) {

		Queue<Processo> filaPrioritaria = new LinkedList<>();
		Queue<Processo> filaNormal = new LinkedList<>();

		gerarProcessosEmFila(filaPrioritaria, filaNormal, 1000);
		exibirProcessosNaoAtendidos(filaPrioritaria, "\nFila Prioritária");
		exibirProcessosNaoAtendidos(filaNormal, "\nFila Normal");

	}
}

```

---

Classe Processo - C#
```cs
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Fila
{
    internal class Processo
    {
        /// <summary>
        /// Identificador do processo
        /// </summary>
        public int Id { get; set; }
        /// <summary>
        /// Texto que classifica o processo
        /// </summary>
        public string Descricao { get; set; }

        /// <summary>
        /// Construtor que recebe um identificador e uma descrição
        /// </summary>
        /// <param name="id">Um número entre 1 e 1000</param>
        /// <param name="descricao">Um texto que classifica o processo</param>
        public Processo(int id, string descricao)
        {
            Id = id;
            Descricao = descricao;
        }
        public override string? ToString()
        {
            return base.ToString();
        }

        public override bool Equals(object? obj)
        {
            return base.Equals(obj);
        }

    }
}
```

Classe Principal - C#
```cs
namespace Fila
{
    internal class Principal
    {

        public static void gerarProcessosEmFila(Queue<Processo> filaPrioritaria, Queue<Processo> filaNormal, int quantidadeProcessos)
        {
            Random gerador = new Random();
            int numeroProcessoGerado;

            //Rotina para gerar 1000 processos entre 1 e 1000
            for (int i = 0; i < quantidadeProcessos; i++)
            {
                numeroProcessoGerado = gerador.Next(0, 1001);

                switch (numeroProcessoGerado)
                {
                    case 0:
                        //Rotina para retirar da fila prioritária
                        Console.WriteLine("ATENDENDO: " + filaPrioritaria.Dequeue());
                        break;
                    case 500:
                        //Rotina para retirar da fila normal
                        Console.WriteLine("ATENDENDO: " + filaNormal.Dequeue());
                        break;
                    default:
                        //Rotina para inserir processo na fila prioritaria
                        if (numeroProcessoGerado < 500)
                        {
                            Processo processoTMP = new Processo(numeroProcessoGerado, "Processo de alta prioridade");
                        }
                        break;



                


                }
            }
        }

        static void Main(string[] args)
        {
            Console.WriteLine("Hello, World!");
        }
    }
}
```
