#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;

int const n = 5;
int linha = -1;

/*Faça o algoritmo para calcular o valor de uma prestação em atraso com
base na multa de 2% e também do juros mensal de 1% sobre o valor principal.
Declare vetores explícitos para entrada do valor da prestação, valorprincipal [ ]
e da quantidade de dias em atraso: dias [ ]. Armazene os resultados no vetor
ValorPagar [ 5 ]. Ao final imprima a tabela com os vetores valorPrincipal [], dias
[] e valorpagar[] .*/

/*1- ValorPR[],  dias[], ValorPagar[5]

2- multa = 2%, juros_mensal= 1%;

3 - (Exibir) -> ValorPR[], dias[], ValorPagar[]; 
*/

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
    int ValorPagar;
    system("cls");
    for (int i = 0; i <= linha; i++)
    {
        ValorPagar = valorprincipal[i] * (0.02/100) * dias[i] * 0.01;
  
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
            cout << "\nDigite o valor da prestação e a quantidade de dias :";
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