#ifndef JOGADOR_H
#define JOGADOR_H

#include <string>

using namespace std;

class Jogador
{
    public:
        Jogador(string _nome);
        Jogador(string _nome, int _aposta, float _valorApostado);

        virtual ~Jogador();

        void FazerAposta(int _aposta, float _valorApostado);

        int ConsultarAposta();
        float ConsultarValorApostado();
        string ObterNome();


    protected:

    private:
        string nome;
        int aposta;
        float valorApostado;
};

#endif // JOGADOR_H
