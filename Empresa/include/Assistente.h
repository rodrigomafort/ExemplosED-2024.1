#ifndef ASSISTENTE_H
#define ASSISTENTE_H

#include <Funcionario.h>


class Assistente : public Funcionario
{
    public:
        Assistente();
        Assistente(string _nome, int _idade, float _salario, string _projeto, string _nomeGerente);
        virtual ~Assistente();

        void setProjeto(string novoProjeto);
        string getProjeto();

        void setGerente(string novoNome);
        string getGerente();

        virtual float CalcularBonus();

    protected:
        string projeto;
        string nomeGerente;

    private:
};

#endif // ASSISTENTE_H
