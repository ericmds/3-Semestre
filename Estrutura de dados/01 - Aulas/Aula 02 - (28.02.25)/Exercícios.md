# Exercícios
1) Descobrir a diferença em java de Vector, ArrayList e LinkedList e construir exemplos
2) Qual a diferença de banco de dados e sistemas gerenciadores de banco de dados (SGBD)
3) O que são SGBD relacionais e SGBD não relacionais

---

## 1) Descobrir a diferença em java de Vector, ArrayList e LinkedList e construir exemplos
### ArrayList
* Como funciona?
 * Internamente usa um array dinâmico.
 * Acesso rápido por índice (O(1)) porque os elementos ficam em posições contíguas na memória.
 * Inserções e remoções no fim são rápidas (O(1)).
 * Inserções e remoções no meio são lentas (O(n)), pois exige deslocamento dos elementos.
* Quando usar?
 * Quando há muitas operações de leitura (busca por índice).
 * Quando as inserções/remoções forem sempre no final da lista.
 * Exemplo: Lista de produtos em um carrinho de compras.
