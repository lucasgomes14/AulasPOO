#ifndef PRODUTOS_H
#define PRODUTOS_H

using namespace std;

class Produtos
{
    private:
        //atributos
        string nomeProduto;
        double valorProduto;
        int quantidade;

    public:
        //construtor
        Produtos();
        
        //metodos
        void setNomeProduto(string novoNomeProduto);
        string getNomeProduto();

        void setValorProduto(string valorProduto);
        double getValorProduto();

        void setQuantidade(int novaQuantidade);
        int getQuantidade();

        double valorTotal();
};

#endif