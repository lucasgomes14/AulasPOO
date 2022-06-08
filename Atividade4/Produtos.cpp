#include "Produtos.h"

#include <iostream>

using namespace std;

Produtos::Produtos()
{
  
}

void Produtos::setNomeProduto(string novoNomeProduto)
{
    this -> nomeProduto = novoNomeProduto;
}

string Produtos::getNomeProduto()
{
    if(nomeProduto == "1")
    {
        return "Coxinha(s)";
    }
    else if (nomeProduto == "2")
    {
        return "Risole(s)";
    }
    else if (nomeProduto == "3")
    {
        return "Coca-Cola(s)";
    }
    else 
    {
        return "Opcao invalida";
    }
}

void Produtos::setValorProduto(string valorProduto)
{
    double novoValorProduto = 0;
    if (nomeProduto == "1")
    {
        novoValorProduto = 3.50;
    }
    else if (nomeProduto == "2")
    {
        novoValorProduto = 3.00;
    }
    else if (nomeProduto == "3")
    {
        novoValorProduto = 5.00;
    }

    this -> valorProduto = novoValorProduto;
}

double Produtos::getValorProduto()
{
    return this -> valorProduto;
}

void Produtos::setQuantidade(int novaQuantidade)
{
    quantidade = novaQuantidade;
}

int Produtos::getQuantidade()
{
    return this -> quantidade;
}

double Produtos::valorTotal()
{

    double total = 0;
    total += quantidade * valorProduto;
    return total;
}