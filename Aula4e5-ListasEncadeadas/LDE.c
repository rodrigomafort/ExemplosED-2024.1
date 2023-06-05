#include <stdio.h>
#include <stdlib.h>

struct no
{
    int valor;
    struct no* prox;
    struct no* ant;
};

typedef struct no No;

void InserirIni(No* cabeca, int _valor)
{
    No* novo = (No*) malloc (sizeof(No));
    novo->valor = _valor;
    novo->prox = cabeca->prox;
    novo->ant = cabeca;
    if (cabeca->prox != NULL)
        cabeca->prox->ant = novo;
    cabeca->prox = novo;
}

void InserirFim(No* cabeca, int _valor)
{
    No* aux = cabeca;
    while (aux->prox != NULL)
        aux = aux -> prox;

    No* novo = (No*) malloc(sizeof(No));
    novo->valor = _valor;
    novo->prox = NULL;
    novo->ant = aux;
    aux->prox = novo;
}

No* Buscar(No* cabeca, int _valor)
{
    if (cabeca->prox == NULL)
        return cabeca;

    No* aux = cabeca->prox;
    while (aux->prox != NULL && aux->valor < _valor)
        aux = aux -> prox;
    return aux;
}

void InserirOrd(No* cabeca, int _valor)
{
    No* novo = (No*) malloc(sizeof(No));
    novo->valor = _valor;

    if (cabeca->prox == NULL)
    {
        novo->prox = NULL;
        novo->ant = cabeca;
        cabeca->prox = novo;
    }
    else
    {
        No* aux = Buscar(cabeca, _valor);

        if (aux->valor > _valor)
        {
            //Inserir antes de aux
            novo->prox = aux;
            novo->ant = aux->ant;

            aux->ant->prox = novo;
            aux->ant = novo;
        }
        else
        {
            //Inserir após aux (última posição)
            novo->prox = NULL;
            novo->ant = aux;
            aux->prox = novo;
        }
    }
}

void Imprimir(No* cabeca)
{
    printf("{ ");
    No* aux = cabeca->prox;
    while (aux != NULL)
    {
        if (aux -> prox != NULL)
            printf("%d, ",aux->valor);
        else
            printf("%d ",aux->valor);
        aux = aux -> prox;
    }
    printf("}\n");
}

No* Inicializar()
{
    No* cabeca = (No*) malloc (sizeof(No));
    cabeca->prox = NULL;
    cabeca->ant = NULL;
    return cabeca;
}

int main()
{
    No* cabeca = Inicializar();
    InserirOrd(cabeca,5);
    Imprimir(cabeca);

    InserirOrd(cabeca,7);
    Imprimir(cabeca);

    InserirOrd(cabeca,6);
    Imprimir(cabeca);

    InserirOrd(cabeca,2);
    Imprimir(cabeca);



    return 0;

}
