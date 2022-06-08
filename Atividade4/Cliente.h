#ifndef CLIENTE_H
#define CLIENTE_H

#include "Endereco.h"
#include "Pedidos.h"

using namespace std;

class Cliente
{
  //atributos
  private:
    Endereco endereco;
    string telefone;
    Pedidos pedidos;

  public:
    //atributos
    string nomeCliente;

    //construtor
    Cliente();

    //metodos
    void setNome(string novoNome);
    string getNome();

    void setEndereco(Endereco novoEndereco);
    Endereco getEndereco();

    void setTelefone(string novoTelefone);
    string getTelefone();

    void setPedidos(Pedidos novoPedidos);
    Pedidos getPedidos();
};

#endif