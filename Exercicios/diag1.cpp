#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int lern()
{
    int n;
    cout << "Digite o valor: ";
    cin >> n;
    return n; 
}

void exibir(int n, int totpar, int totimpar)
{
    cout << "\nNumero: " << n;
    cout << "\nTotal de pares: " << totpar;
    cout << "\nTotal de impares: " << totimpar;
    system("pause");
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n, totpar, totimpar;
    int tecla = 0;
    
    
    while (tecla != 4)
    {
        cout << "\n1 Ler valores\n2 Calcular \n3 Exibir \n4 Sair \nitem: \n";
        cin >> tecla;
        switch (tecla)
        {
        case 1:
            n = lern(); break;
        case 2:
          if (n%2 == 0)
          {
            cout << "Total de par: " << n;
          }else
          {
            cout << "Total de Impar: " << n;
          }  

            break;
        case 3:
            exibir(n, totpar, totimpar);
            break;
        case 4: cout << "Finalizando.."; 
        exit(0);
        break;
        }
    }
}