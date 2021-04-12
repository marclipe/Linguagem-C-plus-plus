#include <iostream>
#include <cstdlib>
#include <math.h>
#include <string>

using namespace std;

int ano, tecla, MR;
string status = "";

int main()
{
    setlocale(LC_ALL, "Portuguese");

Menu:
    cout << "\n1 Executar...";
    cout << "\n2 Finalizar...";
    cout << "\n3 Item ";
    cin >> tecla;

    switch (tecla)
    {
    case 1:
        cout << "Digite um ano: ";
        cin >> ano;

        MR = ano % 4;

        if (MR == 0)
        {
            status = "Ano bissexto";
        }
        else if (MR != 0)
        {
            status = "Não é um ano bissexto";
        }

        cout << status << endl;

        break;

    case 2:
        cout << "Finalizando";
        exit(0);
        break;
    }

    goto Menu;

    return 0;
}