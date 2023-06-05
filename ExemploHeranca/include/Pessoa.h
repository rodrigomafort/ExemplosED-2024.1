#ifndef PESSOA_H
#define PESSOA_H

#include <string>
#include "Data.h"

using namespace std;

class Pessoa
{
    public:
        Pessoa(string _nome, string _sexo, string _cpf, Data _nascimento, string _endereco);
        virtual ~Pessoa();

        string getNome();
        string getSexo();
        string getCPF();
        Data getNascimento();
        string getEndereco();
        int GetIdade();

    protected:
        string nome;
        string sexo;
        string cpf;
        Data dataNascimento;
        string endereco;

    private:
};

#endif // PESSOA_H
