#include "Transacao.h"
#include <iostream>

Transacao::Transacao(double valor, char tipo)
{
    this -> valor = valor;
    this -> tipo = tipo;
}

void Transacao::setValor(double novoValor)
{
    valor = novoValor;
}

double Transacao::getValor()
{
    return this -> valor;
}

void Transacao::setTipo(char novoTipo)
{
    tipo = novoTipo;
}

char Transacao::getTipo()
{
    return this -> tipo;
}

void Transacao::setData(Data novaData)
{
    data = novaData;
}

char Transacao::getData()
{
    return this -> data;
}

