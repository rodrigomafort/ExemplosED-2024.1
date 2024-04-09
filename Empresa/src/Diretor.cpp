#include "Diretor.h"

#include <stdexcept>

using namespace std;


Diretor::Diretor()
{

}

Diretor::Diretor(string _nome, int _idade, float _salario, string _departamento, string _filial):
    Gerente(_nome, _idade, _salario, _departamento)
{
    setFilial(_filial);
}

void Diretor::setFilial(string novaFilial)
{
    if (novaFilial.size() < 2)
        throw invalid_argument("Filial nao pode ser em branco");
    filial = novaFilial;
}

string Diretor::getFilial()
{
    return filial;
}

float Diretor::CalcularBonus()
{
    return 1500 + Gerente::CalcularBonus();
}

Diretor::~Diretor()
{
    //dtor
}
