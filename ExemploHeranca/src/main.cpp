#include <iostream>

#include "Pessoa.h"

int main()
{
    Pessoa p("João","M","123",Data(30,03,1985),"Rua das pedrinhas");
    cout << p.GetIdade();

    return 0;


}
