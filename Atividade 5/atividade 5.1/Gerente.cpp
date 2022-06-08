#include "Gerente.h"

#include <iostream>
#include <string>

using namespace std;

Gerente::Gerente(string novoNome, double novoSalario, string novoDepartamento) : Empregado(novoNome, novoSalario)
{
    this -> departamento = novoDepartamento;
}

void Gerente::setDepartamento(string novoDepartamento)
{
    departamento = novoDepartamento;
}

string Gerente::getDepartamento()
{
    return this -> departamento;
}

void Gerente::toString(string novoNome, double salario, string departamento)
{
    cout << "\n\n----------Gerente----------" << endl;
    cout << "Nome: " << novoNome << endl;
    cout << "Salario: " << salario << endl;
    cout << "Departamento: " << departamento << endl;
}