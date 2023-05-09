#include "Jogador.h"

Jogador::~Jogador()
{
    //dtor
}

Jogador::Jogador(string _nome)
{
    nome = _nome;
    aposta = 0;
    valorApostado = 0;
}

Jogador::Jogador(string _nome, int _aposta, float _valorApostado)
{
    nome = _nome;
    FazerAposta(_aposta, _valorApostado);
}

void Jogador::FazerAposta(int _aposta, float _valorApostado)
{
    aposta = _aposta;
    valorApostado = _valorApostado;
}

int Jogador::ConsultarAposta()
{
    return aposta;
}

float Jogador::ConsultarValorApostado()
{
    return valorApostado;
}

string Jogador::ObterNome()
{
    return nome;
}
