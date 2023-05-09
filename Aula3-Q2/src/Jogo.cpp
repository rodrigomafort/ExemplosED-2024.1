#include "Jogo.h"
#include <iostream>
#include <iomanip>

Jogo::Jogo()
{
    for (int i = 1; i <= 4; i++)
        dados.push_back(Dado(6));
}

Jogo::Jogo(int _dados, int _faces)
{
    for (int i = 1; i <= _dados; i++)
        dados.push_back(Dado(_faces));
}

void Jogo::AdicionarJogador(Jogador jNovo)
{
    for (Jogador j : jogadores)
        if (j.ConsultarAposta() == jNovo.ConsultarAposta())
            throw "Aposta Duplicada";
    jogadores.push_back(jNovo);
}

void Jogo::Jogar()
{
    int somaDados = 0;
    for (Dado d : dados)
        somaDados += d.Sortear();

    cout << "VALOR SORTEADO PELOS DADOS: " << somaDados << endl;

    float totalAposta = 0;
    for (Jogador j : jogadores)
        totalAposta += j.ConsultarValorApostado();

    for (Jogador j : jogadores)
    {
        if (j.ConsultarAposta() == somaDados)
        {
            cout << "GANHADOR: " << j.ObterNome() << endl;
            cout << "PREMIO: R$ " << fixed << setprecision(2) << totalAposta << endl;
            return;
        }
    }

    cout << "NÃO HOUVE GANHADOR" << endl;
    cout << "PREMIO PARA MESA: R$ " << fixed << setprecision(2) << totalAposta << endl;
}


Jogo::~Jogo()
{
    //dtor
}
