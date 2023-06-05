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
    cabeca->prox->ant = novo;
    cabeca->prox = novo;
}

void InserirFim(No* cabeca, int _valor)
{
    No* novo = (No*) malloc(sizeof(No));
    novo->valor = _valor;
    novo->prox = cabeca;
    novo->ant = cabeca -> ant;
    cabeca->ant->prox = novo;
    cabeca->ant = novo;
}

No* Buscar(No* cabeca, int _valor)
{
    if (cabeca->prox == cabeca)
        return cabeca;

    No* aux = cabeca->prox;
    while (aux != cabeca && aux->valor < _valor)
        aux = aux -> prox;
    return aux;
}

int Remover(No* cabeca, int _valor)
{
    No* aux = Buscar(cabeca,_valor);
    if (aux != cabeca && aux->valor == _valor)
    {
        aux->ant->prox = aux->prox;
        aux->prox->ant = aux->ant;
        free(aux);
        return 1;
    }
    return 0;
}

void InserirOrd(No* cabeca, int _valor)
{
    No* novo = (No*) malloc(sizeof(No));
    novo->valor = _valor;

    No* aux = Buscar(cabeca, _valor);
    if (aux == cabeca)
    {
        //Inserir na última posição)
        novo->prox = cabeca;
        novo->ant = cabeca -> ant;
        cabeca->ant->prox = novo;
        cabeca->ant = novo;
    }
    else
    {
        //Inserir antes de aux
        novo->prox = aux;
        novo->ant = aux->ant;

        aux->ant->prox = novo;
        aux->ant = novo;
    }
}

void Imprimir(No* cabeca)
{
    printf("{ ");
    No* aux = cabeca->prox;
    while (aux != cabeca)
    {
        if (aux -> prox != cabeca)
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
    cabeca->prox = cabeca;
    cabeca->ant = cabeca;
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

    printf("Remover 5: ");
    Remover(cabeca,5);
    Imprimir(cabeca);

    printf("Remover 5: ");
    Remover(cabeca,5);
    Imprimir(cabeca);

    printf("Remover 2: ");
    Remover(cabeca,2);
    Imprimir(cabeca);

    printf("Remover 7: ");
    Remover(cabeca,7);
    Imprimir(cabeca);

    printf("Remover 6: ");
    Remover(cabeca,6);
    Imprimir(cabeca);

    InserirOrd(cabeca,2);
    Imprimir(cabeca);

    InserirOrd(cabeca,5);
    Imprimir(cabeca);

    InserirOrd(cabeca,3);
    Imprimir(cabeca);

    InserirOrd(cabeca,1);
    Imprimir(cabeca);

    InserirOrd(cabeca,6);
    Imprimir(cabeca);

    return 0;

}
