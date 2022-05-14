#include <iostream>

using namespace std;

class Empregado
{
    public:
    //atributos;
    string nome;
    string sobrenome;
    double salarioMensal;

    //metodos e funções
    void setNome(string novoNome);
    string getNome();
    void setSobrenome(string novoSobrenome);
    string getSobrenome();
    void setSalarioMensal(double novoSalarioMensal);
    double getSalarioMensal();
    void aumentoSalario(double SalarioMensal);
    double salarioAnual(double SalarioMensal);
};

