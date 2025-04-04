# Exercícios
## 1) Em C#, fazer um programa que roda um lista, nessa lista precisa:
* Guardar nomes completos, 
* Transformar todos em maiúsculo, 
* Ordena-los
* Verificar se não existe nomes repitidos, se houver, mostar uma mensagem de erro
* Mostrar a quantidade de números cadastrados
* Dar a opção para continuar ou encerrrar

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

### Em JAVA
```java
import java.util.ArrayList;
import java.util.List;
import java.util.Random;

public class Glicemia {
    public static void main(String[] args) {
        Random gerador = new Random();

        // Gerando o tamanho da lista entre 10 e 20
        int tamanho = gerador.nextInt(10,21); // Lembra de colocar sempre +1 no final
        System.out.println("O tamanho da lista de glicemia: " + tamanho);
        
        List<Integer> listaGlicemia = new ArrayList<>();

        // Gerando valores de glicemia aleatórios de 50 e 240
        for (int i=0; i<tamanho; i++) {
            listaGlicemia.add(gerador.nextInt(50,241)); // Lembra de colocar sempre +1 no final
        }
        
        listaGlicemia.sort(null);

        // Exibindo valores gerados
        System.out.println("Valores gerados: " + listaGlicemia);

        // Calcular media
        double soma = 0;
        for (int numero : listaGlicemia) {
            soma += numero; // Calculo da soma
        }
        double media = soma / tamanho; // Usaria (media = soma / listaGlicemia.size()) caso o tamanho da lista fosse dita pelo usuario
        System.out.println("MEDIA: " + media);

        // Calcular mediana
       double mediana;
       if (tamanho % 2 == 0) {
        int meio = tamanho / 2;
        int meio2 = tamanho / 2 - 1;
        mediana = (listaGlicemia.get(meio) + listaGlicemia.get(meio2)) / 2.0; // Se for par pega os dois valores do meio, soma e divide por 2.0(double)
       } else {
        mediana = listaGlicemia.get(tamanho / 2); // Se for impar pega o valor exato do meio
       }
       System.out.println("MEDIANA: " +mediana);

       // Calcular moda
       int moda = 0, ocorrenciaModa = 0;
       for (int valorAvaliado : listaGlicemia) { // Escolhe um valor na lista para ser avaliado
        int ocorrenciaAvaliado = 0; // Para contar quantas vezes o valorAvaliado aparece
        for (int num : listaGlicemia) { // Conta quantas vezes esse unemro aparece na lista
            if (valorAvaliado == num) {
                ocorrenciaAvaliado++; // ++ se encontra o mesmo número
            }
        }
        if (ocorrenciaAvaliado > ocorrenciaModa) { // Se ocorrenciaAvaliado for maior do que a ocorrenciaModa atual
            moda = valorAvaliado; // Atualiza moda para valorAvaliado
            ocorrenciaModa = ocorrenciaAvaliado; // Atualiza ocorrenciaModa para ocorrenciaAvaliado
        }
       }
        
       if (ocorrenciaModa > 1) {
        System.out.println("MODA: " + moda);
       } else {
        System.out.println("NAO HA MODA");
       }

    }
}
```

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
import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Random;
import java.util.Set;

public class Valores {
    public static void main(String[] args) {
        int n  = 10; // Defina o tamanho das listas
        
         // Criando dois conjuntos (Set) para armazenar números únicos
         Set<Integer> set1 = new HashSet<>();
         Set<Integer> set2 = new HashSet<>();
         Random gerador = new Random(); // Objeto para gerar números aleatórios

        // Preenche set1 com números aleatórios únicos de 0 a 100
        while (set1.size() < n) {
            set1.add(gerador.nextInt(101));
        }
        
        // Preenche set2 com números aleatórios únicos de 0 a 100
        while (set2.size() < n) {
            set2.add(gerador.nextInt(101));
        }
        
        // Converte os conjuntos para listas para facilitar a manipulação e exibição
        List<Integer> lista1 = new ArrayList<>(set1);
        List<Integer> lista2 = new ArrayList<>(set2);
        List<Integer> lista3 = new ArrayList<>();

        // Percorre lista1 e verifica quais elementos também estão em lista2
        for (int num : lista1) {
            if (lista2.contains(num)) { // Se o número estiver em ambas as listas, adiciona a lista3
                lista3.add(num);
            } 
        }

        // Exibe as listas geradas no console
        System.out.println("Lista 1: " + lista1);
        System.out.println("Lista 2: " + lista2);
        
        // Verifica se lista3 está vazia e exibe um aviso caso não haja números em comum
        if (lista3.isEmpty()) {
            System.out.println("Lista 3: [A lista 1 e 2 nao possuem numeros em comum]");
        } else {
            System.out.println("Lista 3: " + lista3);
        }
    }
}
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
