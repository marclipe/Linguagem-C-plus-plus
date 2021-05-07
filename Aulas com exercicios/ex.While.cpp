#include <iostream> //07/05/2021
#include <cstdlib>
using namespace std;

int main(){
    int contador = 0; 
    int diminuir = 20; 

    while(contador < 10){
        contador = contador + 1;

        diminuir = diminuir - 5;     
    }

    cout << "Contagem=" << contador << endl; //10 
    cout << "Decremento=" << diminuir << endl; //-30
    return 0; 
}