#include <iostream> 
#include <cstdlib>
#include <string.h>
using namespace std;

int main()
{ 
    setlocale(LC_ALL, "Portuguese");

    int tecla,H; 
    Menu: 
    system("clear"); 
    cout << "\n1 Executar..."; 
    cout << "\n2 Finalizar...";
    cout << "\n3 Item"; 
    cin >> tecla ; 

     

    switch (tecla)
    {
    case 1: cout << "Digite o primeiro número:  ";
            
            cout << "Digite o segundo número: "; 
        break;
    
    default:
        break;
    }


}