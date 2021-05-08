#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip> //biblioteca --> setprecision
using namespace std;

//Quadro Resumo de Sub Rotinas
string lerNome();   //leitura do nome
double lerVlPgto(); //armazena leitura do pagamento
double lerVlPgto();
double getMedia(double saldo, double cont);
void mostrar(string cliente, int cont, double saldo, double media);
void menu_controle();

int main()
{
    setlocale(LC_ALL, "Portuguese");
    menu_controle(); //executa o menu do programa

    return 0;
}

string lerNome()
{
    string nom_;
    cout << "Digite o nome: ";
    cin.ignore(); //ignora a leitura de um valor númerico
    getline(cin, nom_);
} //armazena leitura do nome

double lerVlPgto()
{
    double valor;
    cout << "Digite o valor: ";
    cin >> valor;
    return valor;
} //armazena leitura do pagamento

double getMedia(double saldo, double cont)
{
    double media;
    media = saldo / cont;
    return media;
}

void mostrar(string cliente, int cont, double saldo, double media)
{
    system("cls");
    cout << "\nResultados..";
    cout << "\nCliente: " << cliente;
    cout << "\nContagem: " << cont;
    cout << "\nsaldo...: R$" << fixed << setprecision(2) << saldo;
    cout << "\nMedia..: R$" << media << endl;
    cout << "\n**** Fim dos resultados*****";
    system("pause 5");
}

void menu_controle()
{
    int item = 0, cont = 0;
    double saldo = 0;

    //variáveis de funções
    string nome; 
    double valor, media;

    while (true)
    { //while infinito
        system("cls");
        cout << "\n**** Menu de Controle****";
        cout << "\n1Ler valores e processar...";
        cout << "\n2Exibir resultados...";
        cout << "\n3Finalizar..";
        cout << "\nSelecione a operação: ";
        cin >> item;

        switch (item)
        {
        case 1:
            if(cont = 0) nome = lerNome(); 
            valor = lerVlPgto();
            cont += 1; //contar valores
            saldo += valor; //acumular valores 
            media = getMedia( saldo,  cont); 
            break;
        case 2: mostrar(nome, cont, saldo, media); 
            break;
        case 3:
            exit(0);
            break;
        }
    }
}