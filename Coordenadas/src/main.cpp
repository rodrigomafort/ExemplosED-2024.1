#include <iostream>
#include "Coordenada.h"
#include "Circulo.h"


using namespace std;

int main()
{
    Circulo c1(5);
    Circulo c2(Coordenada(30,40), 10);
    cout << "Distancia Circulo: " << c1.calcularDistancia(c2) << endl;

    Coordenada co1(10,20);
    Coordenada co2(30,40);

    cout << "Distancia Coordenadas: " << co1.calcularDistancia(co2) << endl;





    return 0;
}
