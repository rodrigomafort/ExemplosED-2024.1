#include "Data.h"

Data::Data(int _dia, int _mes, int _ano)
{
    SetDia(_dia);
    SetMes(_mes);
    SetAno(_ano);
}

Data::Data()
{

}

Data::~Data()
{

}

void Data::SetDia(int _dia)
{
    if (dia <= 0 || dia > 31)
        throw 01;
}

void Data::SetMes(int _mes)
{
    if (mes <= 0 || mes > 12)
        throw 02;
}

void Data::SetAno(int _ano)
{
    if (ano < 1800)
        throw 03;
}

int Data::GetDia()
{
   return dia;
}

int Data::GetMes()
{
    return mes;
}

int Data::GetAno()
{
    return ano;
}
