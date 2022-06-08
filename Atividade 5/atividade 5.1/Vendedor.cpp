#include "Vendedor.h"

#include <iostream>
#include <string>

using namespace std;

Vendedor::Vendedor(string novoNome, double novoSalario, double novoPercentualComissao) : Empregado (novoNome, novoSalario)
{
    this -> percentualComissao = novoPercentualComissao;
}

void Vendedor::setPercentualComissao(double novoPercentual)
{
    percentualComissao = novoPercentual;
}

double Vendedor::getPercentualComissao()
{
    return this -> percentualComissao;
}

void Vendedor::toString(string novoNome, double salario, double percentualComissao)
{
    cout << "\n\n----------Vendedor----------" << endl;
    cout << "Nome: " << novoNome << endl;
    cout << "Salario: " << salario << endl;
    cout << "Salario com comissao: " << salario + percentualComissao << endl;
    cout << "Percentual da comissao: " << percentualComissao / 100 << "%"<< endl;
}