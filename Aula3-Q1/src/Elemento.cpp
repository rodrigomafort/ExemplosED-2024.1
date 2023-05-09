#include "Elemento.h"

Elemento::Elemento(int _ID) //Construtor
{
    ID = _ID;
}

int Elemento::ObterID() const
{
    return ID;
}
