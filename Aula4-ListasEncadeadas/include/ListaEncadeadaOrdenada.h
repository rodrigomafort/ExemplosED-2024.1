#ifndef LISTAENCADEADAORDENADA_H
#define LISTAENCADEADAORDENADA_H

#include "Elemento.h"

class ListaEncadeadaOrdenada
{
    public:
        ListaEncadeadaOrdenada();
        virtual ~ListaEncadeadaOrdenada();

        void Inserir(int _dados);
        int Remover(int _dados);
        Elemento* Buscar(int _dados);
        void Imprimir();

    protected:
        Elemento* cabeca;

    private:

};

#endif // LISTAENCADEADAORDENADA_H
