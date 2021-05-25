#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <math.h>
using namespace std;

int lern()
{
    int n;
    cout << "Digite o número: ";
    cin >> n;
    return n;
}

int calpar()
{
    int n; 
    int par = 0;
    for (par = 0; par <= n; par+=1)
    {
        if (n % 2 == 0){
          par++;
        }
    } //inicio fim passo/incremento
    return par;
}

int calimpar()
{
    int n;
    int impar = 0;
    for (impar = 0; impar <= n ; impar+=1) 
    {
        if (n % 2 != 0){
          impar += n;
        }
    }
    return impar;
}

void exibir(int n, int par, int impar)
{
    cout << "\nNúmero: " << n;
    cout << "\nPAR: " << par;
    cout << "\nIMPAR: " << impar;
    system("sleep");
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n, par, impar, cont;
    int tecla = 0;

    n = lern();
    par = calpar();
    impar = calimpar();

    cout << "*** EXIBINDO*****";

    exibir(n, par, impar);

    return 0;
}
