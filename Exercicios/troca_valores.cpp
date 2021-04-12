#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int n1, n2, n3, n4, aux;

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int tecla;

  system("clear");

Menu:
  system("clear");
  cout << "\n1 Executar...";
  cout << "\n2 Finalizar...";
  cout << "\n3 Item";
  cin >> tecla;

  switch (tecla)
  {
  case 1: system("clear"); 
    cout << "Digite 4 numeros: ";
    cin >> n1 >> n2 >> n3 >> n4; 

    if (n1 > n2)
    {
      aux = n1;
      n1 = n2;
      n2 = aux;
    }
    else if (n1 > n3)
    {
      aux = n1;
      n1 = n3;
      n3 = aux;
    }
    else if (n2 > n3)
    {
      aux = n2;
      n2 = n3;
      n3 = aux;
    }else if(n1 > n4){
      aux = n1;
      n1 = n4;
      n4 = aux;
    }else if(n2 > n4){
      aux = n2;
      n2 = n4;
      n4 = aux;
    }else if(n3 > n4){
      aux = n3;
      n3 = n4;
      n4 = aux; 
    }
     
    cout  << n1 << n2 << n3 << n4;
    break;

  case 2: system("clear"); 
    cout << "\nFinalizando.. ";
    exit(0);
    break;
  }

  goto Menu; 

  return 0; 
}
