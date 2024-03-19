#include "JogoDados.h"

#include <iostream>

using namespace std;

JogoDados::JogoDados(int ndados)
{
    //ctor
    for (int i = 1; i <= ndados; i++)
        dados.push_back(new Dado(6));


}

JogoDados::~JogoDados()
{
    //dtor
}

int JogoDados::sortear()
{
    int soma = 0;
    for ( Dado* d : dados )
    {
        soma = soma + d->rolar();
    }
    return soma;
}

void JogoDados::AdicionarJogador(Jogador *j)
{
    jogadores.push_back(j);
}

void JogoDados::Jogar()
{
    int valorDados = sortear();
    cout << "Valor Sorteado: " << valorDados << endl;
    float valorPremio = 0;

    for (Jogador* j : jogadores)
        valorPremio += j->valor_aposta;

    int ganhou = 0;
    for (Jogador* j : jogadores)
        if (j->aposta == valorDados)
        {
            cout << "Ganhador: " << j->nome << " - Premio: " << valorPremio << endl;
            ganhou = 1;
        }
        else
        {
            cout << "Perdeu: " << j->nome << " (" << j->aposta << ")" << endl;

        }

    if (ganhou == 0)
        cout << "A mesa ganhou - Premio: " << valorPremio << endl;
}
