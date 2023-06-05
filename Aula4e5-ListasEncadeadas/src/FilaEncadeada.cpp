#include "FilaEncadeada.h"
#include <string>
#include <iostream>

FilaEncadeada::FilaEncadeada()
{
    //ctor
    cabeca = new Elemento();
}

FilaEncadeada::~FilaEncadeada()
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

void FilaEncadeada::Enfileirar(int _dados)
{
    Elemento* aux = cabeca;

    while (aux->prox != NULL)
        aux = aux -> prox;

    Elemento* novo = new Elemento(_dados);
    novo->prox = NULL;
    aux->prox = novo;
}

int FilaEncadeada::Desenfileirar()
{
    if (FilaVazia() == 0)
    {
        Elemento* rem = cabeca->prox;
        cabeca->prox = rem->prox;

        int retorno = rem->dados;
        delete(rem);
        return retorno;
    }
    else
    {
        throw std::runtime_error("Fila Vazia!");
    }
}

int FilaEncadeada::FilaVazia()
{
    if (cabeca->prox != NULL)
        return 0;
    else
        return 1;
}
