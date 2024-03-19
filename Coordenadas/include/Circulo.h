#ifndef CIRCULO_H
#define CIRCULO_H

#include "Coordenada.h"

class Circulo
{
    public:
        Circulo(float _raio);
        Circulo(Coordenada _centro, float _raio);

        virtual ~Circulo();

        float calcularDistancia(Circulo outro);

        Coordenada centro;
        float raio;

    protected:

    private:
};

#endif // CIRCULO_H
