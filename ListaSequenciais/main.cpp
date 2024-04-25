#include <iostream>
#include "ListaSequencial.h"

using namespace std;

int main()
{
    ListaSequencial L;
    L.Adicionar(new Item(5));
    L.Adicionar(new Item(4));
    L.Adicionar(new Item(6));
    L.Adicionar(new Item(1));

    for (int i = 0; i < L.getTamanho(); i++)
        cout << L.Acessar(i)->getChave() << endl;

    cout << "Remover 4: ";
    L.Remover(4);

    for (int i = 0; i < L.getTamanho(); i++)
        cout << L.Acessar(i)->getChave() << endl;

    cout << "Remover 4: ";
    L.Remover(4);

    for (int i = 0; i < L.getTamanho(); i++)
        cout << L.Acessar(i)->getChave() << endl;

    cout << "Remover 1: ";
    L.Remover(1);

    for (int i = 0; i < L.getTamanho(); i++)
        cout << L.Acessar(i)->getChave() << endl;

    cout << "Remover 5: ";
    L.Remover(5);

    for (int i = 0; i < L.getTamanho(); i++)
        cout << L.Acessar(i)->getChave() << endl;

    cout << "Remover 6: ";
    L.Remover(6);

    for (int i = 0; i < L.getTamanho(); i++)
        cout << L.Acessar(i)->getChave() << endl;

    return 0;

}
