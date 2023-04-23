#include <iostream> //Biblioteca com os comandos de entrada e saída
#include <locale> //Biblioteca com funções para localização (formato de números, acentos, etc...)
#include "Coordenada.h" //importar o arquivo com a classe Coordenada

using namespace std; //Todas as funções nativas estão no "universo" std.
//Ao declarar que usamos esse universo, o programa consegue visualizar essas funções.
//Sem esse comando, todos os comandos nativos (entrada, saída, etc.. ) devem vir precedidos por std::
//std::cout -> chamada a função cout, definida no namespace std.

int main()
{
    setlocale(LC_CTYPE, "Portuguese"); //Permitir impressão de texto com acentuação sem erros

    Coordenada p1; //Chamada ao construtor sem parâmetros
    p1.X = 0;
    p1.Y = -3.0;

    Coordenada p2(3.0, 4.0); //Chamada ao segundo construtor - recebe dois números reais (double)

    cout << "Distância: " << p1.CalcularDistancia(p2) << endl; //endl -> atalho para \n
    cout << "Distância: " << p2.CalcularDistancia(p1) << endl; //Tem que retornar o mesmo valor

    return 0;
}
