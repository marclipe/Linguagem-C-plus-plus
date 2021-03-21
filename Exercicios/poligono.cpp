#include <cstdlib>
#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
using namespace std;

double NumLados, MedLado;
string status;

int main(void)
{
    int item;
    setlocale(LC_ALL, "Portuguese");

    system("cls"); 

    if (item == 1)
    {
        cout << "Digite o número de lados do polígono";
        cin >> NumLados;

        cout << "Digite medida do lado";
        cin >> MedLado;
    }

    else if (item == 2)
    {
        if (NumLados == 3)
        {
            status = "TIÂNGULO";
            /*Teorema de HERON*/
        }
        else if (NumLados == 4)
        {
            status = "QUADRADO";
            /**/
        }
        else
        {
            status = "PENTÁGONO";
            /*calculo cácule área do pentago*/
        }
    }
    else
    {
        if ( NumLados < 3 )
        {

            status = "NÃO É UM POLÍGONO";
        }
        else if ( NumLados > 5)
        {
            status = "POLÍGONO NÃO IDENTIFICADO"; 
        }
    }
}