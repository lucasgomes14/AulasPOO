#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int questao, sair = 0; //variável inteira questão e sair é para o switch principal

    int digito1, numero1, sair1 = 0; //variáveis inteira da questão 1 que estão no case 1 do menu principal

    int sair2 = 0, digito2, a, b, c, delta, raiz1, raiz2; //variáveis inteira da questão 2 que estão no case 2 do menu principal

    char ordem[5][9] = {{"primeiro"},{"segundo"},{"terceiro"},{"quarto"},{"quinto"}}; // lista de nomes da ordem para o laço de repetição questão 3 que estão no case 3 do menu principal
    float numeros_3[5], positivos = 0, negativos = 0, contadorPositivos = 0, contadorNegativos = 0, mediaPositivo = 0, mediaNegativo = 0; // //variáveis flutuantes da questão 3 que estão no case 3 do menu principal
    int sair3 = 0, digito3; // variáveis inteira da questão 3 que estão no case 3 do menu principal
    
    int sair4 = 0, digito4,  n = 0, k = 0, resultado = 0, numeroDerepeticoes = 1; // variáveis inteira da questão 4 que estão no case 4 do menu principal

    int sair5 = 0, digito5, aleatorio, valor, acertarNumero = 0;// variáveis inteira da questão 5 que estão no case 5 do menu principal



    do //do while para que o programa fique em loop para que o usuário decida o que quer fazer no menu
    {   
        int sair1 = 0, sair2 = 0, sair3 = 0, sair4 = 0, sair5 = 0;
        std::cout << "Digite a questão que você quer vê:\n1- Questão 1.\n2- Questão 2.\n3- Questão 3.\n4- Questão 4.\n5- Questão 5.\n6- Sair do programa.\n" << std::endl;//menu para escolher qual questão entrar
        std::cin >> questao;
        switch(questao)
        {
            case 1: // case 1 para responder a questão 1 do exercício
                do
                {
                    sair1 = 0;
                    std::cout << "\nExercício 1\nDigite se você quer executar a calculadora de raízes ou sair:\n1- Para entrar na calculadora.\n2- Para sair.\n" << std::endl;//menu para responder a questão 1
                    std::cin >> digito1;
                    switch(digito1)
                    {
                    case 1: // case para responder a questão
                        std::cout << "Digite o número que você quer saber a raiz: " << std::endl;
                        std::cin >> numero1;
                        std::cout << "A raíz de " << numero1 << " é igual a " << sqrt(numero1) << "\n" << std::endl;
                        break;

                    case 2: // case para sair do exercício 1
                        std::cout << "Questão 1 resolvida ^-^\n" << std::endl;
                        sair1 = 1;
                        int digito1;
                        break;

                    default: // retorna uma mensagem se o usuário colocou um número que não tenha no menu
                        std::cout << "Digito inválido, digite novamente!" << std::endl;
                        break;
                    }
                }
                while(sair1 != 1); // condição para sair do loop
                break;

            case 2: // case 2 para responder a questão 2 do exercício
                do
                {   
                    sair2 = 0;
                    std::cout << "\nExercício 2\nDigite:\n1- Para entrar no programa.\n2- Para sair do programa.\n" << std::endl; //menu para responder a questão 2
                    std::cin >> digito2;

                    switch(digito2)
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
                            sair2 = 1;
                            int digito2;
                            break;

                        default: // retorna uma mensagem se o usuário colocou um número que não tenha no menu
                            std::cout << "\nOpção inválida! Digite novamente\n" << std::endl;
                            break; 
                    }
                } 
                while (sair2 != 1); // condição para sair do loop
                
                break;
            
            case 3: // case 3 para responder a questão 3 do exercício
                do
                {
                    sair3 = 0;
                    std::cout << "\nExercício 3\nDigite:\n1- Para entrar no programa.\n2- Para sair do programa." << std::endl; // menu para responder a questão 3
                    std::cin >> digito3;

                    switch(digito3)
                    {
                        case 1: // case para responder a questão
                            for(int tamanho = 0; tamanho < 5; tamanho++) // for para repetir 5 vezes
                            {
                                std::cout << "\nDigite o " << ordem[tamanho] << " número: " << std::endl; 
                                std::cin >> numeros_3[tamanho];
                                std::cout << "\nNúmero " << numeros_3[tamanho] << " guardado com sucesso!" << std::endl;//Entrada dos números e confirmando a saída do número que digitou
                                
                                if(numeros_3[tamanho] >= 0) // condição para somar os valores positivos e contador a quantidade de valores positivos
                                {
                                    positivos += numeros_3[tamanho];
                                    contadorPositivos++;
                                }
                                else // condição para somar os valores negativos e contador a quantidade de valores negativos
                                {
                                    negativos += numeros_3[tamanho];
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
                            break;

                        case 2: // case para sair da questão
                            std::cout << "\nQuestão 3 resolvida ^-^\n" << std::endl;
                            sair3 = 1;
                            int digito3;
                            break;

                        default: // retorna uma mensagem se o usuário colocou um número que não tenha no menu
                            std::cout << "\nOpção inválida! Digite novamente\n" << std::endl;
                            break;
                    }
                }
                while(sair3 != 1); // condição para sair do loop
                break;

            case 4: // case 4 para responder a questão 4 do exercício
                do
                {
                    sair4 = 0;
                    std::cout << "\nExercício 4\nDigite:\n1- Para entrar no programa.\n2- Para sair do programa.\n" << std::endl; // menu para responder a questão 4
                    std::cin >> digito4;
                    
                    switch(digito4)
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
                            sair4 = 1;
                            int digito4;
                            break;

                        default: // retorna uma mensagem se o usuário colocou um número que não tenha no menu
                            std::cout << "\nOpção inválida! Digite novamente\n" << std::endl;
                            break;
                    }
                } 
                while (sair4 != 1);// condição para sair do loop  
                break;

            case 5: // case 5 para responder a questão 5 do exercício
                do
                {
                    sair5 = 0;
                    std::cout << "\nExercício 5\nDigite:\n1- Para entrar no programa.\n2- Para sair do programa.\n" << std::endl; // menu para responder a questão 5
                    std::cin >> digito5;

                    switch (digito5)
                    {
                        case 1: //case para responder a pergunta
                            srand(time(NULL));
                            aleatorio = rand() % 100;
                            while(acertarNumero != 1) // while para que o usuário continue tentando acerta o numero sem finalizar o programa
                            {
                                std::cout << "\nDigite um valor entre 0 a 100, para acertar o número que o NPC obteve\n" << std::endl;
                                std::cin >> valor;

                                if(valor > aleatorio) // condição para printar mensagem para informar o usuário se o número é maior ou menor ou se acertou o número
                                {
                                    std::cout << "\nO número " << valor << " é maior do que o número certo!\n" << std::endl;
                                }
                                else if(valor < aleatorio)
                                {
                                    std::cout << "\nO número " << valor << " é menor do que o número certo!\n" << std::endl;
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
                            sair5 = 1;
                            int digito5;
                            break;

                        default: // retorna uma mensagem se o usuário colocou um número que não tenha no menu
                            std::cout << "\nOpção inválida! Digite novamente\n" << std::endl;
                            break;
                    }
                }
                while (sair5 != 1);// condição para sair do loop
                break;

            case 6: // case para printar mensagem e finalizar o programa
                std::cout << "Exercício resolvido! ^⁻^" << std::endl;
                sair = 1;
                break;

            default: // retorna uma mensagem se o usuário colocou um número que não tenha no menu
                std::cout << "Opção errada, digite novamente!\n" << std::endl;
                break;
        }
    }
    while(sair != 1);//condição de saída do loop
    return 0;
}