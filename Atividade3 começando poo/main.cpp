#include <iostream>
#include "Empregado.cpp"

using namespace std;

int main() 
{
    Empregado funcionario1 = Empregado();                                       //Objeto funcionario1
    Empregado funcionario2 = Empregado();                                       //Objeto funcionario2
    string nome, sobrenome;
    double salario;                                                             //Variaveis
                                                                                //Valores do primeiro funcionario
    cout << "Digite o nome do primeiro funcionario: ";
    cin >> nome;
    funcionario1.setNome(nome);

    cout << "\nDigite o sobrenome do primeiro funcionario: ";
    cin >> sobrenome;
    funcionario1.setSobrenome(sobrenome);

    cout << "\nDigite o salario mensal atual do primeiro funcionario: ";
    cin >> salario;
    funcionario1.setSalarioMensal(salario);

    cout << "\n---------Funcionario cadastrato com sucesso!---------" << endl;
                                                                                //Valores do segundo funcionario
    cout << "\nDigite o nome do segundo funcionari o: ";
    cin >> nome;
    funcionario2.setNome(nome);

    cout << "\nDigite o sobrenome do segundo funcionario: ";
    cin >> sobrenome;
    funcionario2.setSobrenome(sobrenome);

    cout << "\nDigite o salario mensal atua do segundo funcionario: ";
    cin >> salario;
    funcionario2.setSalarioMensal(salario);

    cout << "\n---------Funcionario cadastrato com sucesso!---------" << endl;
                                                                                //Print dos dados do primeiro funcionario
    cout << "\n---------Primeiro Funcionario---------" << endl;

    cout << "\nNome: " << funcionario1.getNome() << endl;
    cout << "Sobrenome: " << funcionario1.getSobrenome() << endl;
    cout << "Salario mensal atual: " << funcionario1.getSalarioMensal() << endl;
    cout << "Salario anual: " << funcionario1.salarioAnual(funcionario1.getSalarioMensal()) << endl;
                                                                                //Atribuindo o novo salario do funcionario
    funcionario1.aumentoSalario(funcionario1.getSalarioMensal());               

    cout << "Novo salario com aumento de 10%: " << funcionario1.getSalarioMensal() << endl;
    cout << "Salario anual com o aumento de 10%: " << funcionario1.salarioAnual(funcionario1.getSalarioMensal()) << endl;
                                                                                //Print dos dados do segundo funcionario
    cout << "\n---------Segundo Funcionario---------" << endl;

    cout << "Nome: " << funcionario2.getNome() << endl;
    cout << "Sobrenome: " << funcionario2.getSobrenome() << endl;
    cout << "Salario mensal atual: " << funcionario2.getSalarioMensal() << endl;
    cout << "Salario anual: " << funcionario2.salarioAnual(funcionario2.getSalarioMensal()) << endl;
                                                                                //Atribuindo o novo salario do funcionario
    funcionario2.aumentoSalario(funcionario2.getSalarioMensal());

    cout << "Novo salario com aumento de 10%: " << funcionario2.getSalarioMensal() << endl;
    cout << "Salario anual com o aumento de 10%: " << funcionario2.salarioAnual(funcionario2.getSalarioMensal()) << endl;

    return 0;
}