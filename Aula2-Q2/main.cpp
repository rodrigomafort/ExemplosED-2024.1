#include <iostream>
#include <locale>

#include "ListaSNO.h"
#include "Elemento.h"

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Portuguese"); //Permitir impressão de texto com acentuação sem erros

    ListaSNO lista; //Criação de uma lista vazia
    lista.Imprimir(); //Imprimir alista

    lista.Inserir(Elemento(5)); //Inserir um novo elemento
    lista.Imprimir();

    lista.Inserir(Elemento(10));
    lista.Imprimir();

    lista.Inserir(Elemento(8));
    lista.Imprimir();

    lista.Remover(10); //Remover o elemento de ID = 10.
    lista.Imprimir();

    lista.Remover(8);
    lista.Imprimir();

    lista.Remover(5);
    lista.Imprimir();

    return 0;
}
