/*faça um programa com loop e menu que leia o VALOR de uma prestação e a quantidade de DIAS 
em atraso. Calcule o valor da MULTA de 2% sobre o VALOR da prestação, calcule o valor 
total de JUROS proporcional aos dias, sendo que a taxa é 1% ao mês. Finalmente calcule o 
valor a pagar VLPAGAR que será a soma de VALOR + MULTA + JUROS. Você deverá criar 
as funções de leitura, de cálculo de de exibição.*/

#include <iostream> //09/05/2021
#include <cstdlib>
#include <iomanip>
using namespace std;

double lervalor()
{
    double valor;
    cout << "Valor da prestação: ";
    cin >> valor;
    return valor;
}

double lerQuantdias()
{
    double dias;
    cout << "Quantidade de dias: ";
    cin >> dias;
    return dias;
}

/*Calcule o valor da MULTA de 2% sobre o VALOR da prestação, calcule o valor 
total de JUROS proporcional aos dias, sendo que a taxa é 1% ao mês.*/

double calcMulta(double valor)
{
    double Multa;
    Multa = valor * 0.02;
    return Multa;
}

double calcJuros(double dias)
{
    double juros;
    juros = dias * 0.01;
    return juros;
}

/*Finalmente calcule o 
valor a pagar VLPAGAR que será a soma de VALOR + MULTA + JUROS*/

int VL_PAGAR(double valor, double multa, double juros)
{
    int VLPAGAR;
    VLPAGAR = valor + multa + juros;
    return VLPAGAR;
}

void exibir(double Multa, double juros, double VLPAGAR)
{
    system("cls");
    cout << "\nMulta" << Multa;
    cout << "\nJuros" << juros;
    cout << "\nValor a Pagar" << VLPAGAR;
    system("pause");
}

int main()
{

    double Multa, juros;
    int VLPAGAR;
    double valor, dias;

    int tecla = 0;

Menu:
    while (tecla != 4)
    {
        system("cls");
        cout << "\n1 Ler..";
        cout << "\n2 Calcular..";
        cout << "\n3 Exibir";
        cout << "\4 Sair";

        if (tecla == 1)
        {
            lervalor();
            lerQuantdias();
        }
        else if (tecla == 2)
        {
            calcMulta(valor);
            calcJuros(dias);
            VL_PAGAR(valor, Multa, juros);
        }
        else if (tecla == 3)
        {
            exibir(Multa, juros, VLPAGAR);
        }
        else if (tecla == 4)
        {

            exit(0);
        }
        goto Menu;
        cout << "\nFim de Programa...";
        system("pause");

        return 0;
    }
}