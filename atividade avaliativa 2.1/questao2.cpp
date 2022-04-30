#include <iostream>

using namespace std;

int **alocamatriz(int nlinhas, int ncolunas)       //Função para fazer uma matriz estática, alocar na memória, atribuir valores na matriz, e retornar a matriz
{
    int numero;
    int **matriz = new int*[nlinhas];

    for(int i = 0; i < nlinhas; i++)
    {
        matriz[i] = new int[ncolunas];
        for(int j = 0; j < ncolunas; j++)
        {
            std::cout << "\nDigite um número para adicionar à matriz na linha [" << i + 1 << "] e coluna [" << j + 1 << "] : ";
            std::cin >> matriz[i][j];
        }
    }
    return matriz;
}

void matrizquadrada(int **matriz, int nlinhas, int ncolunas)                //função para printar a matriz e dizer se ela é uma matriz quadrada ou não
{
    std::cout << "\nSua matriz: " << std::endl;
    for(int i = 0; i < nlinhas; i++)                                      //percorrendo para imprimir os valores com uma formatação de matriz
    {
        for(int j = 0; j < ncolunas; j++)
        {
            if(j < (ncolunas - 1))
            {
                std::cout << matriz[i][j] << " ";
            }
            else
            {
                std::cout << matriz[i][j] << std::endl;
            }
        }
    }
    
    if(nlinhas == ncolunas)                           //condição para informar se a matriz é quadrada ou não
    {
        std::cout <<"\n\nSua matriz é quadrada!\n" << std::endl;
    }
    else
    {
        std::cout <<"\n\nSua matriz não é quadrada!\n" << std::endl;
    }
                                                                                //deletando da memoria a matriz
    for(int i = 0; i < ncolunas; i++)                                       
    {
        delete [] matriz[i];
    }
    delete [] matriz;
}
                                                                                //programa principal
int main()                                                                      
{
    int linha, coluna, numero;
    int **matriz;

    std::cout << "Digite o tamanho de linha para sua matriz: ";
    std::cin >> linha;
                                                                            // atribuindo linhas e colunas
    std::cout << "\nDigite o tamanho de coluna para sua matriz: ";
    std::cin >> coluna;
                                                                            //chamando alocamatriz para fazer matriz dinâmica
    matriz = alocamatriz(linha,coluna);       
                                                                //chamando matrizquadrada para imprimir a matriz e informar se é quadrada ou não
    matrizquadrada(matriz, linha, coluna);

    return 0;
}