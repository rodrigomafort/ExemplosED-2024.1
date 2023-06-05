#ifndef MEDICO_H
#define MEDICO_H

#include "Pessoa.h"

class Medico : public Pessoa
{
    public:
        Medico(string _nome, string _sexo, string _cpf, Data _nascimento, string _endereco, string _crm, string _especialidade);
        virtual ~Medico();

        string GetCRM();
        string GetEspecialidade();

    protected:
        string crm;
        string especialidade;

        void SetCRM(string _crm);
        void SetEspecialidade(string _especialidade);

    private:
};

#endif // MEDICO_H
