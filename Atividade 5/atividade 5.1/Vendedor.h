#ifndef VENDEDOR_H_
#define VENDEDOR_H_

#include "Empregado.h"

#include <iostream>
#include <string>

using namespace std;

class Vendedor : public Empregado
{
    private:
        //atributos
        double percentualComissao;

    public:
        //construtor
        Vendedor(string novoNome, double novoSalario, double novoPercentualComissao);

        //metodos
        void setPercentualComissao(double novoPercentual);
        double getPercentualComissao();

        void toString(string novoNome, double salario, double percentualComissao);
};

#endif