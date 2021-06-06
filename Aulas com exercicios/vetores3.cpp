#include <iostream> //Vet3 05/06/2021
#include <cstdlib>
#include <math.h>
#include <string>
using namespace std;

int const n = 3; //tamanho máximo de valores
int linha = -1;  // posições dos vetores

double sal[n];
int ida[n];
//string nomes[ n ];

/*
    |linha! sal  ! ida
    |  0  | 1500 ! 20
    |  1  | 2000 ! 18 
    |  2  | 3000 ! 25

*/

void inserirLinha(double sa, int id)
{
    linha += 1; // ***
    if (linha == n)//para não passar do número
    {
        linha--;
        return;
    }
    sal[linha] = sa;
    ida[linha] = id;
}

void mostrar()
{
    double x;
    system("clear");
    for (int i = 0; i <= linha; i++)
    {
        x = sal[i] * 1.1;
        cout << sal[i] << " - " << x << " - " << ida[i] << endl;
    }
    system("pause 2");
}

int main()
{
    double sala;
    int ida, tecla;
    while (true)
    {
        system("clear");
        cout << "\n1 Leitura\n2 Mostrar \n3 Sair\nItem: ";
        cin >> tecla;
        if (tecla == 1)
        {
            cout << "\nDigite salário e idade: ";
            cin >> sala >> ida;
            inserirLinha(sala, ida);
        }
        else if (tecla == 2)
            mostrar();
        else if (tecla == 3)
            break;
    }
    return 0;
}