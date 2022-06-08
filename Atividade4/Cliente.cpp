#include "Cliente.h"
#include "Endereco.h"

#include <iostream>

using namespace std;

Cliente::Cliente()
{

}

void Cliente::setNome(string novoNome)
{
  nomeCliente = novoNome;
}

string Cliente::getNome()
{
  return this -> nomeCliente;
}

void Cliente::setEndereco(Endereco novoEndereco)
{
  endereco = novoEndereco;
}

Endereco Cliente::getEndereco()
{
  return this -> endereco;
}

void Cliente::setTelefone(string novoTelefone)
{
  telefone = novoTelefone;
}

string Cliente::getTelefone()
{
  return this -> telefone;
}

void Cliente::setPedidos(Pedidos novoPedidos)
{
  this -> pedidos = novoPedidos;
}

Pedidos Cliente::getPedidos()
{
  return this -> pedidos;
}