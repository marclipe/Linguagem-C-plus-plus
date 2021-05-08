#include <iostream> //07/05/2021 
#include <cstdlib>
#include <iomanip>
using namespace std;

double lerbase()
{
    double base;
    cout << "\nLer Base: ";
    cin >> base;
    return base;
}

double leraltura()
{
    double altura;
    cout << "Ler Altura: ";
    cin >> altura;
    return altura;
}

double calcarea(double base, double altura)
{
    double area;
    area = (base * altura) / 2;
    return area;
}

void exibir(double base, double altura, double area, double mediaArea)
{
    system("cls");
    cout << "\nBase.." << base;
    cout << "\nAltura.." << altura;
    cout << "\nArea.." << area;
    cout << "\nMedia area.." << mediaArea; 
    system("pause");
}

int main(){
    int cont = 1; 
    double saldoArea = 0, valor = 0, mediaArea; 

    double base, altura, area;
    int tecla = 0;
    while (tecla != 4)
    {
        system("clear");
        cout << "\n1 Ler..";
        cout << "\n2 Calcular...";
        cout << "\n3 Exibir...";
        cout << "\n4 Sair\nItem";
        cin >> tecla; 

    if (tecla == 1)
    {
        base = lerbase();
        altura = leraltura();
    }
    else if (tecla == 2)
    {

        area = calcarea(base, altura);
        cont =+1; 
        saldoArea += area;
        cout << "\nCálculo bem sucedido!";
        system("pause");
    }
    else if (tecla == 3)
    {
        mediaArea = saldoArea/cont;
        exibir(base, altura, area, mediaArea);
    } 

    cout << "\nPrograma Finalizado\n";  
    system("pause");
    return 0;
    } //fim while
}