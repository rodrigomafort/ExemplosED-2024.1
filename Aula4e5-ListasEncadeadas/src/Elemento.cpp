#include "Elemento.h"

Elemento::Elemento(int _dados)
{
    dados = _dados;
    prox = NULL;
    //ctor
}

Elemento::Elemento()
{
    dados = 0;
    prox = NULL;
    //ctor
}

Elemento::~Elemento()
{
    //dtor
}
