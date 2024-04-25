#ifndef ITEM_H
#define ITEM_H


class Item
{
    public:
        Item(int _chave);
        Item();
        virtual ~Item();

        int getChave();

    protected:
        int chave;
    private:
};

#endif // ITEM_H
