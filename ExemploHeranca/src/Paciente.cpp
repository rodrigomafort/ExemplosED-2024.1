#include "Paciente.h"

Paciente::Paciente(string _nome, string _sexo, string _cpf, Data _nascimento, string _endereco, string _plano)
    :Pessoa(_nome, _sexo, _cpf, _nascimento, _endereco)
{
    //ctor
    consultaAgendada = false;
}

string Paciente::getPlanoSaude()
{
    return planoDeSaude;
}

void Paciente::setPlanoSaude(string _plano)
{
    planoDeSaude = _plano;
}

Paciente::~Paciente()
{
    //dtor
}

void Paciente::MarcarConsulta(Data _data)
{
    consultaAgendada = true;
    proximaConsulta = _data;
}

void Paciente::CancelarConsulta()
{
    consultaAgendada = false;
}

void Paciente::RemarcarConsulta(Data _data)
{
    CancelarConsulta();
    MarcarConsulta(_data);
}
