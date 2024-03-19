#include "Dado.h"

#include<cstdlib>
#include<ctime>

Dado::Dado(int _faces):
    faces(_faces)
{
    //ctor
    //faces = _faces;
}

Dado::~Dado()
{
    //dtor
}

int Dado::rolar()
{
    srand(time(0));
    return (rand() % faces) + 1;

}
