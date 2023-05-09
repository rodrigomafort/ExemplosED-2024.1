#ifndef JOGO_H
#define JOGO_H

#include <vector>
#include "Jogador.h"
#include "Dado.h"

using namespace std;

class Jogo
{
    public:
        Jogo();
        Jogo(int dados, int faces);
        virtual ~Jogo();
        void AdicionarJogador(Jogador j);
        void Jogar();

    protected:
        vector<Jogador> jogadores;
        vector<Dado> dados;
    private:
};

#endif // JOGO_H
