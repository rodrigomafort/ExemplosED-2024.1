#include <iostream>
#include <vector>
#include "Poligono.h"
#include "Triangulo.h"
#include "Circulo.h"
#include "Quadrado.h"

using namespace std;

int main()
{
    Quadrado q;
    q.Desenhar();

    Circulo c;
    c.Desenhar();

    vector<Poligono*> vet;
    vet.push_back(&q);
    vet.push_back(&c);

    for (int i = 0; i < vet.size(); i++)
        vet[i]->Desenhar();

    return 0;

}

