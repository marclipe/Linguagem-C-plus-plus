#include "iostream"
#include "cstdlib"
using namespace std;

double const PI = 3.14; //constante
double const G = 9.8;   //constante
double MEDIA1 = 5;      //variável global

void listar( int MEDIA2 )
{
    cout << "\nPI =" << PI; 
    cout << "\nG =" << G; 
    cout << "\nmedia1=" << MEDIA1; 
    cout << "\nmedia2=" << MEDIA2 << endl; 
    system("pause"); 
}

int main(){
    int MEDIA2 = 10; //local - só pode ser usada no local onde foi criada

    listar( MEDIA2 );

    return 0;  
}