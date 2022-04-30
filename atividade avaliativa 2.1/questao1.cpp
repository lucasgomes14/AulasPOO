#include <iostream>

using namespace std;

void listaOriginal(int lista[5])                                    //função para printar a lista original
{
    std::cout << "lista original: ";
    for(int i = 0; i < 5; i++)
    {
        std::cout << lista[i] << " ";
    }
}

void embaralhe(int lista[5])                                        //função para embaralhar a lista
{
    int lista2[5], aleatorio, cont = 0,somador = 0, index = 0;      // variáveis
    std::cout << "\nLista Embaralhada: ";

    srand(time(NULL));                                              // srand para que o "rand" sempre dê um valor diferente
    while(cont < 5)                                                 // laço de repetição para da o tamanho da lista
    {
        somador = 0;                                                // reiniciador da variável somador
        aleatorio = rand() % 5;                                     // atribuindo um valor aleatório de 0 a 4
        
        for(int i = 0; i < 5; i++)                                  // laço para comparar o valor da variável aleatório com todos os valores para nao se repetir
        {
            if(lista2[i] != aleatorio)
            {
                somador += 1;
            }
        }  

        if(somador == 5)                                             // condição para saber se o numero da variavel aleatorio nao se repetiu, se somador for igual a 5 então o valor não se repetiu
        {
            lista2[aleatorio] = aleatorio;                           // atribuindo o valor numa lista para que esse mesmo valor não se repita
            cout << lista[aleatorio] << " ";                         // printando o valor da da lista com a posição randomica
            cont++;                                                  // incremento para sair do while
        }
    }
}

int main()                                                           // Programa principal
{
    int lista[5];

    std::cout << "\nDigite 5 números para ser guardados: " << std::endl;
    for(int i = 0; i < 5; i++)                                       // Laço para atribuir valores na lista
    {
        std::cout << "\nDigite: ";
        std::cin >> lista[i];
    }        
    std::cout << "\n\n";

    listaOriginal(lista);                                             // Chamando a função listaOriginal
    embaralhe(lista);                                                 // Chamando a função embaralhe

    return 0;
}