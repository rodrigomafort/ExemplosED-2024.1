#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>

using namespace std;

class Funcionario
{
    public:
        Funcionario();
        Funcionario(string _nome, int _idade, float _salario);

        virtual ~Funcionario();

        void setNome(string novoNome);
        string getNome();

        void setIdade(int novaIdade);
        int getIdade();

        void setSalario(float salario);
        float getSalario();

        virtual float CalcularBonus();

    protected:
        string nome;
        int idade;
        float salario;

    private:
};

#endif // FUNCIONARIO_H
