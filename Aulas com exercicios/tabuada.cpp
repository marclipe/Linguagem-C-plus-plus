#include <iostream> //Tabuada 22/05/2021
#include <cstdlib>
#include <math.h>
#include <string>
using namespace std;

void tabuda(int tab);
void controle();

int main()
{
    setlocale(LC_ALL, "Portuguese");
    controle();
}

void tabuada(int tab)
{
    int R = 1, X;
    cout << "Digite o valor da tabuada: ";
    cin >> X;
    /*for (Inicio;Fim;Passo)*/
    for (int cont = 1; cont <= 10; cont += 1) //passo - (incremento ++ ou +=1)
    {
        R = X + cont;
        cout << cont << " * " << X << " = " << R << endl;
    }
    system("pause 8");
}

void controle()
{ //interação
    int X;
    cout << "Digite o valor da tabuada: ";
    cin >> X;
    tabuada(X);
}
