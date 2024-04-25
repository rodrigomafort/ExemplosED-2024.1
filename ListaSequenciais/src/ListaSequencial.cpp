#include "ListaSequencial.h"

ListaSequencial::ListaSequencial()
{
    //ctor
    lista = new Item*[MAX];
    tamanho = 0;
}

ListaSequencial::~ListaSequencial()
{
    delete lista;
}

bool ListaSequencial::Adicionar(Item* novo)
{
    if (tamanho < MAX)
    {
        lista[tamanho] = novo;
        tamanho++;
        return true;
    }
    else
    {
        return false;
    }
}

int ListaSequencial::BuscarPos(int chave)
{
    for (int i = 0; i < tamanho; i++)
        if (lista[i]->getChave() == chave)
            return i;
    return -1;
}


Item* ListaSequencial::Buscar(int chave)
{
    int pos = BuscarPos(chave);
    if (pos != -1)
        return lista[pos];
    else
        return nullptr;
}

bool ListaSequencial::Remover(int chave)
{
    int pos = BuscarPos(chave);
    if (pos == -1)
        return false;

    lista[pos] = lista[tamanho-1];
    tamanho--;
    return true;
}

Item* ListaSequencial::Acessar(int pos)
{
    if (pos < tamanho)
        return lista[pos];
    else
        return nullptr;
}


int ListaSequencial::getTamanho()
{
    return tamanho;
}
