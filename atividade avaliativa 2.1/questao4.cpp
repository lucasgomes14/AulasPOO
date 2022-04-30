#include <iostream>
#include <array>

using namespace std; 

//função para criar arrays
int *criarLista(int ntamanho)              
{
    //criando array dinamica
    int *lista = new int[ntamanho];
    
    //atribuindo valores no array
    for(int i = 0; i < ntamanho; i++)
    {
        cout << "Digite o valor que você que adicionar na posição " << i+1 << ": ";
        cin >> lista[i];
        cout << endl;
        
    }
    cout << "Sua lista foi salva com sucesso!\n" << endl;
    return lista;
}

//função para mapear e responder questão
int **mapeia(int *chaves, int *valores, int tamanho)   
{
    //criando matriz dinâmica
    int **matriz = new int*[tamanho];

    for(int i = 0; i < tamanho; i++)
    {
        matriz[i] = new int[tamanho];
        
        //atribuindo valores na matriz com a chave que é a primeiro array e os valores que é a segundo array
        for(int j = 0; j < 2; j++)
        {
            if(j == 0)
            {
                matriz[i][j] = chaves[i];
            }
            else
            {
                matriz[i][j] = valores[i];
            }
        }
    }
    return matriz;
} 

//função para imprimir as duas arrays e a matriz e no final apagar as mesmas
void imprimir(int *array1, int *array2, int **matriz, int tamanho)
{
    // imprimindo o primeiro array
    cout << "Lista 1:\n{";
    for(int i = 0; i < tamanho; i++)
    {
        if(i < tamanho - 1)
            cout << array1[i] << " ";
        else
        {
            cout << array1[i] << "}";
        }
    }
    cout << endl;

    // imprimindo o segundo array
    cout << "Lista 2:\n{";
    for(int i = 0; i < tamanho; i++)
    {
        if(i < tamanho - 1)
            cout << array2[i] << " ";
        else
        {
            cout << array2[i] << "}";
        }
    }
    cout << endl;

    // imprimindo o assert
    cout << "Assert:\n{";
    for(int i = 0; i < tamanho; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            if(j == 0)
                cout << "{" << matriz[i][j] << " ";
            else
                cout << matriz[i][j] << "}";            

        }
    }
    cout << "}" << endl;

    //apagando da mémoria os arrayz e matriz
    for(int i = 0; i < tamanho; i++)
    {
        delete [] matriz[i];
    }
    delete [] matriz;
    delete [] array1;
    delete [] array2;
}

// função para saber se as listas tem numeros repetidos que a questão pede
//caso tenha numero repetido a função retorna "1" caso não tenho "0"
int percorrerlista(int *array, int tamanho)
{
    int condicao = 0, j = 1, i = 0;
    //while para pegar os itens e comparar com os restos dos valores da lista
    while(i < tamanho)
    {
        j = i + 1;
        while(j <= tamanho - 1)
        {
            if(array[i] == array[j])
            {
                condicao = 1;
                i = tamanho;
                j = tamanho;
            }
            else
                j++;
        }
        i++;
    }
    return condicao;
}

//programa principal
int main()
{
    //variáveis
    int tamanho, *lista1, *lista2, **matriz, condicao1, condicao2;

    //atribuindo valor a "tamanho"
    cout << "Digite o tamanho que as 2 listas vão ter: ";
    cin >> tamanho;
    cout << endl;

    //chamando a função "criarListas" para criar e atribuir a suas variáveis
    lista1 = criarLista(tamanho);
    lista2 = criarLista(tamanho);

    //chamando a função "percorrerlista" e atribuindo "0" ou "1" a suas variáveis
    condicao1 = percorrerlista(lista1, tamanho);
    condicao2 = percorrerlista(lista2, tamanho);

    //condição para saber se as listas tem numeros repetidos
    //caso não tenha, vai chamar a mapeia e atribuir a "matriz" os valores já mapeados
    //caso tenha, o programa só irá imprimir uma mensagem informando ao usuário
    if(condicao1 == 0 && condicao2 == 0)
    {
        matriz = mapeia(lista1, lista2, tamanho);
        imprimir(lista1, lista2, matriz, tamanho);
    }
    else
        cout << "Uma das suas listas estão com números repetidos!" << endl;

    return 0;
}