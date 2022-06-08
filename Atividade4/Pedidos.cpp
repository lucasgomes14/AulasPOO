#include "Pedidos.h"

#include <iostream>

using namespace std;

Pedidos::Pedidos()
{
  
}

void Pedidos::setValorPedido(double novoValorPedido)
{
    valorPedido = novoValorPedido;
}

double Pedidos::getValorPedido()
{
    return this -> valorPedido;
}

void Pedidos::setProdutos(Produtos novoProduto)
{
    produto = novoProduto;
}

Produtos Pedidos::getProdutos()
{
    return this -> produto;
}

Produtos Pedidos::addProdutos()
{
    Produtos lista[] = {Pedidos::getProdutos()};
    return lista[0];
}
