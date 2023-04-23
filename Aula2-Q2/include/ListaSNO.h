#ifndef LISTASNO_H
#define LISTASNO_H

#include "Elemento.h"

#define TAM_MAX 100

/*

Classe que implementa Lista Sequencial Não Ordenada.
Cada item dessa lista é um objeto da classe Elemento.

Essa classe implementa todos os métodos necessários para lidar com listas de alocação sequencial - não ordenadas.
Métodos inserir, remover, buscar e alterar.

Em adição a esses, outros métodos foram implementados para facilitar a leitura (listaCheia, listaVazia, etc.. ).

O método operator[] foi adicionado para demonstrar a possibilidade da linguagem de acessar posições da lista como um vetor.
*/

class ListaSNO
{
    public:
        ListaSNO(); //Construtor - Cria uma lista em branco
        ~ListaSNO(); //Destrutor - libera a memória utilizada na lista

        int Inserir(Elemento novo); //Inserir um novo elemento
        int Remover(int ID); //Remover o primeiro elemento que apresenta esse ID
        int Buscar(int ID) const; //Busca exaustiva pelo primeiro elemento que apresenta esse ID. Se não for localizado, retorna -1.
        int Alterar(int ID, Elemento elementoAtualizado); //Método para alterar um elemento. Localiza o ID e altera o elemento (atribuindo o novo na posição do antigo).

        int ListaCheia() const; //Método que indica se a lista está cheia ou não (nElementos >= TAM_MAX)
        int ListaVazia() const; //Método que indica se a lista está vazia ou não (nElementos <= 0)
        int NumeroElementos() const; //Retorna o número de elementos na lista

        void Imprimir() const; //Método auxiliar - apenas para visualização - imprime toda a lista

        Elemento& operator[](int pos); //Permite implementar o operador [] (usado em vetores e matrizes).
        //Dada a posição, retorna um ponteiro para o elemento na posição pos da lista.
        //Como ele retorna um ponteiro, as informações do elemento podem ser alteradas (com exceção do ID - que é privado).

    protected:

    private:
        int nElementos; //Número de elementos na lista -- Como é privado, só pode ser modificado pelos métodos Inserir e Remover.

        //Duas opções: Declarar a lista como um vetor comum
        //Elemento lista[TAM_MAX]; // -- como um vetor de Elemento

        //Ou usar o comando malloc - nesse caso a lista é representada por um ponteiro.
        Elemento* lista; //Vou optar pela segunda forma para exemplificar o construtor e o destrutor da classe

};

#endif // LISTASNO_H
