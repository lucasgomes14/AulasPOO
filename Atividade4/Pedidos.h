#ifndef PEDIDOS_H
#define PEDIDOS_H

#include "Cliente.h"
#include "Produtos.h"

using namespace std;

class Pedidos
{
    public:
        //atributo
        double valorPedido;
        string data;
        string horario;
        Produtos produto;


        //construtor
        Pedidos();

        //metodos
        void setValorPedido(double novoValorPedido);
        double getValorPedido();

        void setProdutos(Produtos novoProduto);
        Produtos getProdutos();

        Produtos addProdutos();
};

#endif