#ifndef JOGODADOS_H
#define JOGODADOS_H

#include <vector>
#include "Dado.h"
#include "Jogador.h"


using namespace std;

class JogoDados
{
    public:
        JogoDados(int ndados = 2);
        virtual ~JogoDados();

        void AdicionarJogador(Jogador *j);
        void Jogar();

    protected:


    private:
        vector<Dado* > dados;
        vector<Jogador*> jogadores;

        int sortear();

};

#endif // JOGODADOS_H
