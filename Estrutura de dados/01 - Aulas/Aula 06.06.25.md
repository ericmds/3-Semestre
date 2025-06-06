# Árvores

* Entrar na árvore - empilhar
* Sair da árvore - desempilha
* Nó folha é o que não tem galho para direita nem esquerda
* Percurso
  * Pré-fixado ou RED (Visita raiz, vai esquerda, vai direita)
      * Utiliza quando quer localizar alguem, não possui ordenação 
      * Visita (Print) = 50
      * Vai esquerda = Tem algo, visita (print)
      * Vai esquerda = Não tem nada, vai direita, visita (print) 
  * In-fixado ou ERD (Vai esquerda, visita raiz, vai direita)
      * Utiliza na exibição, mostra ordenado 
  * Pós-fixado ou EDR (Vai esquerda, vai direita, visita raiz)
     * Utiliza quando quer apagar uma árvore
     * Vai podando pelo final
     * Percorre toda árvore para depois visitar
    
Árvores binárias de pesquisa ou Árvores binárias 

--

# Árvore
* Insere sempre no final da árvore
* 
## Percorrer um árvore
* Pré-fixado ou RED (visita raiz, vai esquerda, vai direita)
  * Utilizado para localizar, contar, inseri
  * Não possui ordenação
* In-fixado ou ERD (visita esquerda, visita raiz, vai direita)
  * Utilizado para exibir ordenado
  * Possui ordenação
* Pós-fixado ou EDR (vai esquerda, vai direita, visita raiz)
  * Utilizado para deletar, calcular fator balanceamento
  * Percorre todos os galhos e começa a visitar somente quando não achar nenhuma nó folha, ou seja, que não tem nenhum dado depos à esquerda ou direita

### Arvore.cpp
```cpp
#include <iostream>
#include <cstdlib>

using namespace std;

#include "arvore.h"

int main() {

    Arvore *arvore = NULL;
    arvore = inserir(50, arvore);
    arvore = inserir(35, arvore);
    arvore = inserir(40, arvore);
    arvore = inserir(60, arvore);

    exibirOrdenado(arvore);
    cout << "\nTotal de elementos: " << contar(arvore) << endl;
    cout << "Total de folhas: " << contarFolhas(arvore) << endl;
    exibirFolhas(arvore);

    return 1;
}

/* 
COMO SERIA ESSA ÁRVORE EM JAVA
TreeSet<Integer> arvore = new TreeSet<>();
arvore.add(50);
arvore.add(35);
arvore.add(40);
arvore.add(60);
for (TreeSet raiz : arvore) {
    System.out.println(raiz);
}
*/
```

### arvore.h
```h
typedef struct no {
    int dado;
    struct no *esq;
    struct no *dir;
} Arvore;

Arvore *inserir(int valor, Arvore *raiz) {
    if (raiz) { // Percurso pré-fixado ou RED
        // Percorrer ou pra esquerda ou para direita
        if (valor < raiz->dado) {
            // Ir para esquerda
            raiz->esq = inserir(valor, raiz->esq);
        } else {
            // Ir para direita
            raiz->dir = inserir(valor, raiz->dir);
        }
        return raiz;
    } else {
        Arvore *novo = (Arvore*) malloc (sizeof(Arvore));
        novo->dado = valor;
        novo->esq = NULL;
        novo->dir = NULL;
        return novo;
    }
}

void exibirOrdenado(Arvore *raiz) {
    if (raiz) { // Percurso in-fixado ou ERD
        exibirOrdenado(raiz->esq);
        cout << raiz->dado << "\t";
        exibirOrdenado(raiz->dir);
    }
}

int contar(Arvore *raiz) {
    if(raiz) {
        return 1 + contar(raiz->esq) + contar(raiz->dir);
    } else {
        return 0;
    }
}

int somar(Arvore *raiz) {
    if(raiz) {
        return raiz->dado + contar(raiz->esq) + contar(raiz->dir);
    } else {
        return 0;
    }
}

int contarPares(Arvore *raiz) {
    if (raiz) {
        if (raiz->dado % 2 == 0) {
            return 1 + contarPares(raiz->esq) + contarPares(raiz->dir);
        }
        return 0 + contarPares(raiz->esq) + contarPares(raiz->dir);
    }
    return 0;
}

int contarFolhas(Arvore* raiz) {
    if (raiz) {
        if (!raiz->esq && !raiz->dir) {
            return 1;  // É uma folha
        }   
    return contarFolhas(raiz->esq) + contarFolhas(raiz->dir);
    }
    return 0;
}

void exibirFolhas(Arvore *raiz) {
    if (raiz) { // Se raiz existe
        if (!raiz->esq && !raiz->dir) {
            cout << raiz->dado << "\t";
        } else {
            exibirFolhas(raiz->esq);
            exibirFolhas(raiz->dir);
        }
    }
}

bool localizar(int valor, Arvore *raiz) {
    if(raiz) {
        if(valor == raiz->dado) {
            return true;
        }
        if (valor < raiz->dado) { // Percorrer para a esquerda
            return localizar(valor, raiz->esq);
        } else { // Percorrer para a direita
            return localizar(valor, raiz->dir);
        }
    }
    return false;
}
```
