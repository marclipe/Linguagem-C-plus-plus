#include <iostream>
#include <string.h>
#include <math.h>
#include <cstdlib> // system  **Alugumas IDEs podem não funcionar*
using namespace std; 

int main() {
  setlocale(LC_ALL, "Portuguese"); 

  int tecla, N; 
  Menu: // Interação ou repetição
  system("clear"); //clear no Windows
  cout << "\n1 Executar...";
  cout << "\n2 Finalizar..."; 
  cout << "\n3 Item ";  
  cin >> tecla; 

  switch (tecla) {
    case 1: system("clear");
      cout << "\nDigite o Número inteiro: ";
      cin >> N; 
    break; 

    if (N % 2 == 0 && N % 3 == 0)
    {
      cout << "O número " << N << " é divisivel por 2 e 3 ";       
    }
    else
    {
      cout << "O número " << N << " Não é divisivel por 2 e 3"; 
    }

    case 2: cout << "Programa Finalizado";
        exit (0);  
    break;   
  }

  system("pause");

  goto Menu; 

  return 0; 
}