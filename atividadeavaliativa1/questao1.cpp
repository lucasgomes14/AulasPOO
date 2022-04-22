#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int digito, numero, sair = 0; //variáveis inteira da questão 1 
    do
    {
        sair = 0;
        std::cout << "\nExercício 1\nDigite se você quer executar a calculadora de raízes ou sair:\n1- Para entrar na calculadora.\n2- Para sair.\n\n Digite: " << std::endl;//menu para responder a questão 1
        std::cin >> digito;

        switch(digito)
        {
            case 1: // case para responder a questão
                std::cout << "Digite o número que você quer saber a raiz: " << std::endl;
                std::cin >> numero;
                std::cout << "A raíz de " << numero << " é igual a " << sqrt(numero) << "\n" << std::endl;
                break;

            case 2: // case para sair do exercício 1
                std::cout << "Questão 1 resolvida ^-^\n" << std::endl;
                sair = 1;
                int digito;
                break;

            default: // retorna uma mensagem se o usuário colocou um número que não tenha no menu
                std::cout << "Digito inválido, digite novamente!" << std::endl;
                break;
        }
    } while (sair != 1);
    
    return 0;
}














    

    