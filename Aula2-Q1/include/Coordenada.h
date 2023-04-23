#ifndef COORDENADA_H
#define COORDENADA_H

class Coordenada
{
    public:
        Coordenada(); //Construtor sem parâmetros
        Coordenada(double _X, double _Y); //Segundo construtor - Recebe parâmetros X e Y

        double X; //Atributo público X
        double Y; //Atributo público Y
        //Para pensar: faz sentido proteger essa informação?


        double CalcularDistancia(Coordenada outra); //Protótipo do método CalcularDistância

    protected:

    private:
};

#endif // COORDENADA_H
