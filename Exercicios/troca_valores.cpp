#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std; 

int aux; 

int main ()
{
  setlocale(LC_ALL, "Portuguese"); 

  int n1, n2, n3;

  system("clear"); 
  cout << "Digite o primeiro número: ";
  cin >> n1; 
  cout << "Digite o segundo número: ";
  cin >> n2; 
  cout << "Digite o terceiro número: ";
  cin >> n3;
  
    if(n1 > n2)
    {
      aux = n1; n1 = n2; n2 = aux;
    }else if( n1>n3 )
    {
      aux = n1; n1 = n3; n3 = aux;  
    }else if( n2>n3 )
    {
      aux = n2; n2 = n3; n3 = aux;   
    }

  cout << n1 << n2 <<  n3;   
    
}
