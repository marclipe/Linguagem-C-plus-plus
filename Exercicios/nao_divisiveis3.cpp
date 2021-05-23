#include "iostream"
#include "cstdlib"
#include "string"
using namespace std;

void exibirNrsNaoDivisiveisPor3(int x, int y);
void controle();

int main()
{
    setlocale(LC_ALL, "Portuguese");
    controle();
}

void exibirNrsNaoDivisiveisPor3(int x, int y)
{
    int cont = 0, saldo = 0, media = 0;

    for (int i = x; i <= y; i += 1) // passo
    {
        int resto = i % 3;
        if (resto != 0)
        {
            cout << i << endl;

            cont += 1;
            saldo += i;
            media = saldo / cont;
        }
    }
    cout << "\n\n\ncont:" << cont << "\nsaldo:" << saldo << "\nMédia:" << media << endl;
    system("pause 5"); 
}

void controle()
{

    int x, y;
    cout << "\nDigite dois valores:";
    cin >> x >> y;

    exibirNrsNaoDivisiveisPor3(x, y);
}