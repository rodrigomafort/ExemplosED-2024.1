#include "FilaEncadeadaV2.h"
#include <string>
#include <iostream>

FilaEncadeadaV2::FilaEncadeadaV2()
{
    //ctor
    cabeca = new Elemento();

    rabo = new Elemento();
    rabo->prox = cabeca;
}

FilaEncadeadaV2::~FilaEncadeadaV2()
{
    //dtor
    Elemento* aux = cabeca;

    while (aux != NULL)
    {
        Elemento* prox = aux->prox;
        delete(aux);
        aux = prox;
    }

    delete(rabo);
}


void FilaEncadeadaV2::Enfileirar(int _dados)
{
    Elemento* novo = new Elemento(_dados);

    rabo->prox->prox = novo;
    rabo->prox = novo;
}

int FilaEncadeadaV2::Desenfileirar()
{
    if (FilaVazia() == 0)
    {
        Elemento* rem = cabeca->prox;
        cabeca->prox = rem->prox;

        int retorno = rem->dados;
        delete(rem);

        if (cabeca->prox == NULL)
            rabo->prox = cabeca;

        return retorno;
    }
    else
    {
        throw std::runtime_error("Fila Vazia!");
    }
}

int FilaEncadeadaV2::FilaVazia()
{
    if (cabeca->prox != NULL)
        return 0;
    else
        return 1;
}

