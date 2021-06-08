#include <iostream>
#include <cstdlib>
#include <math.h>
#include <locale> 
#include <string>
using namespace std;


string nome[] = {"Sara Lemes", "Ricardo Jafé"};
double salario[] = {12000, 10243.20};
int idade[] = {30, 45};


void mostrar()
{
    double x;
    system("cls");
    for(int i = 0; i <= 2; i++){
        x = salario[i] * 1.1;
        cout << salario[i] << " -- " << x << " -- " << idade[i] << " -- "<< nome[i] << endl;
    }
    system("pause");
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int tecla;
    while (tecla)
    {
        system("pause");
        cout << "\n1 Mostrar \n2 Sair\nItem: ";
        cin >> tecla;
        if (tecla == 1)
        {
            mostrar();
            //cout << salario << idade << nome;
        }
        else if (tecla == 3)
        {
            break;
        }
    }
    return 0;
}