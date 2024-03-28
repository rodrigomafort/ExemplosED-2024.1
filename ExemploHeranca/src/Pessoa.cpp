#include "../include/Pessoa.h"

#include <iostream>

Pessoa::Pessoa(string _nome, string _cpf)
{
    //ctor
    nome = _nome;
    cpf =_cpf;
}

Pessoa::Pessoa()
{

}

Pessoa::~Pessoa()
{
    //dtor
}
string Pessoa::getNome()
{
    return nome;
}

string Pessoa::getCPF()
{
    return cpf;
}

void Pessoa::SeApresentar()
{
    cout << "Ola, sou a pessoa de nome " << nome << endl;
}
