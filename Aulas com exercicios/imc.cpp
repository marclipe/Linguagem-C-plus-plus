#include <cstdlib>
#include <iostream>
#include <string> //manipulação de textos
#include <math.h>
#include <iomanip> // manipulação de casas decimais
using namespace std;

//variavéis globais
string nome;              //variável do tipo texto
double imc, peso, altura; //números reais
string status;            //situação do peso

int main()
{
    int item;
    setlocale(LC_ALL, "Portuguese");

MENU: //Ponto de repetição
    system("clear");
    cout << "\n*** Menu de Controle ***";
    cout << "\n1 Digite o nome, o peso e a altura...";
    cout << "\n2 Clacular o IMC...";
    cout << "\n3 Exibir os resultados...";
    cout << "\n4 Finalizar o programa...";
    cout << "\n5 Intem:";
    cin >> item;

    if (item == 1)
    {
        system("clear"); /*No linux cls no Windows clear*/
        cout << "\n Digite o nome: ";
        cin >> nome;
        cin.ignore();       //ignora o enter do cin anterior para usar getline
        getline(cin, nome); //lê um texto via teclado getline

        cout << "\nDigite o peso";
        cin >> peso;

        cout << "\nDigite a altura";
        cin >> altura;
    }

    else if (item == 2)
    {
        imc = peso / pow(altura, 2);

        if (imc < 18.5)
        {
            status = "Você está abaixo do peso!";
        }
        else if (imc <= 24.9)
        {
            status = "Você está no peso ideal!";
        }
        else
        {
            status = "Você está acima do peso. Procure ajuda!";
        }

        cout << "\nCaculando o IMC..." << endl; //ALT + F8 para solução de problemas
        system("sleep 3");
    }

    else if (item == 3)
    {
        system("clear");
        cout << "\n *** Tela de Saída ***";
        cout << "\n Nome: " << nome;
        cout << "\nIMC.." << imc;
        cout << "\nStatus: " << status << endl;
        system("sleep 5");
    }

    else if (item == 4)
    {
        exit(0);
    }

    goto MENU; //voltar para o ponto de repetição MENU

    return 0;
}
