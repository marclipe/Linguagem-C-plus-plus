/*
Quadro Resumo de variáveis
 
1) nome, salMaior, salMenor, salário, cont, saldo, média
2) nome, salario
3) cont+=1, saldo+=salário, media = saldo / cont
4) nome, cont, saldo, salMaior, salMenor, media
 
*/
#include "iostream"
#include "string"
#include "cstdlib"
#include "math.h"
using namespace std;

// Declarar as sub rotinas
double lerSalario();
string lerNome();
double calMedia(double saldo, int cont);
void mostrar(string nome, int cont, double saldo, double salMenor, double salMaior, double media);
void controle();

int main()
{
    setlocale(LC_ALL, "Portuguese");
    controle();
}

// Codificação as sub rotinas
double lerSalario()
{
    double sal;
    cout << "\nDigite o salário:";
    cin >> sal;
    return sal;
}

string lerNome()
{
    string nom;
    cout << "\nDigite o nome:";
    cin.ignore(); // ignorar o cin da leitura do itemMenu
    getline(cin, nom);
    return nom;
}

double calMedia(double saldo, int cont)
{
    double med;
    med = saldo / cont;
    return med;
}

void mostrar(string nome, int cont, double saldo, double salMenor, double salMaior, double media)
{

    system("clear");
    cout << "\n*** Tela de Resultados ***";
    cout << "\nNome.........:" << nome;
    cout << "\nQuantidade...:" << cont;
    cout << "\nSaldo .......:" << saldo;
    cout << "\nMenor salário:" << salMenor;
    cout << "\nMaior salário:" << salMaior;
    cout << "\nMédia........:" << media;
    cout << "\n*** Fim da impressão....." << endl;
    system("sleep 5");
}

void controle()
{
    int itemMenu;

    string nome;
    double salario, media, saldo = 0, salMaior, salMenor;
    int cont = 0;

    string linhasMenu;
    linhasMenu = "\n***Menu de Controle***";
    linhasMenu += "\n1 Leitura...";
    linhasMenu += "\n2 Resultados...";
    linhasMenu += "\n3 Finalizar...";
    linhasMenu += "\nitem:";

    while (true)
    {
        system("clear");
        cout << linhasMenu;
        cin >> itemMenu;

        switch (itemMenu)
        {
        case 1:
            if (cont == 0)
                nome = lerNome();

            salario = lerSalario();
            cont++;                        // contar salários
            saldo += salario;              //acumular salários
            media = calMedia(saldo, cont); // cal média acumulada

            if (cont == 1)
            {
                salMaior = salario;
                salMenor = salario;
            }

            if (salario < salMenor)
                salMenor = salario;

            if (salario > salMaior)
                salMaior = salario;

            break;

        case 2:
            mostrar(nome, cont, saldo, salMenor, salMaior, media);
            break;

        case 3:
            exit(0);
            break;
        }
    }
}