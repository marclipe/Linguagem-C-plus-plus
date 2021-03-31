/*
 * Quadro Resumo 
 * 1) A!=0, B=0, C=0, X1, X2
 * 2) A, B, C, X1, X2
 * 3) Delta = B * B - 4 * A * C
 * 4) A, B, C, Delta 
 */

#include "iostream"
#include "math.h"
#include "iomanip"
#include "cstdlib"
using namespace std;

double A = 0, B = 0, C = 0, delta;
int X1, X2;

int main()
{
    int itemMenu = 0;
    setlocale(LC_ALL, "Portuguese");

Menu:
    system("clear");
    cout << "\n*** Menu do Programa ***";
    cout << "\n1 Leitura";
    cout << "\n2 Cálculo";
    cout << "\n3 Impresão";
    cout << "\n4 Saída\n";
    cin >> itemMenu;

    switch (itemMenu)
    {

    case 1:
        system("clear");
        cout << "\nDigite os valores de A, B e C:";
        cin >> A >> B >> C;
        //Cálculo do delta
        delta = B * B - 4 * A * C;
        break;

    case 2:
        if (delta > 0)
        {
            X1 = -B + sqrt(delta) / 2 * A;
            X2 = -B - sqrt(delta) / 2 * A;
        }
        else if (delta < 0)
        {
            cout << "Sem solução no conjunto dos números reais";
        }
        cout << " O valores de A: " << A;
        cout << "O valor de B: " << B;
        cout << "O valor de C: " << C;
        /*cout << A << B << C; */
        break;

    case 3:
        cout << "\n*** TELA DE SAÍDA ***";
        if (delta >= 0)
        {
            cout << "O valor de X1 é: " << X1;
            cout << "O valor de X2 é: " << X2;
            break;
        }
        break;

    case 4:
        cout << "Fim do programa";
        exit(0); //finaliza o programa
        break;
    }

    goto Menu;

    return 0;
}