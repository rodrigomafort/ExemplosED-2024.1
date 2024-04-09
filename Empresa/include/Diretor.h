#ifndef DIRETOR_H
#define DIRETOR_H

#include <Gerente.h>


class Diretor : public Gerente
{
    public:
        Diretor();
        Diretor(string _nome, int _idade, float _salario, string _departamento, string _filial);
        virtual ~Diretor();

        void setFilial(string novaFilial);
        string getFilial();

        virtual float CalcularBonus();

    protected:

        string filial;



    private:
};

#endif // DIRETOR_H
