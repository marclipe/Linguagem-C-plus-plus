#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

int n1, n2, n3, maior;

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    cout << "\nLer 3 valores inteiros e escrever o maior deles";
    /*system("clear");*/

    cout << "\nDigite o primeiro valor: ";
    cin >> n1;

    cout << "\nDigite o segundo valor: ";
    cin >> n2;

    cout << "\nDigite o terceiro valor: ";
    cin >> n3;

    if (n1 > n2 && n1 > n3)
    {
        cout << "\nO Maior valor é : " << maior;
        maior = n1; 
    }
    else if (n2 > n1 && n2 > n3)
    {
        cout << "\nO Maior valor é : " << n2;
        maior = n2; 
    }
    else if (n3 > n1 && n3 > n2)
    {
        cout << "\nO Maior valor : " << n3;
        maior = n3; 
    }
    else if (n1 == n2 == n3)
    {
        cout << "\nNúmeros iguais não são válidos!";
    }
    else if (n1 == 0 && n2 == 0 && n3 == 0)
    {
        cout << "\nO valor é NULO!";
    }
    else if (0 > n1,  0 > n2,  0 > n3)
    {
        cout << "\nNão aceitamos valores negativos!";
    }

    return 0; 
}