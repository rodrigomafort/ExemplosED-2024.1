#ifndef COFRINHO_H
#define COFRINHO_H


class Cofrinho
{
    public:
        Cofrinho();
        virtual ~Cofrinho();

        float CalcularSaldo();      //método para calcular o saldo do cofrinho
        void Depositar(int moeda);  //método para depositar uma moeda
        void Sacar(float valor);    //método para sacar um valor do cofrinho

    protected:

    private:
        int m5;     //moedas de 5  centavos
        int m10;    //moedas de 10 centavos
        int m25;    //moedas de 25 centavos
        int m50;    //moedas de 50 centavos
        int m100;   //moedas de 1 real

};

#endif // COFRINHO_H
