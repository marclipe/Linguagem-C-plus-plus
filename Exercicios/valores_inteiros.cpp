#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std; 

int n1, n2, n3; 

int main()
{
    setlocale(LC_ALL, "Portuguese");
    cout << "\nLer 3 valores inteiros e escrever o maior deles";  
    system("clear"); 
    
    cout << "\nDigite o primeiro valor: ";
    cin >> n1; 

    cout << "\nDigite o segundo valor: "; 
    cin >> n2; 

    cout << "\nDigite o terceiro valor: "; 
    cin >> n3; 

    if ( n1 > n2, n3 ){
        cout << "\nO Maior valor é : " << n1; 
    }else if( n2 > n1, n3 ){
        cout << "\nO Maior valor é : " << n2; 
    }else if( n3 > n1, n2 ){
        cout << "\nO Maior valor é : " << n3; 
    }else if( n1 == n2 == n3 ){
        cout << "Números iguais não são válidos"; 
    }else if(){

    }
}