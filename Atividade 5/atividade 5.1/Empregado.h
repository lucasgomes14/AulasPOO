#ifndef EMPREGADO_H_
#define EMPREGADO_H_

#include <iostream>
#include <string>

using namespace std;

class Empregado
{
    private:
        //atributos
        string nome;
    
    protected:
        double salario;
    
    public:
        //construtor
        Empregado(string nome, double salario);

        //metodos
        void setNome(string novoNome);
        string getNome();

        void setSalario(double novoSalario);
        double getSalario();

        void toString(string novoNome, double salario);
};

#endif