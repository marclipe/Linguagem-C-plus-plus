#include <iostream>
#include <cstdlib>
#include <math.h>
#include <string>
using namespace std;

/*Faça um código para para exibir os vetores explícitos: string nome [] = {“Sara
Lemes”,”Ricardo Jafé”} , double salario [] = {12000, 10243.20} e int idade[]={30, 45};
O salário deverá ser exibido com 10% de aumento. Faça um menu de controle.
 */

string nome[] = {"Sara Lemes", "Ricardo Jafé"};
double salario[] = {12000, 10243.20};
int idade[] = {30, 45};


void mostrar()
{
    double x;
    system("clear");
    for(int i = 0; i <= 2; i++){
        x = salario[i] * 1.1;
        cout << salario[i] << " -- " << x << " -- " << idade[i] << " -- "<< nome[i] << endl;
    }
    system("pause");
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int tecla;
    while (tecla)
    {
        system("pause");
        cout << "\n1 Mostrar \n2 Sair\nItem: ";
        cin >> tecla;
        if (tecla == 1)
        {
            mostrar();
            //cout << salario << idade << nome;
        }
        else if (tecla == 3)
        {
            break;
        }
    }
    return 0;
}