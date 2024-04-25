#include "Item.h"

Item::Item()
{

}

Item::Item(int _chave)
{
    chave = _chave;
}

int Item::getChave()
{
    return chave;
}

Item::~Item()
{
    //dtor
}
