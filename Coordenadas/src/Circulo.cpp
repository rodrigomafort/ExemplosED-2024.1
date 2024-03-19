#include "Circulo.h"
#include <stdlib.h>
#include <math.h>

Circulo::Circulo(float _raio)
{
    raio = _raio;
}

Circulo::Circulo(Coordenada _centro, float _raio)
{
    centro.x = _centro.x;
    centro.y = _centro.y;
    raio = _raio;
}

float Circulo::calcularDistancia(Circulo outro)
{
    float d = centro.calcularDistancia(outro.centro);
    return d - (raio + outro.raio);
}

Circulo::~Circulo()
{
    //dtor
}
