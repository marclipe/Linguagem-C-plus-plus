#include <iostream> //14/05/2021 
#include <cstdlib>
#include <iomanip>
#include <math.h>
using namespace std;

int contZeros ( string texto ){
    int cont = 0, contzeros = 0;
    string caracter; 

    int totLetras = texto.length();
    while (cont <= totLetras ){
        caracter = texto.substr(cont,  1); //pega caracter
        if( caracter == "0"){
            contzeros ++; 
        }
        cont ++; 
    }//fim while
    return contzeros;
}//fim contzeros

int main(){
    int zeros = contZeros ("g0100e");  //chama a função contzeros
    cout << "Quantidade de zeros: " << zeros << endl;
    return 0;
}

//13:15
