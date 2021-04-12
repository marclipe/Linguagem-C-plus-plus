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
    system("clear");
    cout << "\n1 Executar...";
    cout << "\n2 Finalizar...";
    cout << "\n3 Item";
    cin >> tecla;

    switch (tecla)
    {
    case 1:
        system("clear");
        cout << "Digite 5 numeros:  ";
        cin >> n1 >> n2 >> n3 >> n4 >> n5;

        if (n1 > n2 && n1 > n3 && n1 > n4 && n1 > n5) //n1
        {
            maior = n1;
        }
        else if (n1 < n2 && n1 < n3 && n1 < n4 && n1 < n5)
        { //n1
            menor = n1;
        }
        else if (n2 > n1 && n2 > n3 && n2 > n4 && n2 > n5)
        { //n2
            maior = n2;
        }
        else if (n2 < n1 && n2 < n3 && n2 < n4 && n2 < n5)
        { //n2
            menor = n2;
        }
        else if (n3 > n1 && n3 > n2 && n3 > n4 && n3 > n5)
        { //n3
            maior = n3;
        }
        else if (n3 < n1 && n3 < n2 && n3 < n4 && n2 < n5)
        { //n3
            menor = n3;
        }
        else if (n4 > n1 && n4 > n2 && n4 > n3 && n4 > n5)
        { //n4
            maior = n4;
        }
        else if (n4 < n1 && n4 < n2 && n4 < n3 && n2 < n5)
        { //n4
            menor = n4;
        }
        else if (n5 > n1 && n5 > n2 && n5 > n3 && n5 > n4)
        { //n5
            maior = n5;
        }
        else if (n5 < n1 && n5 < n2 && n5 < n3 && n5 < n4)
        { //n5
            menor = n5;
        }

        cout << maior;
        cout << menor;

        break;

    case 2:
        cout << "Fim de programa!";
        exit(0);
        break;
    }

    goto MENU;

    return 0;
}