#include "ListaEncadeada.h"
#include <iostream>

using namespace std;

ListaEncadeada::ListaEncadeada()
{
    //ctor
    //cabeca = (Elemento*) malloc( sizeof(Elemento));
    //cabeca->prox = NULL;

    cabeca = new Elemento(); //o new equivale a uma versão C++ do malloc: o new além de alocar a memória, também chama o construtor do objeto
    //Observe que o construtor sem parâmetros define o valor para 0 e o ponteiro para o próximo para NULL
}

ListaEncadeada::~ListaEncadeada()
{
    //dtor
    Elemento* aux = cabeca;

    while (aux != NULL)
    {
        Elemento* prox = aux->prox;
        //free(aux);
        delete(aux); //o delete é a versão C++ do free, com uma diferença: o delete chama o destrutor do objeto antes de liberar a memória ocupada
        aux = prox;
    }
}

void ListaEncadeada::InserirPrimeira(int _dados)
{
    Elemento* novo = new Elemento(_dados);
    novo->prox = cabeca->prox;
    cabeca->prox = novo;
}

void ListaEncadeada::InserirUltima(int _dados)
{
    Elemento* aux = cabeca;

    while (aux->prox != NULL)
        aux = aux -> prox;

    Elemento* novo = new Elemento(_dados);
    novo->prox = NULL;
    aux->prox = novo;
}

int ListaEncadeada::Remover(int _dados)
{
    Elemento* ant = cabeca;
    Elemento* aux = cabeca->prox;

    while (aux != NULL && aux->dados != _dados)
    {
        ant = aux;
        aux = aux -> prox;
    }

    if (aux != NULL)
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

Elemento* ListaEncadeada::Buscar(int _dados)
{
    Elemento* aux = cabeca->prox;

    while (aux != NULL && aux->dados != _dados)
        aux = aux -> prox;

    return aux;
}

void ListaEncadeada::Imprimir()
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
