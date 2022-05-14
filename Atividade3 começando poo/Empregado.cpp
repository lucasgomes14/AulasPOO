#include "Empregado.h"
#include <iostream>

using namespace std;
                                                                //Implementando os metodos de set e get
void Empregado::setNome(string novoNome)
{
    nome = novoNome;
}

string Empregado::getNome()
{
    return this->nome;
}

void Empregado::setSobrenome(string novoSobrenome)
{
    sobrenome = novoSobrenome;
}

string Empregado::getSobrenome()
{
    return this->sobrenome;
}

void Empregado::setSalarioMensal(double novoSalarioMensal)
{
    salarioMensal = novoSalarioMensal;
}

double Empregado::getSalarioMensal()
{
    return this->salarioMensal;
}
                                                                //Metodos para retornar o salario anual
double Empregado::salarioAnual(double salarioMensal)
{
    double salarioAnual = salarioMensal * 12;
    return salarioAnual;
}
                                                                //Metodo para atualizar o novo salario do funcionario
void Empregado::aumentoSalario(double salarioMensal)
{
    double aumentoSalario = (salarioMensal * 0.10) + salarioMensal;
    Empregado::setSalarioMensal(aumentoSalario);
}
