#include <iostream>
#include <math.h>

using namespace std;

int main()
{  
    int sair = 0, digito, a, b, c, delta; //variáveis inteira da questão 2 que estão no case 2 do menu principal
    double raiz1, raiz2;

    do
    {
        sair = 0;
        std::cout << "\nExercício 2\nDigite se você quer executar ou sair.\n1- Para entrar no programa.\n2- Para sair do programa.\nDigite: " << std::endl; //menu para responder a questão 2
        std::cin >> digito;

        switch(digito)
        {
            case 1: // case para responder a questão
                std::cout << "\nDigite o valor de \"a\": " << std::endl; // pedindo para o usuário digitar o valor de a
                std::cin >> a;

                std::cout << "\nDigite o valor de \"b\": " << std::endl; // pedindo para o usuário digitar o valor de b
                std::cin >> b;

                std::cout << "\nDigite o valor de \"c\": " << std::endl; // pedindo para o usuário digitar o valor de c
                std::cin >> c;

                delta = (pow(b,2)-4*a*c); //calculando o valor de delta

                raiz1 = (((-1 * b) - (sqrt(delta)))/(2*a)); //calculo da raiz um linha
                    
                raiz2 = (((-1 * b) + (sqrt(delta)))/(2*a)); // calculo da raiz duas linhas

                if(delta < 0)
                {
                    std::cout << "\na = " << a << "\nb = " << b << "\nc = " << c << "\nDelta = " << delta << "\n" << "Como delta é menor que zero, a equação não terá raízes reais, pois não existe raiz quadrada de número negativo.\n" << std::endl;
                }
                else
                {
                    std::cout << "\na = " << a << "\nb = " << b << "\nc = " << c << "\nDelta = " << delta << "\n" << "raiz\' = "<< raiz1 << "\n" << "raiz\" = " << raiz2 << "\n" << std::endl; //print do resultado de a, b, c, delta e raizes
                }
                break;

            case 2: // case para sair da questão
                std::cout << "\nQuestão 2 resolvida ^-^\n" << std::endl; // case para sair do programa
                sair = 1;
                int digito2;
                break;

            default: // retorna uma mensagem se o usuário colocou um número que não tenha no menu
                std::cout << "\nOpção inválida! Digite novamente\n" << std::endl;
                break; 
        }
    } while (sair != 1); // condição para sair do loop
             
    return 0;
}
