#include <iostream>

using namespace std;

int main()
{
    int sair = 0, digito, aleatorio, valor, acertarNumero = 0;// variáveis inteira da questão 5

    do
    {
        sair = 0;
        std::cout << "\nExercício 5\nDigite se você quer executar a calculadora de raízes ou sair:\n1- Para entrar na calculadora.\n2- Para sair.\n\n Digite: " << std::endl; // menu para responder a questão 5
        std::cin >> digito;

        switch (digito)
        {
            case 1: //case para responder a pergunta
                srand(time(NULL));
                aleatorio = rand() % 100;
                std::cout << "Jogo de adivinhar um número. O computador vai sortear um número entre 0 e 100 e você vai tentar adivinhar este número." << std::endl;
                
                std::cout << "\nDigite um valor entre 0 a 100, para acertar o número que o computador obteve:\n" << std::endl;

                while(acertarNumero != 1) // while para que o usuário continue tentando acerta o numero sem finalizar o programa
                {
                    std::cin >> valor;

                    if(valor > aleatorio) // condição para printar mensagem para informar o usuário se o número é maior ou menor ou se acertou o número
                    {
                        std::cout << "\nO número " << valor << " é maior do que o número certo! Digite outro número menor que "<< valor <<":" << std::endl;
                    }
                    else if(valor < aleatorio)
                    {
                        std::cout << "\nO número " << valor << " é menor do que o número certo! Digite outro número maior que "<< valor <<":" << std::endl;
                    }
                    else if(valor == aleatorio)
                    {
                        std::cout << "\nO número " << valor << " é o número certo! \nParabéns por ter conseguido ^⁻^\n" << std::endl;
                        acertarNumero = 1;
                    }
                }
                break;
            
            case 2: // case para sair da questão
                std::cout << "\nQuestão 5 resolvida ^-^\n" << std::endl;
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