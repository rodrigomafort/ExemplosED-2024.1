#ifndef LISTASEQUENCIAL_H
#define LISTASEQUENCIAL_H

#include "Item.h"

#define MAX 10

class ListaSequencial
{
    public:
        ListaSequencial();
        virtual ~ListaSequencial();

        bool Adicionar(Item* novo);
        bool Remover(int chave);

        int BuscarPos(int chave);
        Item* Buscar(int chave);

        Item* Acessar(int pos);

        int getTamanho();

    protected:

    private:
        Item **lista;
        int tamanho;

};

#endif // LISTASEQUENCIAL_H
