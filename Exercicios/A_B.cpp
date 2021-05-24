#include <iostream> //23/05/2021
#include <cstdlib>
#include <math.h>
#include <string>
using namespace std;

int get_Soma(int A, int B, int num);
void controle();

int main()
{
    setlocale(LC_ALL, "Portuguese");
    controle();
}

int get_Soma(int A, int B, int num)
{
    int cont = 0 , soma;
    //calcule e exiba o somatório de todos os números ímpares entre A e B
    for (int i = A; i <= B; i += 1)
    { 
        if (num != 0)
        {
            num = i ++;
            //cout << i  << "\nSoma "  << num << endl;

            soma = num + i;

            cout << "\nsoma: " << soma;  
        }
    }
}

void controle()
{
    int A, B, num;


    cout << "\n\n***MENU ***\n";

    cout << "\nDigite dois valores: ";
    cin >> A >> B;

    get_Soma(A, B, num);

    
}
