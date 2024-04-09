#include "Funcionario.h"
#include <stdexcept>

using namespace std;

#define BONUS 0.2

Funcionario::Funcionario()
{
    //ctor
}

Funcionario::~Funcionario()
{

}

Funcionario::Funcionario(string _nome, int _idade, float _salario)
{
    setNome(_nome);
    setIdade(_idade);
    salario = 0;
    setSalario(_salario);
}

void Funcionario::setNome(string novoNome)
{
    if (novoNome.size() < 5)
        throw invalid_argument("Nome nao pode ser em branco");
    nome = novoNome;
}

string Funcionario::getNome()
{
    return nome;
}

void Funcionario::setIdade(int novaIdade)
{
    if (novaIdade <= 0)
        throw invalid_argument("Idade deve ser positiva");
    idade = novaIdade;
}

int Funcionario::getIdade()
{
    return idade;
}

void Funcionario::setSalario(float novoSalario)
{
    if (novoSalario <= 0 && novoSalario <= salario)
        throw invalid_argument("Salario deve ser positivo e maior que o ");
    salario = novoSalario;
}

float Funcionario::getSalario()
{
    return salario;
}

float Funcionario::CalcularBonus()
{
    return BONUS * salario;
}
