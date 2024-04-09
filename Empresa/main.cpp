#include <iostream>
#include <Funcionario.h>
#include <Gerente.h>
#include <Diretor.h>
#include <stdexcept>
#include <vector>

using namespace std;

void LerFuncionario(Funcionario *f)
{
    do
    {
        try
        {
            string nome;
            cout << "Digite o nome: ";
            cin.clear();
            fflush(stdin);
            getline(cin, nome);
            cin.clear();
            f->setNome(nome);

            int idade;
            cout << "Digite a idade: ";
            cin >> idade;
            cin.clear();
            f->setIdade(idade);

            float salario;
            cout << "Digite o salario: ";
            cin >> salario;
            cin.clear();
            f->setSalario(salario);
            return;

        }
        catch (invalid_argument e)
        {
            cout << e.what() << endl;
        }
    }
    while (true);
}

void LerGerente(Gerente *g)
{
    LerFuncionario(g);
    do
    {
        try
        {
            string departamento;
            cout << "Digite o departamento: ";
            cin.clear();
            fflush(stdin);
            getline(cin, departamento);
            cin.clear();
            g->setDepartamento(departamento);
            return;
        }
        catch (invalid_argument e)
        {
            cout << e.what() << endl;
        }
    }
    while (true);
}

void LerDiretor(Diretor *d)
{
    LerGerente(d);
    do
    {
        try
        {
            string filial;
            cout << "Digite a filial: ";
            cin.clear();
            fflush(stdin);
            getline(cin, filial);
            cin.clear();
            d->setFilial(filial);
            return;
        }
        catch (invalid_argument e)
        {
            cout << e.what() << endl;
        }
    }
    while (true);
}

int main()
{
    vector<Funcionario*> funcionarios;

    while (true)
    {
        int op;
        cout << "1) Cadastrar Funcionário" << endl;
        cout << "2) Cadastrar Gerente" << endl;
        cout << "3) Cadastrar Diretor" << endl;
        //cout << "4) Cadastrar Funcionário" << endl;
        cout << "0) Finalizar cadastro" << endl;
        cin >> op;

        if (op == 0)
            break;
        else
        {
            if (op == 1)
            {
                Funcionario* f = new Funcionario();
                LerFuncionario(f);
                funcionarios.push_back(f);
            }
            else
            {
                if (op == 2)
                {
                    Gerente* g = new Gerente();
                    LerGerente(g);
                    funcionarios.push_back(g);
                }
                else
                {
                    if (op == 3)
                    {
                        Diretor* d = new Diretor();
                        LerDiretor(d);
                        funcionarios.push_back(d);
                    }
                    else
                    {
                        //Assistente

                    }
                }

            }
        }
    }

    for (Funcionario* f : funcionarios)
    {
        cout << f->getNome() << " - " << f->CalcularBonus() << endl;
        //Como identificar o tipo de f????
    }

    return 0;
}
