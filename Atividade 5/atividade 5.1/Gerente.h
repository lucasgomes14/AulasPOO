#ifndef GERENTE_H_
#define GERENTE_H_

#include "Empregado.h"

#include <iostream>
#include <string>

using namespace std;

class Gerente : public Empregado
{
    private:
        //atributos
        string departamento;
    
    public:
        //construtor
        Gerente(string novoNome, double novoSalario, string novoDepartamento);

        //metodos
        void setDepartamento(string novoDepartamento);
        string getDepartamento();

        void toString(string novoNome, double salario, string departamento);
};
#endif