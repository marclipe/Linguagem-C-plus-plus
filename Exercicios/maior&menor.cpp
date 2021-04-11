#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;

int n1, n2, n3, n4, n5, maior, menor, num, cont;

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
        cout << "Digite 5 numeros:  ";
        cin >> n1, n2, n3, n4 , n5;

        maior == num;
        menor == num;
        cont == cont + 1;  

        if (n1, n2, n3, n4 , n5 > maior)
        {
            maior = num; 
            cout << "Maior número\n" << num; 
        }
        else if (n1, n2, n3, n4 , n5 < menor)
        {
            menor == num;
            cout << "Menor numero!\n" << num;
        }
        cont == cont + 1;
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