#ifndef CIRCULO_H
#define CIRCULO_H

#include <Poligono.h>


class Circulo : public Poligono
{
    public:
        Circulo();
        virtual ~Circulo();

        virtual void Desenhar();

    protected:

    private:
};

#endif // CIRCULO_H
