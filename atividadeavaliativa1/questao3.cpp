#include <iostream>

using namespace std;

int main()
{
    char ordem[5][9] = {{"primeiro"},{"segundo"},{"terceiro"},{"quarto"},{"quinto"}}; // lista de nomes da ordem para o laço de repetição questão 3
    
    float numeros[5], positivos = 0, negativos = 0, contadorPositivos = 0, contadorNegativos = 0, mediaPositivo = 0, mediaNegativo = 0, zero = 0; // variáveis flutuantes da questão 3 
    
    int sair = 0, digito; // variáveis inteira da questão 3


    do
    {    
        sair = 0;
        std::cout << "\nExercício 3\nDigite se você quer executar ou sair.\n1- Para entrar no programa.\n2- Para sair do programa.\nDigite: " << std::endl; // menu para responder a questão 3
        std::cin >> digito;

        switch(digito)
        {
            case 1: // case para responder a questão
                for(int tamanho = 0; tamanho < 5; tamanho++) // for para repetir 5 vezes
                {
                    std::cout << "\nDigite o " << ordem[tamanho] << " número: " << std::endl; 
                    std::cin >> numeros[tamanho];

                    
                    if(numeros[tamanho] > 0) // condição para somar os valores positivos e contador a quantidade de valores positivos
                    {
                        positivos += numeros[tamanho];
                        contadorPositivos++;
                    }
                    else if(numeros[tamanho] == 0) // condição para somar os valores negativos e contador a quantidade de valores negativos
                    {
                        zero += 1;
                    }
                    else
                    {
                        negativos += numeros[tamanho];
                        contadorNegativos++;
                    }
                }

                mediaPositivo = positivos/contadorPositivos; // Atribuindo valor da média dos positivos para a variável
                mediaNegativo = negativos/contadorNegativos; // Atribuindo valor da média dos negativos para a variável

                if(contadorPositivos == 0) // Condição para saber se tem valores positivos, se tiver ele printa o resultado, se não ele printa mensagem dizendo que não tem valores positivos
                {
                    std::cout << "\nNão podemos fazer a média pois não obteve nenhum número positivo\n" << std::endl;
                }
                else 
                {
                    std::cout << "\nA média dos números positivos é " << mediaPositivo << std::endl;
                }
                if(contadorNegativos == 0) // Condição para saber se tem valores negativos, se tiver ele printa o resultado, se não ele printa mensagem dizendo que não tem valores negativos
                {
                    std::cout << "\nNão podemos fazer a média pois não obteve nenhum número negativo\n" << std::endl;
                }
                else
                {
                    std::cout << "\nA média dos números negativo é " << mediaNegativo << std::endl;
                }
                if(zero > 0) // condição para saber se tem zero nas entradas
                {
                    std::cout << "\nHá " << zero << " zeros nas suas entradas!\n" << std::endl;
                }

                std::cout << "\nVocê digitou os números:\n" << std::endl;

                for(int i = 0; i < 5 ; i++)
                {
                    std::cout << numeros[i] << " " << std::endl;
                } 

                break;

            case 2: // case para sair da questão
                std::cout << "\nQuestão 3 resolvida ^-^\n" << std::endl;
                sair = 1;
                int digito3;
                break;

            default: // retorna uma mensagem se o usuário colocou um número que não tenha no menu
                std::cout << "\nOpção inválida! Digite novamente\n" << std::endl;
                break;
        }
    } while(sair != 1); // condição para sair do loop

    return 0;
}