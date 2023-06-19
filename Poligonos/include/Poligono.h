#ifndef POLIGONO_H
#define POLIGONO_H


class Poligono
{
    public:
        Poligono();
        virtual ~Poligono();

        virtual void Desenhar() = 0;

    protected:

    private:
};

#endif // POLIGONO_H
