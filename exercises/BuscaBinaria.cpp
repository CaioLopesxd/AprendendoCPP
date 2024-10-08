#include <iostream>

using namespace std;

int buscaBinaria(int array[], int tamanho, int valor)
{
    int inicio, fim, chute, tentativas, meio;
    inicio = 0;
    fim = tamanho - 1;
    while (inicio <= fim)
    {
        tentativas++;
        cout << "tentativa:" << tentativas << endl;
        meio = (inicio + fim) / 2;
        chute = array[meio];
        if (chute == valor)
        {
            return meio;
        }
        if (chute > valor)
        {

            fim = meio - 1;
        }
        else
        {
            inicio = meio + 1;
        }
    }

    return -1;
}

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int resultadoPesquisa, valor;
    int tamanhoArray = sizeof(array) / sizeof(int);

    cout << "insira um valor entre 0 a 10: ";
    cin >> valor;

    resultadoPesquisa = buscaBinaria(array, tamanhoArray - 1, valor);

    cout << array[resultadoPesquisa];
    return 0;
}