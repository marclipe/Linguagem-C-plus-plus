#include "iostream" //  ACUMULADOR & CONTADOR
#include "cstdlib"
using namespace std; 

int main(){
    int cont = 1;
    float valor = 0, saldo = 0, media = 0;

    while(cont<=10){
        cout << cont << "Valor: "; 
        cin >> valor;
        saldo = saldo + valor; //acumula 
        cont = cont + 1; //contador 
        media = saldo/cont; //calcula média 
    }
    cout << "Saldo=" << saldo << endl;
    cout << "Media=" << media << endl;
}