#ifndef JOGADOR_H
#define JOGADOR_H

#include <string>

using namespace std;

class Jogador
{
    public:
        Jogador(string _nome, int _aposta, float _valor_aposta);
        virtual ~Jogador();

        string nome;
        int aposta;
        float valor_aposta;

    protected:

    private:
};

#endif // JOGADOR_H
