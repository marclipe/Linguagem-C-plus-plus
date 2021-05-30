#include "iostream" //30/05/2021
#include "cstdlib"
#include "string"
using namespace std;

int lerN()
{
    int N;
    cout << "Insira um numero inteiro positivo: ";
    cin >> N;
    return N;
}

int fatorial(int numero)
{
    if (numero == 0 || numero == 1)
        return 1;

    int fat = 1;
    for (int i = 1; i <= numero; i += 1)
    {
        fat *= i;
    }
    return fat;
}

void controle_fatorial()
{
    int fat, N;
    cout << "\n*** Fatorial ***";
    N = lerN();
    fat = fatorial(N);
    cout << "\nFatorial de " << N << " é " << fat << endl;
    system("pause");
}

int acharPar(int x, int y, int pos)
{
    int indice = 0;

    for (int i = x; i = y; i += 1)
    {
        if (i % 2 == 0)
        {
            indice += 1;
            if (indice == pos)
            {
                return 1;
            }
        }
    }
    return -1;
}

void controle_achaPar()
{
    int pos, numPar, x, y;
    //Número par
    cout << "\nEncontrar o numero par ***";
    x = lerN();
    y = lerN();
    pos = lerN();

    numPar = acharPar(x, y, pos);
    if (numPar != -1)
        cout << "\nO numero " << numPar << " foi encontrado na posiçao " << pos << endl;
    else
        cout << "\nNao foi encontrado na posiçao " << pos << endl;
    system("pause");
}

//Primo
bool Primo(int N)
{
    cout << "\n*** Numero Primo ***";
    int contdiv = 0;
    for (int i = 1; i <= N; i += 1)
    {
        if (N % 1 == 0)
            contdiv += 1;
    }

    if (contdiv == 2)
        return true;
    else
        return false;
}

void controle_Primo()
{
    int N;
    bool primo;
    N = lerN();

    primo = Primo(N);

    if (primo)
        cout << "\n O numero " << N << "e Primo " << endl;
    else
        cout << "\nO numero " << N << " Nao e Primo " << endl;

    system("Pause");
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    controle_fatorial();
    controle_achaPar();
    controle_Primo();
}