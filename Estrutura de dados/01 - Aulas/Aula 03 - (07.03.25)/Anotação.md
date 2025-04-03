# Aula com exercícios
## Relembrando - JAVA
#### LISTA
  * Inserir
  * add
  * Add
  * append
  * insert
  * pushback
  * localizar
    
### PERCORRER  
#### Índice
```java
for (int i= 0; i< lista.size(); i++) {

}
```

#### Objeto
```java
for (Integer i : lista) {

}
```

#### Interação
```java
while (i.hasNext()) {
    System.out.println(i.next())
        if (i.next() % 2 == 0) {
            lista.remove(i);
        }
}
```
## Lista em C#
```C#
List<int> lista = new List<int>(); // Criando lista
Random gerador = new Random(); // Definindo gerador

int quantidade = gerador.Next(10,20); // Definir quantidade dos números aleatório
for (int i = 0; i < quantidade; i++)
{
    lista.Add(gerador.Next(1000)); // Adicionar na lista números de 0 a 1000
}

lista.Sort(); // Ordenar a lista

/* 
 
// Percorrer por índice
for (int i = 0;i < lista.Count;i++)
{
    Console.WriteLine(lista[i]); // Exibir no console
}

// Percorrer por foreach (Objeto)
foreach (var i in lista)
{
    Console.WriteLine(i);
}

*/

// Percorrer por Iterator
var item = lista.GetEnumerator();
while (item.MoveNext())
{
    int numero = item.Current;
    Console.WriteLine(numero);
}
```

