#include <cstdlib>

typedef struct no {
    int dado;
    struct no *prox;
} Celula;

// REALIZANDO O ADD EM DE JAVA EM C++
Celula *inserir(int dado, Celula *lista) {
    // Alocar memóra
    Celula *novo = (Celula *)malloc(sizeof(Celula));

    // Depositar valores que vem do parâmetro
    novo->dado = dado;
    novo->prox = NULL;

    // Testar se é o primeiro elemento a ser inserido
    if (!lista)
    { // mesma coisa que if (lista == NULL)
        return novo;
    }

    // Percorrer a estrutura até o final
    Celula *p;
    for (p = lista; p->prox != NULL; p = p->prox)
        ;

    // Encadear e retornar
    p->prox = novo;
    return lista;
}

void exibir(Celula *lista) {
    for (Celula *p = lista; p != NULL; p = p->prox)
    {
        cout << p->dado << "\t";
    }
    cout << endl;
}

int contarLista(Celula *lista) {
    int total = 0;

    for (Celula *p = lista; p != NULL; p = p->prox) {
        total++;
    }
  
    return total;
}

bool estaNaLista (int dado, Celula *lista) {
    for (Celula *p = lista; p != NULL; p = p->prox) {
        if (dado == p->dado) {
            return true; // 1
        }
    }
    return false; // 0 ou não localizado;
}

int contarOcorrencias (int dado, Celula *lista) {
    int contador = 0;

    for (Celula *p = lista; p != NULL; p = p->prox) {
        if (dado == p->dado) {
            contador++; // Incrementa para cada ocorrencia
        }
    }

    return contador; // Retorna o total
}

bool verificaOrdenacaoCrescente(Celula *lista) {
    for (Celula *p = lista; p->prox != NULL; p = p->prox) {  // Percorre até o penúltimo elemento
        if (p->dado > p->prox->dado) {
            return false;
        }
    }

    return true;
}

bool verificaOrdenacaoDecrescente(Celula *lista) {
    for (Celula *p = lista; p->prox != NULL; p = p->prox) {
        if (p->dado < p->prox->dado) {
            return false;
        }
    }

    return true;
}

double calcularMedia(Celula *lista) {
    double media = 0.0;
    double soma = 0.0;
    double contador = 0.0;

    for (Celula *p = lista; p != NULL; p = p->prox) {
        soma += p->dado;
        contador++;
    }

    if (contador > 0) {
        media = soma / contador;
    }
    
    return media;
}