#include <iostream> //09/05/2021
#include <cstdlib>
#include <iomanip>
using namespace std;


//ler valor
double lervalor()
{
    double valor;
    cout << "Valor da prestação: ";
    cin >> valor;
    return valor;
}

//ler quantidade de dias
double lerQuantdias()
{
    double dias;
    cout << "Quantidade de dias: ";
    cin >> dias;
    return dias;
}

//Calculo valor da MULTA de 2% sobre o VALOR da prestação 
double calcMulta(double valor)
{
    double Multa;
    Multa = valor * 0.02;
    return Multa;
}

//calculo o valor total de JUROS proporcional aos dias
double calcJuros(double dias)
{
    double juros;
    juros = dias * 0.01;
    return juros;
}

//VLPAGAR a soma de VALOR + MULTA + JUROS
double VL_PAGAR(double valor, double multa, double juros)
{
    double VLPAGAR;
    VLPAGAR = valor + multa + juros;
    return VLPAGAR;
}

//Exibição
void exibir(double Multa, double juros, double VLPAGAR)
{
    system("cls");
    cout << "\nMulta: R$" << Multa;
    cout << "\nJuros: R$" << juros;
    cout << "\nValor a Pagar: R$" << fixed << setprecision(2) << VLPAGAR;
    system("pause");
}

//Menu interativo
int main()
{
    setlocale(LC_ALL, "Portuguese");

    double Multa, juros, VLPAGAR;
    double valor, dias;

    int tecla = 0;
Menu:
    while (tecla != 4)
    {
        system("cls");
        cout << "\n1 Ler..";
        cout << "\n2 Calcular..";
        cout << "\n3 Exibir..";
        cout << "\n4 Sair\nItem";
        cin >> tecla;

        if (tecla == 1)
        {
            valor = lervalor();
            dias = lerQuantdias();
        }
        else if (tecla == 2)
        {
            Multa = calcMulta(valor);
            juros = calcJuros(dias);
            VLPAGAR = VL_PAGAR(valor, Multa, juros);
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
    }//fim while
}