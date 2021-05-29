#include "iostream"
#include "cstdlib"
#include "string"
using namespace std;

int lerNum(string inf)
{    ​​​​​​​​
    int n;
    system("clear");
    cout << "\nDigite o valor inteiro positivo de " << inf << ":";
    cin >> n;
    return n;
}
​​​​​​​​
// 4 = 1 * 2 * 3 * 4 = 24
int fatorial(int numero)
{
    ​​​​​​​​
    if (numero == 0 || numero == 1)
        return 1;

    int fat = 1;                         //produto dos numeros inteiros positivos de 1 até numero
    for (int i = 1; i <= numero; i += 1) // for de passo 1
    {   ​​​​​​​​
        fat *= i; // fat = fat * i
    }
    ​​​​​​​​

    return fat;
}
​​​​​​​​

void controle_fatorial()
{
    ​​​​​​​​
    int fat, num;
    cout << "\n*** FATORIAL ***";
    num = lerNum("X");
    fat = fatorial(num);
    cout << "\nFatorial de " << num << " é " << fat << endl;
    system("sleep 8");
}
​​​​​​​​

int achaPar(int x, int y, int pos)
{
    ​​​​​​​​
    int indice = 0;
    // x =1 2 3 y = 4
    for (int i = x; i <= y; i += 1)
    {
        ​​​​​​​​
        if (i % 2 == 0)
        {
            ​​​​​​​​
            indice += 1; // numera as posições dos números pares
            if (indice == pos)
            {
                ​​​​​​​​
                return i; // devolve o número par que está nesta posição
            }
            ​​​​​​​​
        }
        ​​​​​​​​
    }​​​​​​​
    return -1;
}
​​​​​​​​

void controle_achaPar()
{
    ​​​​​​​​
    int pos, numPar, x, y;

    cout << "\n*** Encontrando o Número par ***";
    x = lerNum("x");
    y = lerNum("y");
    pos = lerNum("posição");

    numPar = achaPar(x, y, pos);
    if (numPar != -1)
        cout << "\nO número " << numPar << " foi encontrado na posição " << pos << endl;
    else
        cout << "\nNão foi encontrada a posição " << pos << endl;

    system("sleep 8");
}
​​​​​​​​

bool ehPrimo(int num)
{
    ​​​​​​​​
    /*
 O número primo encontra somente dois divisores 
 entre 1 e ele mesmo
 5 i= 1 2 3 4 5 
 */
    cout << "\n*** Descobrindo um número Primo ***";
    int contdiv = 0; // contar divisores entre 1 e num
    for (int i = 1; i <= num; i += 1)
    {
        ​​​​​​​​
        if (num % i == 0)
            contdiv += 1;
    }
    ​​​​​​​​

    if (contdiv == 2)
        return true;
    else
        return false;
}
​​​​​​​​

void controle_primo()
{
    ​​​​​​​​
    int num;
    bool primo;
    num = lerNum("X");

    primo = ehPrimo(num);

    if (primo)
        cout << "\nO número " << num << " é Primo" << endl;
    else
        cout << "\nO número " << num << " Não é Primo" << endl;

    system("sleep 8");
}
​​​​​​​​

int main()
{
    ​​​​​​​​
    setlocale(LC_ALL, "Portuguese");
    controle_fatorial();
    controle_achaPar();
    controle_primo();
}
​​​​​​​​
