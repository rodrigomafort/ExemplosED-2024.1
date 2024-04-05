#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
    float x;
    float y;
} coordenada;

float CalcularDistancia(coordenada c1, coordenada c2)
{
    float dx = abs(c1.x - c2.x);
    float dy = abs(c1.y - c2.y);
    return sqrt(pow(dx,2) + pow(dy, 2));
}


int main()
{
    coordenada c1;
    coordenada c2;

    c1.x = 0;
    c1.y = 0;

    c2.x = 3;
    c2.y = 4;

    printf("%f",CalcularDistancia(c1,c2));
    return 0;
}

