#ifndef PILHAENCADEADA_H
#define PILHAENCADEADA_H

#include "Elemento.h"

class PilhaEncadeada
{
    public:
        PilhaEncadeada();
        virtual ~PilhaEncadeada();

        void Empilhar(int _dados);
        int Desempilhar();

        int PilhaVazia();

    protected:
        Elemento* cabeca;
    private:
};

#endif // PILHAENCADEADA_H
