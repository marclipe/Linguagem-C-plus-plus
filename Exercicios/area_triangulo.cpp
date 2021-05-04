#include <iostream> //04/05/2021
#include <cstdlib>
using namespace std;

double lerbase(){
    double base; 
    cout << "\nLer Base: "; 
    cin >> base; 
    return base; 
}

double leraltura(){
    double altura; 
    cout << "Ler Altura: ";
    cin >> altura;
    return altura; 
}

double calcarea(double base, double altura){
    double area; 
    area = (base * altura)/2; 
    return area;  
}

void exibir (double base, double altura, double area){
    system("clear");
    cout << "\nBase.." << base;
    cout << "\nAltura.." << altura;
    cout << "\nArea.." << area; 
    system("clear"); 
}

int main (){
    double base, altura, area;
    int tecla = 0; 
    while( tecla!=4 ){
        cout << "\n1 Ler.."; 
        cout << "\n2 Calcular..."; 
        cout << "\nExibir..."; 
        cout << "\nSair"; 
    }  
}