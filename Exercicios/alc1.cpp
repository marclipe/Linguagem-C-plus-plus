/*
Quadro Resumo de variáveis
 
1) sexo, salario, mediaH, mediaM, saldoH, saldoM
2) sexo, salario
3) media, saldo
 
*/
#include "iostream" //14/05/2021
#include "string"
#include "cstdlib"
#include "math.h"
using namespace std;

//1) sexo, salario, media, saldo

string lerSexo()
{
    string sexo;
    cout << "Digite o sexo: ";
    getline(cin, sexo);
    return sexo;
}

double lerSalario()
{
    double salario;
    cout << "Digite o salário: ";
    cin >> salario;
    return salario;
}


double CalcMedia(double salario)
{
    double media;
    media = salario/1;
    return media;
}

void mostrar(double media, string sexo)
{
    system("cls");
    cout << "\nMedia.." << media;
    cout << "\nSexo" << sexo; 
    system("pause");
}

int main()
{

    string sexo;
    double salario, media, saldo;

    string H, F;

    if (sexo == H)
    {
        sexo = "Homem";
    }
    else if (sexo == F)
    {
        sexo == "Mulher";
    }
    else
    {
        sexo == "Sexo inválido, digite novamente!";
    }
    cin.ignore();
    getline(cin, sexo);

    int tecla = 0;
    menu:
    while (tecla != 4)
    {
        system("cls");
        cout << "\n1 Ler..";
        cout << "\n2 Calcular...";
        cout << "\n3 Exibir...";
        cout << "\n4 Sair\nItem\n";
        cin >> tecla;

        if (tecla == 1)
    {
        sexo = lerSexo();
        salario = lerSalario();
    }
    else if (tecla == 2)
    {
        media = CalcMedia(salario);
    }
    else if (tecla == 3)
    {
        mostrar(saldo, sexo);
    }
    goto menu;
    cout << "\nPrograma Finalizado\n";  
    system("pause");
    return 0;
    }
}
