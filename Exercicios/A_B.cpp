#include <iostream> 
#include <cstdlib>
#include <math.h>
using namespace std;

int get_Soma(int A, int B, int num);
void controle();

int main()
{
    setlocale(LC_ALL, "Portuguese");
    controle();
}

int get_Soma(int A, int B, int num)
{

    //calcule e exiba o somatório de todos os números ímpares entre A e B
    for (int i = A; i <= B; i += 1)
    {
        if (num != 0)
        {
            num = i++;
            cout << i << endl;
        }
    }
}

void controle()
{
    int A, B, num;
    int tecla;

    while (tecla != 3)
    {
        cout << "\n\n***MENU ***\n";
        cout << "\n1 Ler valores\n2 Calcular e exibir\n3 Desligar\nitem: \n";
        cin >> tecla;

        switch (tecla)
        {
        case 1:
            cout << "\nDigite dois valores: ";
            cin >> A >> B;
            break;

        case 2:
            get_Soma(A, B, num);
            break;
        case 3:
            cout << "Finalizando...";
            exit(0);
            break;
        }
    }

    get_Soma(A, B, num);
}
