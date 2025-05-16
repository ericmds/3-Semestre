#include <iostream>

using namespace std;

#include "lista.h"

int main() {
    // LISTA É DO TIPO PONTEIRO DE CÉLULA
    Celula *lista = NULL;


    lista = inserir(5, lista);
    lista = inserir(5, lista);
    lista = inserir(6, lista);

    cout << "\nMostrando os elementos da lista\n";
    exibir(lista);

    cout << "A lista contem " << contarLista(lista) << " elementos\n";

    int numero;
    cout << "\nDigite numero para pesquisa: ";
    cin >> numero;

    cout << numero << " esta na lista? " << estaNaLista(numero, lista) << endl;

    // Contar ocorrências de um número
    cout << "Digite um numero para contar as suas ocorrencias: ";
    cin >> numero;

    cout << numero << " aparece " << contarOcorrencias(numero, lista) << " vezes" << endl;

    // Verificar se a lista está ou não ordenada
    cout << "Verificando ordenacao da lista" << endl;
    if (verificaOrdenacaoCrescente(lista) == 1) {
        cout << "A lista esta ordenada em ordem crescente";
    }

    if (verificaOrdenacaoDecrescente(lista) == 1) {
        cout << "A lista esta ordenada em ordem decrescente";
    }
    
    // Calcular a média dos elementos da lista
    cout << "\nA media da soma da lista e " << calcularMedia(lista) << endl;

    // Alterar o inserir para que controle duplicados - Ou seja, proiba cadastro de replicados
    

    // Criar um método de ordenação da lista encadeada


    return 1;
}


// dir
//  g++ .\lista.cpp -o roda
//  .\roda.exe