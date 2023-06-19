#ifndef QUADRADO_H
#define QUADRADO_H

#include <Poligono.h>


class Quadrado : public Poligono
{
    public:
        Quadrado();
        virtual ~Quadrado();

        virtual void Desenhar();

    protected:

    private:
};

#endif // QUADRADO_H
