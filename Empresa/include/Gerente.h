#ifndef GERENTE_H
#define GERENTE_H

#include <Funcionario.h>

using namespace std;

class Gerente : public Funcionario
{
    public:
        Gerente();
        Gerente(string _nome, int _idade, float _salario, string _departamento);
        virtual ~Gerente();

        void setDepartamento(string novoDepartamento);
        string getDepartamento();

        virtual float CalcularBonus();

    protected:
        string departamento;

    private:

};

#endif // GERENTE_H
