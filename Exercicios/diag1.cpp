#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int lern()
{
    int n;
    cout << "Digite os valores: ";
    cin >> n;
    return n;
}

int calpar(int n)
{
    int n;
    if (n = 0)
    cout << "\nValores pares: " << n;
    return n;
}

int calimpar(){
    int n;
    cout << "\nValores impares: "; 
    return n;
}

void exibir(int n, int totpar, int totimpar)
{
    cout << "Número: " << n;
    cout << "Total de pares: " << totpar;
    cout << "Total de impares: " << totimpar;
    system("pause 3");
}

int main()
{
    setlocale(LC_ALL, "POrtuguese");
    exibir();
}

void exibir()
{
    int n, totpar, totimpar;
    int tecla = 0;

    while (tecla != 4)
    {
        cout << "\n1 Ler valores\n2 Calcular \n3 Exibir \n4 Sair \nitem: \n";
        cin >> tecla;
        switch (tecla)
        {
        case 1:
            n = lern();
            break;

        case 2:
            totpar = calpar(n);
            totimpar = calimpar();
            break;
        case 3:
            exibir(n, totpar, totimpar);
            break;
        case 4: cout << "Finalizando.."; 
        exit(0);
        break;
        }
    }
}