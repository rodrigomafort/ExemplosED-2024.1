#include "Pessoa.h"
#include <ctime>
#include <iostream>

Pessoa::Pessoa(string _nome, string _sexo, string _cpf, Data _nascimento, string _endereco)
{
    nome = _nome;
    sexo = _sexo;
    cpf = _cpf;
    endereco = _endereco;

    dataNascimento = _nascimento;
}

Pessoa::~Pessoa()
{

}

string Pessoa::getNome()
{
    return nome;
}

string Pessoa::getSexo()
{
    return sexo;
}

string Pessoa::getCPF()
{
    return cpf;
}

Data Pessoa::getNascimento()
{
    return dataNascimento;
}

string Pessoa::getEndereco()
{
    return endereco;
}

int Pessoa::GetIdade()
{
    std::time_t t = std::time(0);
    std::tm* now = std::localtime(&t);

    int difAno = (now->tm_year + 1900) - dataNascimento.GetAno();
    if ((dataNascimento.GetMes() > (now->tm_mon + 1))||(dataNascimento.GetMes() == (now->tm_mon + 1) && dataNascimento.GetDia() > now->tm_mday   ))
        difAno --;

    return difAno;
}
