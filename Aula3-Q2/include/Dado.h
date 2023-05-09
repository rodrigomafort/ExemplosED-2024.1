#ifndef DADO_H
#define DADO_H


class Dado
{
    public:
        Dado();
        Dado(int _faces);
        virtual ~Dado();

        int Sortear();
    protected:
    private:
        int faces;
        int faceSorteada;
};

#endif // DADO_H
