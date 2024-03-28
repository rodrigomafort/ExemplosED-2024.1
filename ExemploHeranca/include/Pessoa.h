#ifndef PESSOA_H
#define PESSOA_H

#include <string>

using namespace std;

class Pessoa
{
    public:
        Pessoa(string _nome, string _cpf);
        Pessoa();
        virtual ~Pessoa();

        string getNome();
        string getCPF();

        void SeApresentar();

    protected:


    private:
        string nome;
        string cpf;
};

#endif // PESSOA_H
