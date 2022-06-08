#include "Cliente.h"
#include <string>

Cliente::Cliente(string nome, Conta conta, string endereco)
{
    this -> nome = nome;
    this -> conta = conta;
    this -> endereco = endereco;
}

void Cliente::setNome(string novoNome)
{
    nome = novoNome;
}

string Cliente::getNome()
{
    return this -> nome;
}

void Cliente::setConta(Conta novaConta)
{
    conta = novaConta;
}

Conta Cliente::getConta()
{
    return this -> conta;
}

void Cliente::setEndereco(string novoEndereco)
[
    endereco = novoEndereco;
]

string Cliente::getEndereco()
{
    return this -> endereco;
}