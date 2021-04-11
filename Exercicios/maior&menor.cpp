#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;

int n1, n2, n3, n4, n5, maior, menor, num;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int tecla, cont;
MENU:
    system("cls");
    cout << "\n1 Executar...";
    cout << "\n2 Finalizar...";
    cout << "\n3 Item";
    cin >> tecla;

    switch (tecla)
    {
    case 1:
        system("cls");
        cout << "Digite 5 numeros:  ";
        cin >> num;  

        if (cont = 1)
        {
            maior == num; 
            menor == num; 
        }
        else if (num > maior)
        {
            maior == num;
        }else if (num < menor)
        {
            menor == num; 
        }

        cont = cont + 1;
        cout << "\nO numero maior é " << maior <<" e o numero menor é "<< menor; 
        break;

    case 2:
        cout << "Fim de programa!";
        exit(0);
        break;
    }
    system("pause");

    goto MENU;

    return 0;
}