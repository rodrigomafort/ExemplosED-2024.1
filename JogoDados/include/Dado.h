#ifndef DADO_H
#define DADO_H

class Dado
{
    public:
        Dado(int _faces = 6);
        virtual ~Dado();

        int rolar();

    protected:
        int faces;

    private:

};

#endif // DADO_H
