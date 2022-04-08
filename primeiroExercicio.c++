#include <iostream>
using namespace std;

int main() 
{
    int numero, condicaoMenu, digitoMenu;
    
    do
    {
        std::cout << "Digite um número inteiro: " << std::endl;
        std::cin >> numero;
        if((numero % 2) == 0)
        {
            if(numero < 100)
            {
            std::cout << "\nSeu número é par e menor que 100!\n" << std::endl;
            }else if(numero >= 100)
            {
            std::cout << "\nSeu número é par e maior ou igual a 100!\n" << std::endl;
            }
        }
        else 
        {
            if(numero < 100)
            {
            std::cout << "\nSeu número é impar e menor que 100!\n" << std::endl;
            }else if(numero >= 100)
            {
            std::cout << "\nSeu número é impar e maior que 100!\n" << std::endl;
            }
        }
            std::cout << "\nDigite:\n1- Usar programa.\n0- Sair do programa.\n" << std::endl;
    std::cin >> condicaoMenu;
    switch (condicaoMenu)
    {
        case 0:
            digitoMenu = 0;
            break;

        case 1:
            digitoMenu = 1;
            break;
    
        default:
            std::cout << "Opção inválida!\n" << std::endl;
            break;
    } 
    }while(digitoMenu == 1);
    std::cout << "Volte sempre ^-^" << std::endl;
  return 0;
}
