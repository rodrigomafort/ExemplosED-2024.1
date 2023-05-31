#include "ListaEncadeadaOrdenada.h"

#include <iostream>

using namespace std;

ListaEncadeadaOrdenada::ListaEncadeadaOrdenada()
{
    //ctor
    cabeca = new Elemento();
}

ListaEncadeadaOrdenada::~ListaEncadeadaOrdenada()
{
    //dtor
    Elemento* aux = cabeca;

    while (aux != NULL)
    {
        Elemento* prox = aux->prox;
        delete(aux);
        aux = prox;
    }
}

void ListaEncadeadaOrdenada::Inserir(int _dados)
{
    Elemento* ant = cabeca;
    Elemento* aux = cabeca->prox;

    while (aux != NULL && aux->dados < _dados)
    {
        ant = aux;
        aux = aux -> prox;
    }

    Elemento* novo = new Elemento(_dados);
    novo->prox = aux;
    ant->prox = novo;
}

int ListaEncadeadaOrdenada::Remover(int _dados)
{
    Elemento* ant = cabeca;
    Elemento* aux = cabeca->prox;

    while (aux != NULL && aux->dados < _dados)
    {
        ant = aux;
        aux = aux -> prox;
    }

    if (aux != NULL && aux->dados == _dados)
    {
        ant->prox = aux->prox;
        delete(aux);
        return 1;
    }
    else
    {
        return 0;
    }
}

Elemento* ListaEncadeadaOrdenada::Buscar(int _dados)
{
    Elemento* aux = cabeca->prox;

    while (aux != NULL && aux->dados < _dados)
        aux = aux -> prox;

    if (aux != NULL && aux->dados == _dados)
        return aux;
    else
        return NULL;
}

void ListaEncadeadaOrdenada::Imprimir()
{
    cout << "{ ";
    Elemento* aux = cabeca->prox;
    while (aux != NULL)
    {
        if (aux->prox != NULL)
            cout << aux->dados << ", ";
        else
            cout << aux->dados;
        aux = aux->prox;
    }
    cout << " }" << endl;
}
