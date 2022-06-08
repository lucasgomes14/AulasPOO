#ifndef CONTA.H
#define CONTA.H

#include "Transacao.h"
#include "Cliente.h"

class Conta
{
    private:
        //Atributos
        int codigo;
        Cliente cliente;
        Transacao trans;
        int qTransacoes;

    public:
        //Construtor
        Conta(int codigo, Cliente cliente, Transacao trans, int qTransacoes);

        //Metodos
        void setCodigo(int novoCodigo);
        int getCodigo();

        void setCliente(Cliente novoCliente);
        Cliente getCliente();

        void setTransacao(Transacao novoTrans);
        Transacao getTransacao();

        void setQTransacoes(int novoQTransacoes);
        int getQTransacoes();
};

#endif