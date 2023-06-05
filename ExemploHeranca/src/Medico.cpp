#include "Medico.h"

Medico::Medico(string _nome, string _sexo, string _cpf, Data _nascimento, string _endereco, string _crm, string _especialidade)
    :Pessoa(_nome, _sexo, _cpf, _nascimento, _endereco)
{
    //ctor
    SetCRM(_crm);
    SetEspecialidade(_especialidade);
}

Medico::~Medico()
{
    //dtor
}

string Medico::GetCRM()
{
    return crm;
}

string Medico::GetEspecialidade()
{
    return especialidade;
}

void Medico::SetCRM(string _crm)
{
    crm = _crm;
}

void Medico::SetEspecialidade(string _especialidade)
{
    especialidade = _especialidade;
}
