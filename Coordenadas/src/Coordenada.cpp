#include "Coordenada.h"
#include <stdlib.h>
#include <math.h>

Coordenada::Coordenada()
{
    //ctor
    x = 0;
    y = 0;
}

Coordenada::~Coordenada()
{
    //dtor
}

Coordenada::Coordenada(float _x, float _y)
{
    x = _x;
    y = _y;
}

float Coordenada::calcularDistancia(Coordenada outra)
{
    return calcularDistancia(outra.x, outra.y);
}

float Coordenada::calcularDistancia(float x_outra, float y_outra)
{
    float dx = abs(x - x_outra);
    float dy = abs(y - y_outra);
    float dist = sqrt(pow(dx,2) + pow(dy, 2));
    return dist;
}

