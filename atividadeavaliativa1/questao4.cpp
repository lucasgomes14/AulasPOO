#include <iostream>

using namespace std;

int main()
{
    int sair = 0, digito,  n = 0, k = 0, resultado = 0, numeroDerepeticoes = 1; // variáveis inteira da questão 4
    do
    {
        sair = 0;
        std::cout << "\nExercício 4\nDigite se você quer executar ou sair.\n1- Para entrar no programa.\n2- Para sair do programa.\nDigite: " << std::endl; // menu para responder a questão 4
        std::cin >> digito;
        
        switch(digito)
        {

            case 1: // case para responder a questão
                while(k >= 0) //while para que o loop fique infinito até que o usuário digite um valor menor que 0
                {
                    int resultado = 0, numeroDerepeticoes = 1;
                    std::cout << "\nPara sair do programa digite um número menor que 0 em \"k\"\n" << std::endl; // Mensagem para lembra o usuário para sair do programa

                    std::cout << "\nDigite o valor inteiro para \"n\": " << std::endl; // atribuindo valor para n
                    std::cin >> n;
                    resultado = n; // atribuindo a variável resultado o valor de n

                    std::cout << "\nDigite o valor de \"k\": \n" << std::endl; // atribuindo valor para k
                    std::cin >> k;

                    if(k == 0) // condição para saber se k é igual maior ou menor a 0, se for igual ele vai printar mensagem = 1, se for maior prita mensagem com o resultado, se for menor printa mensagem informando que o usuário saiu do programa
                    {
                        std::cout << "\nO resultado é = 1\n" << std::endl;
                    }
                    else if(k > 0)
                    {
                        for(numeroDerepeticoes; numeroDerepeticoes < k; numeroDerepeticoes++)
                        {
                            resultado *= n;
                        }
                        std::cout << "\nO resultado é = " << resultado << "\n" << "\n" << std::endl;
                    }
                    else if(k < 0)
                    {
                        std::cout << "\nVocê saiu do programa!!\n" << std::endl;
                    }
                }
                break;

            case 2: // case para sair da questão
                std::cout << "\nQuestão 4 resolvida ^-^\n" << std::endl;
                sair = 1;
                int digito;
                break;

            default: // retorna uma mensagem se o usuário colocou um número que não tenha no menu
                std::cout << "\nOpção inválida! Digite novamente\n" << std::endl;
                break;
        }
    } 
    while (sair != 1);// condição para sair do loop  
    return 0;
}