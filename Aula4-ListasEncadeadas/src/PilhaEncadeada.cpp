#include "PilhaEncadeada.h"
#include <string>
#include <iostream>

PilhaEncadeada::PilhaEncadeada()
{
    //ctor
    cabeca = new Elemento();
}

PilhaEncadeada::~PilhaEncadeada()
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

void PilhaEncadeada::Empilhar(int _dados)
{
    Elemento* novo = new Elemento(_dados);
    novo->prox = cabeca->prox;
    cabeca->prox = novo;
}

int PilhaEncadeada::Desempilhar()
{
    if (PilhaVazia() == 0)
    {
        Elemento* rem = cabeca->prox;
        cabeca->prox = rem->prox;

        int retorno = rem->dados;
        delete(rem);
        return retorno;
    }
    else
    {
        throw std::runtime_error("Pilha Vazia!");
    }
}

int PilhaEncadeada::PilhaVazia()
{
    if (cabeca->prox != NULL)
        return 0;
    else
        return 1;
}
