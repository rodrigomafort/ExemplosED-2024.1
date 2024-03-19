#ifndef COORDENADA_H
#define COORDENADA_H


class Coordenada
{
    public:
        Coordenada();
        Coordenada(float _x, float _y);
        virtual ~Coordenada();

        float calcularDistancia(Coordenada outra);
        float calcularDistancia(float x_outra, float y_outra);

        float x;
        float y;

    protected:

    private:

};

#endif // COORDENADA_H
