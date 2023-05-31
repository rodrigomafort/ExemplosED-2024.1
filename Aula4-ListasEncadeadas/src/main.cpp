#include <iostream>
#include "Elemento.h"
#include "ListaEncadeada.h"
#include "ListaEncadeadaOrdenada.h"
#include "FilaEncadeada.h"
#include "FilaEncadeadaV2.h"
#include "PilhaEncadeada.h"

using namespace std;

int main()
{
    ListaEncadeadaOrdenada L;
    L.Inserir(10);
    L.Imprimir();

    L.Inserir(20);
    L.Imprimir();

    L.Inserir(30);
    L.Imprimir();

    L.Remover(10);
    L.Imprimir();

    L.Remover(30);
    L.Imprimir();

    L.Remover(20);
    L.Imprimir();

    FilaEncadeadaV2 F;
    F.Enfileirar(10);
    F.Enfileirar(20);
    F.Enfileirar(30);

    while (F.FilaVazia() == 0)
    {
        cout << "FILHA: " << F.Desenfileirar() << endl;
    }

    return 0;

}

