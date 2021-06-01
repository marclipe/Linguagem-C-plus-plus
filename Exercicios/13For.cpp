#include <iostream> //29/05/2021
#include <cstdlib>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x, y, z;
    int soma;

    int tecla = 0;
    cout << "\n*** MENU ***";
    cout << "\n1 Ler e Mostrar \n2 Sair\nItem";
    cin >> tecla;
    switch (tecla)
    {
    case 1:
        cout << "Digite dois valores: ";
        cin >> x;
        cin >> y;
        for (z = x; z <= y; z += 1) //passo
        {
            if (z % 2 == 0)
            { //par
                cout << z << endl;
                soma += z;
            }
        }
        cout << "\nSoma dos pares: " << soma << endl;
        break;
    case 2:
        cout << "Finalizando..";
        exit(0);
        break;
    }
    
    return 0;
}