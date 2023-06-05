#ifndef PACIENTE_H
#define PACIENTE_H

#include "Pessoa.h"

class Paciente : public Pessoa
{
    public:
        Paciente(string _nome, string _sexo, string _cpf, Data _nascimento, string _endereco, string _plano);
        virtual ~Paciente();

        void MarcarConsulta(Data _data);
        void CancelarConsulta();
        void RemarcarConsulta(Data _data);

        string getPlanoSaude();
        void setPlanoSaude(string _plano);

    protected:
        Data proximaConsulta;
        bool consultaAgendada;
        string planoDeSaude;
    private:

};

#endif // PACIENTE_H
