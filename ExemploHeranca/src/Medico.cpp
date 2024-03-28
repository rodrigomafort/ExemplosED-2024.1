#include "../include/Medico.h"

#include <iostream>

using namespace std;

Medico::Medico(string _nome, string _cpf, string _crm, string _especialidade):
    Pessoa(_nome, _cpf)
{
    //ctor
    crm = _crm;
    especialidade = _especialidade;
}

Medico::~Medico()
{
    //dtor
}
string Medico::getCRM()
{
    return crm;
}

string Medico::getEspecialidade()
{
    return especialidade;
}

void Medico::SeApresentar()
{
    cout << "Ola, sou o medico de nome " << getNome() << endl;
}
