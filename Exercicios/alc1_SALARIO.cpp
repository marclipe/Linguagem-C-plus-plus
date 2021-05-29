#include <iostream>
#include <stdio.h>
#include <math.h>
#include <cstdlib>
#include <string.h>
using namespace std;

int lerSe();
double lerSa();
double mediaM();
double mediaH();
void controle();
void mostrar(double salario);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    system("clear");
    controle();
}

int lerSe()
{
    int t = 0, res = 0;
    ;
    while (t == 0)
    {
        string sea;
        string carac;
        int cont = 0;
        cout << "\nDigite seu Sexo[H/F]";
        cin.ignore();
        getline(cin, sea);
        int veri = sea.length();
        while (cont <= veri)
        {
            carac = sea.substr(cont, 1);
            if (sea == "h" || sea == "H")
            {
                res = 1;
                t = 1;
            }
            if (sea == "f" || sea == "F")
            {
                res = 0;
                t = 1;
            }
            if (sea != "h" && sea != "f" && sea != "H" && sea != "F")
            {
                cout << "Error! Digite um sexo válido!";
                t = 0;
            }
            cont++;
        }
    }
    return res;
}

double lerSa()
{
    double sal;
    cout << "Digite o salario: ";
    cin >> sal;
    return sal;
}

double mediaM(double saldoM, int contM)
{
    double media;
    media = saldoM / contM;
    return media;
}

double mediaH(double saldoH, int contH)
{
    double media;
    media = saldoH / contH;
    return media;
}

void mostrar(double meH, double meM, int contH, int contM)
{
    cout << "\n** RESULTADOS **";
    cout << "\nTotal de Homens...: " << contH;
    cout << "\nMédia do Salario..: " << meH;
    cout << "\nTotal de Mulheres.: " << contM;
    cout << "\nMédia do salario..: " << meM << endl;
    system("sleep 3");
}

void controle()
{
    int tecla, idade, contM = 0, contH = 0;
    int sexo;
    double salario, saldoM = 0, saldoH = 0;
    double meM, meH;

    //MENU

    while (true)
    {
        cout << "\n** MENU INTERATIVO **";
        cout << "\n1 Ler valores";
        cout << "\n2 Calcular e Exibir";
        cout << "\n3 Desligar";
        cout << "\nitem: ";
        cin >> tecla;

        switch (tecla)
        {
        case 1:
            sexo = lerSe();
            if (sexo == 1)
            {
                salario = lerSa();
                saldoH += salario;
                contH++;
            }
            if (sexo == 0)
            {
                salario = lerSa();
                saldoM += salario;
                contM++;
            }
            break;
        case 2:
            meH = mediaH(saldoH, contH);
            meM = mediaM(saldoM, contM);
            mostrar(meH, meM, contH, contM);
            break;
        case 3:
            cout << "Desligando o Sistema..." << endl;
            system("sleep 5");
            exit(0);
            break;
        }
    }
}