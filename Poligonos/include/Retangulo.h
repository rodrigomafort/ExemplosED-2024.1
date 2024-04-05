#ifndef RETANGULO_H
#define RETANGULO_H

#include <Poligono.h>


class Retangulo : public Poligono
{
    public:
        Retangulo();
        virtual ~Retangulo();

        virtual void Desenhar();

    protected:

    private:
};

#endif // RETANGULO_H
