#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;

int n1, n2, n3, n4;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int tecla;
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
        cout << "Digite os numeros:  ";
        cin >> n1 >> n2 >> n3 >> n4;
        
        if (n1, n2, n3, n4 / 2 || 3 == 1)
        {
            cout << "Divisivel por 2 e 3!\n";
        }
        else
        {
            cout << "Não divisivel por 2 e 3!\n";
        }
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