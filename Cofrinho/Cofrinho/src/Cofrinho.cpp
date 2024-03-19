#include "Cofrinho.h"

#include <iostream>
#include <cmath> //para usar a função floor

using namespace std;

Cofrinho::Cofrinho()
{
    //ctor
    m5   = 0;
    m10  = 0;
    m25  = 0;
    m50  = 0;
    m100 = 0;
}

Cofrinho::~Cofrinho()
{
    //dtor
}

float Cofrinho::CalcularSaldo()
{
    return m5 * 0.05 + m10 * 0.1 + m25 * 0.25 + m50 * 0.5 + m100;
}

void Cofrinho::Depositar(int moeda)
{
    switch (moeda)
    {
        case 5:     m5++;
                    break;
        case 10:    m10++;
                    break;
        case 25:    m25++;
                    break;
        case 50:    m50++;
                    break;
        case 100:   m100++;
                    break;
        default:    cout << "Erro: Moeda nao reconhecida" << endl; //default = nenhuma das anteriores
    }
}

void Cofrinho::Sacar(float valorSaque)
{
    //Como estamos do lado de dentro do objeto, podemos calcular o saldo diretamente
    //para ver se temos saldo para esse saque
    if (CalcularSaldo() >= valorSaque)
    {
        //Se temos esse valor, vamos continuar!
        //Primeiro, vamos multiplicar o valor por 100 para facilitar o processamendo das moedas
        valorSaque *= 100;

        int s100 = floor(valorSaque/100); //Quantas moedas de 1.00 precisamos sacar? s100 = saque em moedas de 100 centavos (1 real)
        if (s100 > m100)                  //Se precisamos de mais moedas de 1.00 do que temos,
            s100 = m100;                  //Então vamos reduzir a quantidade ao máximo possível.
        valorSaque -= s100 * 100;         //Agora corrigimos o valor. Já entregamos m100 * 100 reais (lembrar que valorSaque foi multiplicado por 100)

        int s50 = floor(valorSaque / 50);  //Mesma lógica das moedas de 1.00
        if (s50 > m50)
            s50 = m50;
        valorSaque -= s50 * 50;

        int s25 = floor(valorSaque / 25);
        if (s25 > m25)
            s25 = m25;
        valorSaque -= s25 * 25;

        int s10 = floor(valorSaque / 10);
        if (s10 > m10)
            s10 = m10;
        valorSaque -= s10 * 10;

        int s5 = floor(valorSaque / 5);
        if (s5 > m5)
            s5 = m5;
        valorSaque -= s5 * 5;

        if (valorSaque == 0)
        {
            cout << "Saque realizado com sucesso: " << endl;
            cout << s100 << " moeda(s) de R$ 1,00" << endl;
            cout << s50 << " moeda(s) de R$ 0,50" << endl;
            cout << s25 << " moeda(s) de R$ 0,25" << endl;
            cout << s10 << " moeda(s) de R$ 0,10" << endl;
            cout << s5 << " moeda(s) de R$ 0,5" << endl;

            //Agora vamos acertar as moedas no cofrinho para retirar as moedas sacadas
            m100 -= s100;
            m50 -= s50;
            m25 -= s25;
            m10 -= s10;
            m5 -= s5;

            cout << endl << "Saldo do cofrinho: R$ " << CalcularSaldo() << endl;
        }
        else
        {
            cout << "Nao podemos realizar o saque desse valor: Moedas indisponiveis." << endl;
        }
    }
    else
    {
        cout << "Nao podemos realizar o saque desse valor: Saldo insuficiente." << endl;
    }
}
