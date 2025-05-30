# Avaliação Semestral de Estruturas de Dados
## Conteúdo: Listas Alocadas Dinamicamente em C ou C++
* A partir de um programa em C ou C++ que possua 2 listas (lista1/listaA e lista2/listaB) de inteiros, totalmente aleatórias (com números entre 1 e 100). As listas podem ser de tamanhos distintos, mas que sejam maiores que 20 números
  * Faça um método que receba as duas listas e exiba os números que estão presentes em ambas.
  * Faça um método que exclua todos os números pares da lista1 ou listaA
  * Faça um método que una a lista1 ou listaA na lista2 ou listaB. Ou seja, todos os elementos da primeira lista devem vir primeiro dos elementos da segunda lista
  * Faça um método que receba o resultado da união da lista1 com a lista2 e aplique um método de ordenação
  * Faça um método que delete todos os elementos da lista criada da união entre lista1 e lista2.
  * Ao final, os códigos devem estar disponibilizados nos githubs pessoais e o link deve se enviado para alexz@ufn.edu.br com o assunto da mensagem ED CC.
* Critérios de avaliação:
  * Os códigos desenvolvidos devem estar no padrão ou no esquema utilizado nos códigos trabalhados em sala/aula;
  * Edentação e bom uso de variáveis

### Lista.h
```java
#include <cstdlib>

typedef struct no {
    int dado;
    struct no *prox;
} Celula;

Celula *inserir(int dado, Celula *lista) {
    Celula *novo = (Celula *)malloc(sizeof(Celula));

    novo->dado = dado;
    novo->prox = NULL;

    if(!lista) {
        return novo;
    }

    Celula *p;
    for (p = lista; p->prox != NULL; p = p->prox);

    p->prox = novo;
    return lista;
}

void exibirLista(Celula *lista) {
    for (Celula *p = lista; p != NULL; p = p->prox) {
        cout << p->dado << "\t";
    }
    cout << endl;
}


Celula *remover(int dado, Celula *lista) {
    Celula *p, *pR;
    for (p = lista, pR = NULL; p; pR = p, p = p->prox) {
        if (dado == p->dado) {
            if (p == lista) {
                lista = lista->prox;
                free(p);
                return lista;
            }
            if (!p->prox) {
                pR->prox = NULL;
                free(p);
                return lista;
            }
            pR->prox = p->prox;
            free(p);
            return lista;
        }
    }
    return lista;
}


Celula *removerPares(Celula *lista) {
    for (Celula *p = lista; p;) {
        if (p->dado % 2 == 0) {
            lista = remover(p->dado, lista);
            p = lista;
        } else {
            p = p->prox;
        }
    }
    return lista;
}

Celula* unirListas(Celula *listaA, Celula *listaB) {
    Celula *p;

    for (p = listaA; p->prox != NULL; p = p->prox);

    p->prox = listaB;

    return listaA;
}

void ordenarLista(Celula *listaAB){
    int tmp;
    bool houveTroca;
 
    do {
        houveTroca = false;
        for(Celula *p = listaAB; p->prox != NULL; p = p->prox) {
            if (p->dado > p->prox->dado) {
                tmp = p->dado;
                p->dado = p->prox->dado;
                p->prox->dado = tmp;
                houveTroca = true;
            }
        }
    } while (houveTroca);
}
```

### Lista.cpp
```java
#include <iostream>
#include <ctime>

using namespace std;

#include "Lista.h"

int main() {
    srand(time(NULL));

    Celula *listaA = NULL;
    Celula *listaB = NULL;
    Celula *listaAB = NULL;

    for (int i = 0; i < 20; i++) {
        listaA = inserir(rand()%100, listaA);
        listaB = inserir(rand()%100, listaB);
    }

    cout << "\n--- Mostrando os elementos da lista A ---\n";
    exibirLista(listaA);

    cout << "\n--- Mostrando os elementos da lista B ---\n";
    exibirLista(listaB);

    cout << "\n--- Mostrando a lista A sem os pares ---\n";
    listaA = removerPares(listaA);
    exibirLista(listaA);

    cout << "\n--- Mostrando a uniao da lista A com a lista B ---\n";
    listaAB = unirListas(listaA, listaB);
    exibirLista(listaAB);

    cout << "\n--- Mostrando a uniao da lista A e da lista B ordenada ---\n";
    ordenarLista(listaA);
    exibirLista(listaA);

    cout << "\n--- Removendo todos os elementos da uniao da lista A e Lista B ---\n";
    while(listaAB != NULL) {
        int valor = listaAB -> dado;
        listaAB = remover(valor, listaAB);
    }

    exibirLista(listaAB);

    return 0;
}
```
