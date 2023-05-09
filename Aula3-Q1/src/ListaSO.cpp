#include "ListaSO.h"

#include <stdlib.h>
#include <iostream>
#include <exception>

ListaSO::ListaSO() //Construtor
{
    //ctor
    nElementos = 0; //Se a lista está sendo construída agora, ela está vazia: nElementos = 0

    //Como optei pela segunda forma de declarar a lista, estamos alocando a memória para armazenar a lista
    //Observe que o sizeof retorna o tamanho necessário para armazenar um objeto da classe Elemento
    lista = (Elemento*) malloc (TAM_MAX * sizeof(Elemento));

    //Vale observar que na primeira opção (como um vetor simnples), essa linha não seria necessária.
    //Pois ao declarar o vetor, já estamos alocando a memória.
}

ListaSO::~ListaSO()
{
    free(lista); //Ao destruir o objeto lista, libere a memória alocada manualmente no construtor (malloc)
}

int ListaSO::Inserir(Elemento novo) //Método inserir
{
    if (ListaCheia() == 0) //Se a lista não está cheia
    {
        if (ListaVazia() == 1) //Se a lista está vazia
        {
            lista[0] = novo; //Inserir na primeira posição da lista
            nElementos++;
            return 1;
        }
        else
        {
            int pos = BuscaBinaria(novo.ObterID());
            if (pos < nElementos && lista[pos].ObterID() == novo.ObterID())
            {
                return 0; //Não permitir inserção de elementos duplicados

            }
            else
            {
                if (pos >= nElementos) //Se a busca retornou que o elemento deve entrar após o último
                {
                    lista[nElementos] = novo; //Ocupar a última posição da lista
                    nElementos++;
                    return 1;
                }
                else //Caso contrário
                {
                    AbrirEspaco(pos);
                    lista[pos] = novo; //Inserir o novo elemento na última posição
                    nElementos++; //Incrementar o contador de elementos na lista
                    return 1; //Inserção realizada com sucesso
                }
            }
        }
    }
    else
    {
        return 0; //Se a lista está cheia, então não é possível inserir.
    }
}

int ListaSO::BuscaOrdenada(int ID) const//Busca ordendada
{
    int i = 0;
    while ( i < nElementos && lista[i].ObterID() <= ID) //Para pensar: qual é a diferença entre < e <= nesse caso? E se a lista aceitasse elementos com mesmo ID?
    {
        i++;
    }
    return i;
}

int ListaSO::BuscaBinaria(int ID) const
{
    return BuscaBinariaSeq(ID, 0, nElementos);
}

int ListaSO::BuscaBinaria(int ID, int ini, int fim) const
{
    if (ini >= fim) //Inicio e Fim se cruzaram (fim da busca)?
    {
        return ini; //Sim, retorne a posição onde isso ocorreu (ini)
    }
    else //Não:
    {
        int meio = (fim + ini) / 2; //Identifique a posição central da lista iniciada em ini e terminada em fim (operadores inteiros -> divisão inteira)
        if (lista[meio].ObterID() == ID) //O elemento buscado está na posição meio da lista?
        {
            return meio; //Sim: retorne o índice meio (posição do elemento buscado)
        }
        else //Não:
        {
            if (ID < lista[meio].ObterID()) //O elemento buscado é menor do que o elemento na posição meio?
            {
                return BuscaBinaria(ID, ini, meio); //Sim, logo o elemento está ANTES da posição meio
            }
            else
            {
                return BuscaBinaria(ID, meio+1, fim); //Não, logo o elemento está DEPOIS da posição meio
            }
        }
    }
}

int ListaSO::BuscaBinariaSeq(int ID, int ini, int fim) const
{
    while (ini < fim)
    {
        int meio = (fim + ini) / 2; //Identifique a posição central da lista iniciada em ini e terminada em fim (operadores inteiros -> divisão inteira)
        if (lista[meio].ObterID() == ID) //O elemento buscado está na posição meio da lista?
        {
            return meio; //Sim: retorne o índice meio (posição do elemento buscado)
        }
        else //Não:
        {
            if (ID < lista[meio].ObterID())
                fim = meio;
            else
                ini = meio + 1;
        }
    }
    return ini;
}


void ListaSO::AbrirEspaco(int pos)
{
    for (int i = nElementos; i > pos; i--)
    {
        lista[i] = lista[i-1];
    }
}

void ListaSO::FecharEspaco(int pos)
{
    for (int i = pos; i < nElementos - 1; i++)
    {
        lista[i] = lista[i+1];
    }
}

int ListaSO::Remover(int ID) //Remover o primeiro elemento que apresenta esse ID
{
    if (ListaVazia() == 0) //Se a lista não está vazia
    {
        int pos = BuscaBinaria(ID); //Buscar
        if (pos >= nElementos || lista[pos].ObterID() != ID) //Se não foi localizado
        {
            return 0; //Não é possível remover
        }
        else
        {
            //Do contrário:
            FecharEspaco(pos);
            nElementos--; //Decrementar o número de elementos da lista
            return 1; //Remoção com sucesso
        }
    }
    else
    {
        return 0; //Se alista está vazia, não é possível remover
    }
}



int ListaSO::Alterar(int ID, Elemento elementoAtualizado)
{
    int pos = BuscaBinaria(ID); //Buscar pelo elemento
    if (pos >= nElementos || lista[pos].ObterID() != ID) //Se ele não foi encontrado
    {
        return 0; //Retornar 0 -> Não foi possível efetuar a alteração
    }
    else
    {
        //Se o elemento foi localizado
        if (elementoAtualizado.ObterID() != ID)
        {
            Remover(ID);
            Inserir(elementoAtualizado);
        }
        else
        {
            lista[pos] = elementoAtualizado;
        }
        return 1; //Alteração realizada com sucesso
    }
}

int ListaSO::ListaCheia() const
{
    if (nElementos >= TAM_MAX)
        return 1;
    else
        return 0;
}

int ListaSO::ListaVazia() const
{
    if (nElementos <= 0)
        return 1;
    else
        return 0;
}

int ListaSO::NumeroElementos() const
{
    return nElementos;
}

void ListaSO::Imprimir() const
{
    std::cout << "{ ";
    for (int i = 0; i < nElementos - 1; i++)
        std::cout << lista[i].ObterID() << ", ";
    if (nElementos > 0)
        std::cout << lista[nElementos - 1].ObterID();
    std::cout << " } " << std::endl;
}

Elemento& ListaSO::operator[](int pos)
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
