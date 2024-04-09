#include "Assistente.h"

#include <stdexcept>

using namespace std;

Assistente::Assistente()
{
    //ctor
}

Assistente::~Assistente()
{

}

Assistente::Assistente(string _nome, int _idade, float _salario, string _projeto, string _nomeGerente):
    Funcionario(_nome, _idade, _salario)
{
    setProjeto(_projeto);
    setGerente(_nomeGerente);
}

void Assistente::setProjeto(string novoProjeto)
{
    if (novoProjeto.size() < 2)
        throw invalid_argument("Projeto nao pode ser em branco");
    projeto = novoProjeto;
}

string Assistente::getProjeto()
{
    return projeto;
}

void Assistente::setGerente(string novoNome)
{
    if (novoNome.size() < 2)
        throw invalid_argument("Gerente nao pode ser em branco");
    nomeGerente = novoNome;
}

string Assistente::getGerente()
{
    return nomeGerente;
}

float Assistente::CalcularBonus()
{
    return 0;
}
