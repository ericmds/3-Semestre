# Exercícios
## 1) Em C#, fazer um programa que roda um lista, nessa lista precisa:
* Guardar nomes completos, 
* Transformar todos em maiúsculo, 
* Ordena-los
* Verificar se não existe nomes repitidos, se houver, mostar uma mensagem de erro
* Mostrar a quantidade de números cadastrados
* Dar a opção para continuar ou encerrrar

### Em JAVA
```java

```

### Em C#
```c#
1) Fazer um programa que roda um lista, nessa lista precisa:
    a) Guardar nomes completos, 
    b) Transformar todos em maiúsculo, 
    c) Ordena-los
    d) Verificar se não existe nomes repitidos, se houver, mostar uma mensagem de erro
    e) Mostrar a quantidade de números cadastrados
    f) Dar a opção para continuar ou encerrrar
*/

List<string> listaNomes = new List<string>(); // Criar lista

// Inserir nomes
string opcao; // variavel para opcoes
string nome; // variavel para nome

do
{
    Console.WriteLine("Digite um nome completo:");
    nome = Console.ReadLine(); // Lendo os nomes
    nome = nome.ToUpper(); // Transformando em maiúsculas

    if (!listaNomes.Contains(nome)) // Verificando se o nome já esta na lista
    {
        listaNomes.Add(nome); // Se não está vai adicionar na lista
    } else
    {
        Console.WriteLine("Nome já cadastrado");
    }
    Console.WriteLine(" 1 - Continuar; 2 - Finalizar"); // Opção de continuar para o usuario
    opcao = Console.ReadLine();


} while (opcao != "2");

listaNomes.Sort(); // Ordenando a lista em ordem alfabética
Console.WriteLine("A lista contem: " + listaNomes.Count); // Mostrando quantos nomes contem na lista
foreach(var i in listaNomes) // Mostrando a lista
{
    Console.WriteLine(i);
}
```

## 2) Gerar valores aleatórios (n valores) de glicemia aleatórios entre 50 e 240
* Aplicar a média
* Aplicar a mediana
  * Ordenar
  * Capturar o valor do meio
* Aplicar a moda

### Em JAVA
```java

```

### Em C#
```c#
/* 2) Gerar valores aleatórios (n valores) de glicemia aleatórios entre 50 e 240
     a) Aplicar a média
     b) Aplicar a mediana
        ↳ Ordenar
        ↳ Capturar o valor do meio
     c) Aplicar a moda
*/

using static System.Runtime.InteropServices.JavaScript.JSType;

List<int> listaGlicemia = new List<int>(); // Criando lista para a glicemia
Random gerador = new Random(); // Definindo gerador

int quantidade = gerador.Next(10,20); // Definindo quantidade aleatória entre 10 e 20
for (int i = 0; i < quantidade; i++)
{
    listaGlicemia.Add(gerador.Next(50,240)); // Adicionar na lista números entre 50 e 240
}

listaGlicemia.Sort(); // Ordenar a lista

Console.WriteLine("*** Valores de glicemia ***");
var item = listaGlicemia.GetEnumerator();
while (item.MoveNext())
{
    int numero = item.Current;
    Console.WriteLine(numero);
}

Console.WriteLine("\nA lista de glicemia contém: " +listaGlicemia.Count + " valores");

// Media
double soma = 0, media;
foreach (int i in listaGlicemia)
{
    soma += i;
}
media = soma / quantidade;
Console.WriteLine("A média de todas as glicemia é: "+media);

// Mediana
```

## 3) Fazer listas:
* Lista 1
  * n números aleatórios tamanho n
  * 0 a 100
  * sem repetidos
* Lista 2
  * com n números aleatórios tamanho n
  * 0 a 100
  * sem repetidos
* Lista 3
  * números comuns nas duas listas

### Em JAVA
```java

```


### Em C#
```c#

```
