#include <stdio.h>
#include <stdlib.h>

struct no
{
    int valor;
    struct no* prox;
    struct no* ant;
};

typedef struct no No;

void InserirInicio(No* cabeca, int valor)
{
	No* novo = (No*) malloc(sizeof(No));
	novo->valor = valor;
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

No* Buscar(No* cabeca, int valor)
{
    No* aux = cabeca->prox;
    while (aux != cabeca && aux->valor != valor)
        aux = aux->prox;
    return aux;
}

No* BuscarOrd(No* cabeca, int valor)
{
    No* aux = cabeca->prox;
    while (aux != cabeca && aux->valor < valor)
        aux = aux->prox;
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

    No* aux = BuscarOrd(cabeca, _valor);
    //Importante:
	//1) aux é sempre diferente de NULL
	//2) se aux == cabeca então/lista vazia ou elemento maior do que o ultimo
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

    printf("%d\n",cabeca->ant->valor);
    printf("%d\n",cabeca->ant->ant->valor);
    printf("%d\n",cabeca->ant->ant->ant->valor);
    printf("%d\n",cabeca->ant->ant->ant->ant->valor);

    printf("%d\n",cabeca->prox->valor);
    printf("%d\n",cabeca->prox->prox->valor);
    printf("%d\n",cabeca->prox->prox->prox->valor);
    printf("%d\n",cabeca->prox->prox->prox->prox->valor);

    return 0;

}
