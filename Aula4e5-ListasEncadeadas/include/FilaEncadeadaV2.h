#ifndef FILAENCADEADAV2_H
#define FILAENCADEADAV2_H

#include "Elemento.h"

class FilaEncadeadaV2
{
    public:
        FilaEncadeadaV2();
        ~FilaEncadeadaV2();

        void Enfileirar(int _dados);
        int Desenfileirar();
        int FilaVazia();

    protected:
        Elemento* cabeca;
        Elemento* rabo;

    private:
};

#endif // FILAENCADEADAV2_H
