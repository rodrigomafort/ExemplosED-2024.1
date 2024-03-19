#include <iostream>
#include "Cofrinho.h"

using namespace std;

int main()
{
    Cofrinho cofre;

    cofre.Depositar(100);
    cofre.Depositar(50);
    cofre.Depositar(25);
    cofre.Depositar(5);
    cofre.Depositar(75);
    cofre.Depositar(10);

    cout << "Saldo apos depositos: R$ " << cofre.CalcularSaldo() << endl;

    cofre.Sacar(1.50);
    cofre.Sacar(70);

    return 0;
}
