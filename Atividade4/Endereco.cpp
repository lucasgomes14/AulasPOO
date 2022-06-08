#include "Endereco.h"

#include <iostream>

using namespace std;

Endereco::Endereco()
{
  
}

void Endereco::setRua(string novaRua)
{
    rua = novaRua;
}

string Endereco::getRua()
{
    return this -> rua;
}

void Endereco::setNumero(int novoNumero)
{
    numero = novoNumero;
}

int Endereco::getNumero()
{
    return this -> numero;
}

void Endereco::setBairro(string novoBairro)
{
    bairro = novoBairro;
}

string Endereco::getBairro()
{
    return this -> bairro;
}

void Endereco::setReferencia(string novaReferencia)
{
    referencia = novaReferencia;
}

string Endereco::getReferencia()
{
    return this -> referencia;
}