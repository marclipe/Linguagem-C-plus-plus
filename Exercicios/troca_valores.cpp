#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std; 

int aux, n; 

int main ()
{
  setlocale(LC_ALL, "Portuguese"); 

  int n1, n2, n3, n4;

  system("clear"); 
  cout << "Digite o primeiro número: ";
  cin >> n1; 
  cout << "Digite o segundo número: ";
  cin >> n2; 
  cout << "Digite o terceiro número: ";
  cin >> n3;
  cout << "Digite o quarto número: ";
  cin >> n4; 

    if(n1 > n2)
    {
      aux = n1; n1 = n2; n2 = aux;
    }else if( n1>n3 )
    {
      aux = n1; n1 = n3; n3 = aux;  
    }else if( n2>n3 )
    {
      aux = n2; n2 = n3; n3 = aux;   
    }else if( n3>n4 ) {
      aux = n3; n3 = n4; n4 = aux;  
    }

  cout << "Com a troca de valores: ";
  cout << n1 << ", " << n2 << ", " << n3 << ", " << n4; 

  return 0; 
}
