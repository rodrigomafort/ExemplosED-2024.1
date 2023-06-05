#ifndef DATA_H
#define DATA_H


class Data
{
    public:
        void SetDia(int _dia);
        void SetMes(int _mes);
        void SetAno(int _ano);

        int GetDia();
        int GetMes();
        int GetAno();

        Data(int _dia, int _mes, int _ano);
        Data();
        virtual ~Data();

    private:
        int dia;
        int mes;
        int ano;
};

#endif // DATA_H
