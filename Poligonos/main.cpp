#include "Poligono.h"
#include "Triangulo.h"
#include "Quadrado.h"
#include "TrianguloRetangulo.h"
#include "Retangulo.h"

#include <vector>

using namespace std;

int main()
{
    Triangulo t;
    Quadrado q;
    TrianguloRetangulo tr;
    Retangulo r;

    vector<Poligono*> poli;
    poli.push_back(&t);
    poli.push_back(&q);
    poli.push_back(&tr);
    poli.push_back(&r);

    for (int i = 0; i < poli.size(); i++)
        poli[i]->Desenhar();


    return 0;
}
