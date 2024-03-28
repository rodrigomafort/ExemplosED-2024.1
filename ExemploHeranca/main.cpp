#include <iostream>
#include "include/Pessoa.h"
#include "include/Medico.h"

using namespace std;

int main()
{
    Pessoa p("Joao", "1234");
    p.SeApresentar();

    Medico m("Maria", "456", "1", "Cardiologista");
    m.SeApresentar();

    return 0;
}
