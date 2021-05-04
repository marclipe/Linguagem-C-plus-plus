#include <iostream> //03/05/2021
#include <cstdlib> 
#include <math.h> 
using namespace std;

double ValorCapital(){
    double capital;
    cout << "Digite o capital: "; 
    cin >> capital;
    return capital; 
}


double calcJuros( double capital ){
    double calcJS;
    //taxa 5% e tempo 2 anos
    calcJS = (capital * 5 * 2)/100;  
    return calcJS;
}

void exibir( double capital ){
    cout << "\nCapital: " << capital << endl;
    system("pause 5");
}

int main(){
    double capital; 

    exibir (capital);

    return 0; 
}