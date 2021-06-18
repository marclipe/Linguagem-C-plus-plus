#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <math.h>
#include <string>
#include <locale>
using namespace std;

int const n = 5;
int linha = -1;


double valorprincipal[n];
int dias[n];
double ValorPagar;


void inserirlinha(double valorPR, int d)
{
    linha += 1;
    valorprincipal[linha] = valorPR;
    dias[linha] = d;
}

void mostrar()
{ 
    double x; 
    system("cls");
    for (int i = 0; i <= linha; i++)
    {
        ValorPagar = valorprincipal[i] * dias[i];
  
        cout << "\nValor Principal: " << valorprincipal[i] << " Valor a Pagar: " << ValorPagar << " Quantidade de Dias:  " << dias[i] << endl;
    }
    system("pause 3");
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    double tecla, valorprincipal;
    int dias;
    while (true)
    {

        system("cls");
        cout << "\n1 Leitura\n2 Mostrar\n3 sair\nitem:";
        cin >> tecla;

        if (tecla == 1)
        {
            cout << "\nDigite o valor da prestação e a quantidade de dias: ";
            cin >> valorprincipal >> dias;
            inserirlinha(valorprincipal, dias);
        }
        else if (tecla == 2)
        {
            mostrar();
        }
        else if (tecla == 3)
        {
            break;
        }
    }
    return 0;
}