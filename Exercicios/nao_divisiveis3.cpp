#include <iostream> //Tabuada 22/05/2021 //23:31
#include <cstdlib>
#include <math.h>
#include <string>
using namespace std;

void DivN3(int x, int y);
void controle();

int main()
{
    setlocale(LC_ALL, "Portuguese");
    controle();
}

void DivN3(int x, int y)
{ //Números não divisíveis por 3
    int cont = 0, media = 0, saldo = 0;
    for (int i = x; i <= y; i++)
    {
        int resto = i % 3;

        if (resto != 0)
        {
            cont++;
            saldo += i;
            media = saldo = saldo / cont;
            cout << i << endl;
        }
        cout << "\n\n\ncont: " << cont << "\nMedia" << saldo << "\nMedia: " << media << endl;
        system("pause");
    }
}

void controle()
{
    int x, y;
    cout << "\nDigite dois valores: ";
    cin >> x >> y;
    DivN3(x, y);
}