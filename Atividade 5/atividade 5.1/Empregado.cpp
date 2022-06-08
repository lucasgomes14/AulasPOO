#include "Empregado.h"

#include <iostream>
#include <string>

using namespace std;

Empregado::Empregado(string novoNome, double novoSalario)
{
    this -> nome = novoNome;
    this -> salario = novoSalario;
}

void Empregado::setNome(string novoNome)
{
    nome = novoNome;
}

string Empregado::getNome()
{
    return this ->nome;
}

void Empregado::setSalario(double novoSalario)
{
    salario = novoSalario;
}

double Empregado::getSalario()
{
    return this -> salario;
}

void Empregado::toString(string novoNome, double salario)
{
    cout << "\n\nNome: " << novoNome << endl;
    cout << "Salario: " << salario << endl;
}