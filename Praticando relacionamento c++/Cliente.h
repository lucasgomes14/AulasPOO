#ifndef CLIENTE.H
#define CLIENTE.H

#include "Conta.h"
#include <string>

class Cliente
{
    private:
        //atributos
        string nome;
        Conta conta;
        string endereco;

    public:
        //construtor
        Cliente(string nome, Conta conta, string endereco);

        //metodos
        void setNome(string nome);
        string getNome();

        void setConta(Conta novaConta);
        Conta getConta();

        void setEndereco(string novoEndereco);
        string getEndereco();
};

#endif