#include <iostream> //07/05/2021 //FAÇA ENQUANTO… & ACUMULADOR ( += *= )
#include <cstdlib>
using namespace std;

int main(){
    string resp = "não"; 
    float valor = 0, saldo = 0;
    
    while (!(resp == "sim"))
    {
        cout << "Digite valor: ";
        cin >> valor; 
        saldo = saldo + valor; //acumulador 
        cout << "Deseja sair? "; 
        cin >> resp; 
    }
    cout << "Saldo Acumulado=" << saldo << endl;
    return 0; 
}