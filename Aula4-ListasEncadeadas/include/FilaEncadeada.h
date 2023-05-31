#ifndef FILAENCADEADA_H
#define FILAENCADEADA_H

#include "Elemento.h"

class FilaEncadeada
{
    public:
        FilaEncadeada();
        ~FilaEncadeada();

        void Enfileirar(int _dados);
        int Desenfileirar();
        int FilaVazia();

    protected:
        Elemento* cabeca;

    private:
};

#endif // FILAENCADEADA_H
