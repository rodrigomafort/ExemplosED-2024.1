#include "ListaSNO.h"

#include <stdlib.h>
#include <iostream>
#include <exception>

ListaSNO::ListaSNO() //Construtor
{
    //ctor
    nElementos = 0; //Se a lista está sendo construída agora, ela está vazia: nElementos = 0

    //Como optei pela segunda forma de declarar a lista, estamos alocando a memória para armazenar a lista
    //Observe que o sizeof retorna o tamanho necessário para armazenar um objeto da classe Elemento
    lista = (Elemento*) malloc (TAM_MAX * sizeof(Elemento));

    //Vale observar que na primeira opção (como um vetor simnples), essa linha não seria necessária.
    //Pois ao declarar o vetor, já estamos alocando a memória.
}

ListaSNO::~ListaSNO()
{
    free(lista); //Ao destruir o objeto lista, libere a memória alocada manualmente no construtor (malloc)
}

int ListaSNO::Inserir(Elemento novo) //Método inserir
{
    if (ListaCheia() == 0) //Se a lista não está cheia
    {
        lista[nElementos] = novo; //Inserir o novo elemento na última posição
        nElementos++; //Incrementar o contador de elementos na lista
        return 1; //Inserção realizada com sucesso
    }
    else
    {
        return 0; //Se a lista está cheia, então não é possível inserir.
    }
}

int ListaSNO::Buscar(int ID) const//Busca exaustiva
{
    for (int i = 0; i < nElementos; i++) //Para cada posição da lista
    {
        if (lista[i].ObterID() == ID) //Se o ID é igual ao procurado
            return i; //Retorne a posição
    }
    return -1; //Se nenhum return foi executado até agora, o elemento não está na lista.
}

int ListaSNO::Remover(int ID) //Remover o primeiro elemento que apresenta esse ID
{
    if (ListaVazia() == 0) //Se a lista não está vazia
    {
        int pos = Buscar(ID); //Buscar
        if (pos < 0) //Se não foi localizado
        {
            return 0; //Não é possível remover
        }
        else
        {
            //Do contrário:
            lista[pos] = lista[nElementos-1]; //Mover o último elemento para essa posição (fechar o buraco)
            nElementos--; //Decrementar o número de elementos da lista
            return 1; //Remoção com sucesso
        }
    }
    else
    {
        return 0; //Se alista está vazia, não é possível remover
    }
}



int ListaSNO::Alterar(int ID, Elemento elementoAtualizado)
{
    int pos = Buscar(ID); //Buscar pelo elemento
    if (pos < 0) //Se ele não foi encontrado
    {
        return 0; //Retornar 0 -> Não foi possível efetuar a alteração
    }
    else
    {
        //Se o elemento foi localizado
        lista[pos] = elementoAtualizado; //Vamos substituir esse elemento pelo elementoAtualizado
        return 1; //Alteração realizada com sucesso
    }
}

int ListaSNO::ListaCheia() const
{
    if (nElementos >= TAM_MAX)
        return 1;
    else
        return 0;
}

int ListaSNO::ListaVazia() const
{
    if (nElementos <= 0)
        return 1;
    else
        return 0;
}

int ListaSNO::NumeroElementos() const
{
    return nElementos;
}

void ListaSNO::Imprimir() const
{
    std::cout << "{ ";
    for (int i = 0; i < nElementos - 1; i++)
        std::cout << lista[i].ObterID() << ", ";
    if (nElementos > 0)
        std::cout << lista[nElementos - 1].ObterID();
    std::cout << " } " << std::endl;
}

Elemento& ListaSNO::operator[](int pos)
{
    //Se pos é uma posição válida e ocupada na lista:
    if (pos >= 0 && pos < nElementos)
    {
        return lista[pos];  //Retorne o elemento que está nessa posição.
        //Importante: esse return retorna um ponteiro (implícito) para a posição pos da lista
        //Esse ponteiro permite alterar diretamente essa posição da lista.
    }
    else
    {
        //caso contrário: dispare uma exceção (tal como um erro).
        throw std::invalid_argument("Posição Inválida.");
        //Se não tratarmos as exceções, o programa é interrompido.
        //Vamos abordar esse assunto no curso de POO
    }
}
