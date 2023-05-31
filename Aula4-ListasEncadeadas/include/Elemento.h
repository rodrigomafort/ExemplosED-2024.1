#ifndef ELEMENTO_H
#define ELEMENTO_H

#include <iostream>

class Elemento
{
    public:
        Elemento(int _dados);
        Elemento();
        virtual ~Elemento();

        int dados;
        Elemento* prox;
    protected:
    private:
};

#endif // ELEMENTO_H
