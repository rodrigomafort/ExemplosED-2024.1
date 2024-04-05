#include <iostream>
#include "Coordenada.h"

using namespace std;

int main()
{
    Coordenada c1;
    Coordenada c2(5,7);

    cout << c1.calcularDistancia(3, 4) << endl;
    cout << c2.calcularDistancia(8, 11) << endl;

    cout << c1.calcularDistancia(c2) << endl;

    cout << c1.getX() << endl;
    c1.x = 5;

    return 0;
}
