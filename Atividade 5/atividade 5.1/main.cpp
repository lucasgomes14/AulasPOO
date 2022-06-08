#include "Empregado.cpp"
#include "Gerente.cpp"
#include "Vendedor.cpp"

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nome, departamento;
    double salario, comissao;

    cout << "\n----------Gerente----------" << endl;
    cout << "Digite seu nome: ";
    cin >> nome;
    cout << "\nDigite seu salario: ";
    cin >> salario;
    cout << "\nDigite seu departamento: ";
    cin >> departamento;

    Gerente gerente = Gerente(nome, salario, departamento);
    gerente.setNome(nome);
    gerente.setSalario(salario);
    gerente.setDepartamento(departamento);

    cout << "\n----------Vendedor----------" << endl;
    cout << "Digite seu nome: ";
    cin >> nome;
    cout << "\nDigite seu salario: ";
    cin >> salario;
    cout << "\nDigite sua comissao: ";
    cin >> comissao;
  
    Vendedor vendedor = Vendedor(nome, salario, comissao);
    vendedor.setNome(nome);
    vendedor.setSalario(salario);
    vendedor.setPercentualComissao(comissao);
    
    gerente.toString(gerente.getNome(), gerente.getSalario(), gerente.getDepartamento());
  
    vendedor.toString(vendedor.getNome(), vendedor.getSalario(), vendedor.getPercentualComissao());

    return 0;
}