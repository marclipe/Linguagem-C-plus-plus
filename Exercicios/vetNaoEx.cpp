#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;

int linha = -1;
int const n = 5;

/*Faça um código contendo vetores não explícitos, para armazenar o nome, a
situação do empregado que poderá ser: “efetivo” ou “estagiário” e a idade. A leitura
deverá ser feita através de um menu de controle, coloque também uma opção para
exibir somente os nomes dos estagiários e outra opção para exibir somente o nome
dos efetivos, finalmente uma opção para exibir os funcionários menores de idade.*/

string nome[n];
string sit[n];
int idade[n];

void inserir(string name, string situ, int ida)
{
    linha += 1;
    nome[linha] = name;
    sit[linha] = situ;
    idade[linha] = ida;
}

void mostrar()
{
    system("clear");
    for (int i = 0; i <= linha; i++)
    {
        cout << nome[i] << " -- " << sit[i] << " -- " << idade[i] << endl;
    }
    system("pause");
}

int main()
{
    string nome, sit;
    int idade, tecla;
    while (true)
    {
        system("cls");
        cout << "\n1 Leitura\n2 Mostrar \n3 Nome dos Estagiários \n4 Nomes Efetivos\n5 Menores de idade\n6 Sair \nItem: ";
        cin >> tecla;
        if (tecla == 1)
        {
            cout << "\nDigite o nome, situação e idade: \n";
            cin >> nome >> sit >> idade;
            inserir(nome, sit, idade);
        }
        else if (tecla == 2)
        {
            mostrar();
        }
        else if (tecla == 3)
        {
            if (sit == "estagiários")
            {
                nome += 1;
                cout << nome;
            }
            system("pause 3");
        }
        else if (tecla == 4)
        {
            if (sit == "efetivos")
            {
                nome += 1;
                cout << nome;
            }
            system("pause 3");
        }
        else if (tecla == 5)
        {
            if (idade <= 18)
            {
                nome += 1;
                cout << nome;
            }
            system("pause 3");
        }
        else if (tecla == 6)
        {
            break;
        }
    }
    return 0;
}