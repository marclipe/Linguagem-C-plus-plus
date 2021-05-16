#include <iostream>
#include <cstdlib>
#include <math.h>
#include <string>
using namespace std;

int lerIdade();
double lerPag();
void controle();
void mostrar(int conta, double maa, double mea, int conte, double mam, double mem);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    system("clear");
    controle();
}

int lerIdade()
{
    int idade;
    cout << "\nDigite a idade: ";
    cin >> idade;
    idade = (idade >= 18) ? 1 : 0;
    return idade;
}

double lerPag()
{
    double sal;
    cout << "Digite seu salario: ";
    cin >> sal;
    return sal;
}

void mostrar(int conta, double maa, double mea, int conte, double mam, double mem)
{
    cout << "\n** Resultado do Programa **";
    cout << "\nTotal maior de idade: " << conta;
    cout << "\nMaior salario.......: " << maa;
    cout << "\nMenor salario.......: " << mea;
    cout << "\nTotal menor de idade: " << conte;
    cout << "\nMaior salario.......: " << mam;
    cout << "\nMenor salario.......: " << mem;
    cout << "\nFim...." << endl;
    system("sleep 2");
}

void controle()
{
    int tecla, idade;
    int conta = 0;
    int conte = 0;
    double salario, aux, maa, mea, mam, mem;
menu:
    cout << "\n** MENU INTERATIVO **";
    while (true)
    {
        cout << "\n1 Ler valores\n2 Calcular e exibir\n3 Desligar\nitem: \n";
        cin >> tecla;
        switch (tecla)
        {
        case 1:
            idade = lerIdade();
            salario = lerPag();

            if (idade == 1)
            {
                if (conta == 0)
                {
                    maa = salario;
                    mea = salario;
                }
                if (salario > maa)
                {
                    maa = salario;
                }
                if (salario < mea)
                {
                    mea = salario;
                }
                conta++;
            }

            if (idade == 0)
            {
                if (conte == 0)
                {
                    mam = salario;
                    mem = salario;
                }
                if (salario > mam)
                {
                    mam = salario;
                }
                if (salario < mem)
                {
                    mem = salario;
                }
                conte++;
            }

            break;
        case 2:
            mostrar(conta, maa, mea, conte, mam, mem);

            break;
        case 3:
            cout << "\nDesligando sistema...";
            exit(0);
            break;
        }
    }
}