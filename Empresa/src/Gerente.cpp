#include "Gerente.h"

#include <stdexcept>

using namespace std;

Gerente::Gerente()
{
    //ctor
}

Gerente::Gerente(string _nome, int _idade, float _salario, string _departamento):
    Funcionario(_nome, _idade, _salario)
{
    setDepartamento(_departamento);
}

void Gerente::setDepartamento(string novoDepartamento)
{
    if (novoDepartamento.size() < 2)
        throw invalid_argument("Departamento nao pode ser em branco");
    departamento = novoDepartamento;
}

string Gerente::getDepartamento()
{
    return departamento;
}

float Gerente::CalcularBonus()
{
    return 1000 + Funcionario::CalcularBonus();
}


Gerente::~Gerente()
{
    //dtor
}
