#include <iostream>
#include "JogoDados.h"

using namespace std;

int main()
{
    JogoDados jogo(2);
    jogo.AdicionarJogador(new Jogador("Joao", 8, 10.00));
    jogo.AdicionarJogador(new Jogador("Maria", 7, 10.00));
    jogo.Jogar();

    return 0;
}
