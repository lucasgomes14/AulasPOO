#include "Conta.h"
#include <iostream>

Conta::Conta(int codigo, Cliente cliente, Transacao trans, int qTransacoes)
{
    this->codigo = codigo;
    this->cliente = cliente;
    this->trans = trans;
    this->qTransacoes = qTransacoes;
}

void Conta::setCodigo(int novoCodigo)
{
    codigo = novoCodigo;
}

int Conta::getCodigo()
{
    return this->codigo;
}

void Conta::setCliente(Cliente novoCliente)
{
    cliente = novoCliente
}

Cliente Conta::getCliente()
{
    return this->cliente;
}

void Conta::setTransacao(Transacao novoTrans)
{
    trans = novoTrans;
}

Cliente Conta::getTransacao()
{
    return this->trans;
}

void Conta::setQTransacoes(int novoQTransacoes)
{
    qTransacoes = novoQTransacoes;
}

int Conta::getQTransacoes()
{
    return this->qTransacoes;
}