#include <cstdlib>
#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
using namespace std;

int NumLados, area;
double MedLado;

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    /*system("cls");*/

    cout << "\n*** MENU DO PROGRAMA ***\n";
    cout << "\n1 Digite número de lados ";
    cout << "\n2 Informar o tipo do polígono";
    cout << "\n3 Calcular a área ";
    cout << "\n4 Finalizar o programa\n";

    cout << "\nDigite o número de lados: ";
    cin >> NumLados;

    if (NumLados == 3)
    {
        /*Teorema de HERON*/
        cout << "\nTRIÂNGULO\n";
        int t1, t2, t3, p;
        cout << "\nDigite o primeiro lado: ";
        cin >> t1;
        cout << "\nDigite o segundo lado: ";
        cin >> t2;
        cout << "\nDigite o terceiro lado: ";
        cin >> t3;
        /*Perimetro*/
        p = t1 + t2 + t3 / 2;
        MedLado = sqrt(p * (p - t1) * (p - t2) * (p - t3));
        cout << "\nA área do TRIÂNGULO é : " << MedLado << endl; 
    }
    else if (NumLados == 4)
    {
        cout << "\nQUADRADO\n";
        int b, h;
        cout << "\nDigite a base: ";
        cin >> b;
        cout << "\nDigite a altura: ";
        cin >> h;
        MedLado = b * h;
        cout << "\nA área do QUADRADO é : " << MedLado << endl;
    }
    else if (NumLados == 5)
    {
        double p, ap;
        cout << "\nPENTAGONO\n";
        cout << "\nDigite o semiperimetro: ";
        cin >> p;
        cout << "\nDigite a apótema: ";
        cin >> ap; 
        MedLado = p * ap;
        cout << "\nA área do PENTAGONO é: " << MedLado << endl;
    }
    else if (NumLados < 3)
    {
        cout << "\nNÃO É UM POLÍGONO";
    }
    else if (NumLados > 5)
    {
        cout << "\nPOLÍGONO NÃO IDENTIFICADO";
    }

    return 0;
}