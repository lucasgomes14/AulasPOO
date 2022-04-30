#include <iostream>

using namespace std;
// função para criar um matriz dinâmica
int **criar_matriz(int nlinha)
{
    int **matriz = new int*[nlinha];

    for(int i = 0; i < nlinha; i++)
    {
        matriz[i] = new int[2];
        for(int j = 0; j < 2; j++)
        {}
    }
    return matriz;
}
// função para adicionar a uma matriz valores inteiros
int **adiciona_item_matriz(int nlinha)
{
    int **matriz = criar_matriz(nlinha);   // chamando a função criar matriz para fazer a matriz e atribuir valores a tal

    for(int i = 0; i < nlinha; i++)        // for para receber valores e atribuir em seu determinado lugar
    {
        for(int j = 0; j < 2; j++)
        {

            if(j == 0)                    //condições para as perguntas sejam diferentes uma para as chaves e o outro para os valores
            {
                cout << "\nDigite um número para atribuir há chave [" << i + 1 << "] : ";
                cin >> matriz[i][j];
                cout << endl; 
            }
            else
            {
                cout << "\nDigite um número para atribuir há valor [" << i + 1 << "] : ";
                cin >> matriz[i][j];
                cout << endl; 
            }
        }
    }
    return matriz;
}
// função para imprimir a matriz que o usuário digitou
void imprimir_matriz(int **matriz, int nlinhas)
{
    for(int i = 0; i < nlinhas; i++)       //for para percorrer e imprimir os valores de cada posição corretamente
    {
        for(int j = 0; j < 2; j++)
        {
            if(j == 0)                   // condições para imprimir strigs e deixa a saída como pede na questão
            {
                if(i == 0)
                {
                    cout << "\nlista_bidimensional = {{" << matriz[i][j] << ",";
                }
                else
                {
                    cout << " {" << matriz[i][j] << ",";
                }
            }
            else
            {
                if(i == nlinhas - 1)
                {
                    cout << matriz[i][j] << "}}\n" << endl;
                }
                else
                {
                    cout << matriz[i][j] << "},";
                }
            }
        }
    }
}
// função para saber o tamanho de quantos valores tem na matriz igual ou maior ao númeor que o usuário falar de uma determinada matriz
int tamanho(int **matriz, int nlinhas, int filtro)
{
    int cont = 0;

    for(int j = 0; j < nlinhas; j++)       //for para percorrer a matriz e condição para incrementar a variavel cont o tamanho
    {
        if(matriz[j][0] >= filtro)
            cont++;
    }
    return cont;
}
// função para atribuir a outra matriz dinâmica os números que a chave que o usuário colocar e seja igual ou maior que o número de um filtro.
int **lista_bidimensional(int **matriz, int nlinhas, int filtro)
{
    int **matriz_menores;
    int contador_linha = 0, contador_coluna = 0, contador;

    contador = tamanho(matriz, nlinhas, filtro);      //chamando função tamanho para atribuir a contador a quantidade de linhas que a nova matriz vai ter
    matriz_menores = criar_matriz(contador);          //alocando na memoria o tamanho com a quantidade já exata de  vezes que o número é menor


    for(int i = 0; i < nlinhas; i++)                  //laço para percorrer a matriz e condição para atribuir a nova matriz os valores maiores ou igual
    {
        if(matriz[i][0] >= filtro)
        {
            matriz_menores[contador_linha][contador_coluna] = matriz[i][0];
            contador_coluna++;
            matriz_menores[contador_linha][contador_coluna] = matriz[i][1];
            contador_coluna = 0;
            contador_linha++;
        }
    }

    return matriz_menores;
}
// função para imprimir a matriz com as chaves que seja maior ou igual ao filtro que o usuário dê
void imprimir_matriz_maior(int **matriz, int linha, int filtro, int nlinha)
{
    cout << "\nassert lista_bidimensional == {";
    for(int i = 0; i < nlinha; i++)                //for para percorrer e imprimir os valores de cada posição corretamente
    {
        for(int j = 0; j < 2; j++)
        {
            if(j == 0)                             // condições para imprimir strigs e deixa a saída como pede na questão
            {
                cout << matriz[i][j] << ":";
            }
            else
            {
                if(i < nlinha -1)
                    cout << matriz[i][j] << ", ";
                else
                    cout << matriz[i][j] << "}\n" << endl;
            }
        }
    }
}
//programa principal
int main()
{
    int **matriz, **matriz_maiores, linha, filtrar, tamanho_matriz_maior, subtracao;

    cout << "Digite o tamanho de linhas que sua matriz irá ter: ";
    cin >> linha;
                                                                                   //atribuindo valores para as variáveis
    cout << "\nDigite um número para comparar com os números da matriz: ";
    cin >> filtrar;

    matriz = adiciona_item_matriz(linha);                                          //chamando a função adiciona_item_matriz para atribuir a matriz valores 

    matriz_maiores = lista_bidimensional(matriz, linha, filtrar);                 //chamando a função lista_bidimensional para atribuir a outra matriz com somento os numeros maior ou iguais

    tamanho_matriz_maior = tamanho(matriz, linha, filtrar);                       //chamando a função tamanho para enviar como parametro nas linhas abaixo

    imprimir_matriz(matriz, linha);                                               //chamando a função imprimir para imprimar a matriz com todos os valores digitados

    cout << "assert filtra_menores(lista_bidimensional, " << filtrar << ") == " << (linha - tamanho_matriz_maior) << endl;   // imprimir a quantidade de vezes que a chave foi menor

    imprimir_matriz_maior(matriz_maiores, linha, filtrar, tamanho_matriz_maior);    ////chamando a função para imprimir os valores maiores ou igual

    return 0;
}