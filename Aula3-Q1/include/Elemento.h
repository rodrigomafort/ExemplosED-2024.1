#ifndef ELEMENTO_H
#define ELEMENTO_H

/*

A classe Elemento representa cada item que pode ser inserido nas listas.
Nesse exemplo, cada elemento possui apenas o atributo ID.
Caso seja necessário, é possível criar outros atributos.

Vale observar também que o atributo ID foi tornado privado para impossibilitar a alteração dessa informação.
Esse atributo se tornou "APENAS LEITURA".
Depois de instanciado, o atributo ID não pode ser alterado.

Nas próximas aulas vamos avançar nos conceitos de encapsulamento, observando examente esse nível de controle.

Além disso, ao longo do curso vamos observar outras formas de implementar as listas sem a necessidade de uma classe para os itens.
(Interfaces e, em seguida, templates).

*/

class Elemento
{
    public:
        Elemento(int _ID); //Construtor requer o parâmetro ID.
        //Como não existe o construtor em branco, todo elemento precisa ser construído já com o seu ID.

        int ObterID() const; //Método que permite retornar o ID do objeto. Somente leitura.
        //o const na frente do método indica que esse método não altera nenhum atributo do objeto (não é permitido - resulta em erro de compilação).

    protected:

    private:
        int ID; //Atributo ID é privado. Somente métodos do próprio objeto podem visualizar/alterar essa informação
};

#endif // ELEMENTO_H
