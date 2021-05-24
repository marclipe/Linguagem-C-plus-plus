#include <iostream> //Não divisiveis 3 e 4 23/05/2021
#include <cstdlib>
#include <math.h>
#include <string>
using namespace std;

int get_soma(int x, int y);
void controle();

int main()
{
    setlocale(LC_ALL, "Portuguese");
    controle();
}

int get_soma(int x, int y)
{
    int soma = 0;
    for (int i = x; i <= y; i++)
    {
        if (i % 3 == 0 && i % 4 == 0)
        {
            soma += i;
            cout << "Soma==" << soma << endl;
        }
    }
    return soma;
}

void controle(){
    int x, y;
    cout << "\nDigite dois valores: "; 
    cin >> x >> y;

    int soma = get_soma(x, y);

    cout << "\n\n\nSoma: " << soma << endl;
    system("pause 5"); 
}