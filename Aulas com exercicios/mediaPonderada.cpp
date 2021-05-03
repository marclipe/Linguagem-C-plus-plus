#include "iostream" //02/05/2021
#include "cstdlib"
#include "math.h"
using namespace std;

//Variveis Globais fora de qualquer função

double const pes1 = 0.35; //contante
double const pes2 = 0.65; // contante

double nota1, nota2, mediaP; //variáveis globais

int main()
{
    setlocale(LC_ALL, "Portuguese");

    system("cls"); //apagar tela

    cout << "\ndigite a nota1: ";
    cin >> nota1;

    cout << "\ndigite a nota2: ";
    cin >> nota2;

    mediaP = nota1 * pes1 + nota2 * pes2;

    if (mediaP >= 6)
    {
        cout << "Aluno Aprovado";
    }
    else
    {
        cout << "Aluno Reprovado!"; 
    }


    //saida de resultados 
    cout << "\nO valor da Média é: " << mediaP << endl; //

    system("pause");
}
