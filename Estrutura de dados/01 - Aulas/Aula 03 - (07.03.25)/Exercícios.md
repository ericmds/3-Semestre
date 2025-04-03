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

### Em C#
```c#
using System.Net.Mime;

Console.WriteLine("GLICEMIA");

Random random = new Random();
//GERAR QUANTOS VALORES DE GLICEMIA SERAM GERADOS
int ninteiro = random.Next(1, 15);
Console.WriteLine("Número gerado: " + ninteiro);

//GERAR VALORES DE GLICEMIA E ADICIONA-LOS NA LISTA numeros
int glicemia;

List<int> numeros = new List<int>();

for (int i = 0; i < ninteiro; i++)
{
    glicemia = random.Next(50, 240);
    numeros.Add(glicemia);
    /* if (!numeros.Contains(glicemia))
     {
         numeros.Add(glicemia);
     }*/

}
//MOSTRAR OS VALORES DE GLICEMIA
foreach (var i in numeros)
{
    Console.WriteLine(i);
}

//CALCULO DA MÉDIA
double media, soma = 0;
foreach (var i in numeros)  //percorre a lista
{
    soma = soma + i;

}
media = soma / ninteiro;
Console.WriteLine("MEDIA: " + media.ToString("N2"));

//calculo da mediana
double mediana;
numeros.Sort();
/*Console.WriteLine("A lista contem " + numeros.Count());
foreach (var i in numeros)
{
    Console.WriteLine(i);
}*/
if (ninteiro % 2 == 0)
{
    int meio = ninteiro / 2;
    int meio2 = ninteiro / 2 - 1;

    mediana = (double)(numeros[meio] + numeros[meio2]) / 2;
}
else
{
    int meioo = ninteiro / 2;
    mediana = (double)numeros[meioo];
}
Console.WriteLine("MEDIANA : " + mediana);

//calculo da moda - zamberlan
int valorAvaliado, ocorrenciaAvaliado, moda = 0, ocorrenciaModa = 0;
foreach (var i in numeros)
{
    valorAvaliado = i;
    ocorrenciaAvaliado = 0;
    foreach (var j in numeros)
    {
        if (valorAvaliado == j)
        {
            ocorrenciaAvaliado++;
        }

    }
    if (ocorrenciaAvaliado > ocorrenciaModa)
    {
        moda = valorAvaliado;
        ocorrenciaModa = ocorrenciaAvaliado;
    }
}

if (ocorrenciaModa > 1)
{
    Console.WriteLine("MODA = " + moda);
}
else
{
    Console.WriteLine("NÃO HÁ MODA");
}
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
using System.Net.Mime;

Random random = new Random();   

//LISTA 1
int l1 = random.Next(1,10);
Console.WriteLine("LISTA 1: "+l1);

List<int> lista1 = new List<int>();
int numeros_l1;
for (int i = 0; i < l1; i++)
{
    numeros_l1 = random.Next(0, 20);
    lista1.Add(numeros_l1);
    
}
foreach (var i in lista1)
{
    Console.WriteLine(i);
}
//LISTA 2
int l2 = random.Next(1, 10);
Console.WriteLine( );
Console.WriteLine("LISTA 2 :"+l2);

List<int> lista2 = new List<int>();
int numeros_L2;

for (int i = 0; i < l2; i++)
{
    numeros_L2 = random.Next(0, 20);
    lista2.Add(numeros_L2);

}
foreach (var i in lista2)
{
    Console.WriteLine(i);
}

List<int> lista3 = lista1.Intersect(lista2).ToList();
Console.WriteLine("lista 3 ");

if (lista3.Count > 0)
{
    foreach (var i in lista3)
    {
        Console.WriteLine(i);
    }
}
else
{
    Console.WriteLine("Não há números em comum.");
}
```
