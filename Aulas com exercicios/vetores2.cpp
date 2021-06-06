#include <iostream> //Vet 05/06/2021
#include <cstdlib>
#include <math.h>
#include <string>
using namespace std;
//criando vetor explicito
//         x0 x1 x2
int x[] = {1, 0, -1};
//         0  1   2
//char sexo[] = {'F', 'H', 'F'};
//string nomes[] = {"Eliseu", "Sara", "Márcio"};

int main()
{
    /*cout << sizeof (int) << endl; 
    cout << sizeof ( x ) << endl;
    cout << sizeof (x)/ sizeof(int);*/

    int n = sizeof(x) / sizeof(int);

    int aux = 0;

    for (int i = 0; i <= n - 1; i++)
    { //           x1**2   +  x2
        aux = pow(x[i], 2) + x[i];
        
        cout << "Valor de x[" << i << "]=" << x[i] << aux << endl;
    }

    return 0;
}