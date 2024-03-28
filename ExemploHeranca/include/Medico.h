#ifndef MEDICO_H
#define MEDICO_H

#include "Pessoa.h"

#include <string>

using namespace std;

class Medico : public Pessoa
{
    public:
        Medico(string _nome, string _cpf, string _crm, string _especialidade);
        virtual ~Medico();

        string getCRM();
        string getEspecialidade();

        void SeApresentar();

    protected:
        string crm;
        string especialidade;

    private:
};

#endif // MEDICO_H
