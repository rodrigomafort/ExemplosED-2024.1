#ifndef LISTAENCADEADA_H
#define LISTAENCADEADA_H

#include "Elemento.h"
#include "stdlib.h"

class ListaEncadeada
{
    public:
        ListaEncadeada();
        virtual ~ListaEncadeada();

        void InserirPrimeira(int _dados);
        void InserirUltima(int _dados);
        int Remover(int _dados);
        Elemento* Buscar(int _dados);

        void Imprimir();

    protected:
        Elemento* cabeca;
    private:

};

#endif // LISTAENCADEADA_H
