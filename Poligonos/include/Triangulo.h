#ifndef TRIANGULO_H
#define TRIANGULO_H

#include <Poligono.h>


class Triangulo : public Poligono
{
    public:
        Triangulo();
        virtual ~Triangulo();

        virtual void Desenhar();

    protected:

    private:
};

#endif // TRIANGULO_H
