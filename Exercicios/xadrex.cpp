//XADREX.CPP
#include <iostream> 
#include <math.h>
using namespace std;

int main(void)
{
  int lin, col; 

  for(lin=1;lin<=8;lin++)
  {
    for(col=1;col<=8;col++)
    {
      if((lin+col)%2 == 0){
        cout << "\xDB\xDB"; // é 
      }else{
        cout << "  ";
    cout <<'\n';    
      }
    }
  }
}