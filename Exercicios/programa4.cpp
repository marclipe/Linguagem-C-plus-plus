#include "iostream" //03/05/2021
#include "cstdlib"
#include "math.h"
using namespace std;

double lerA()
{
    double A;
    cout << "Digite A: ";
    cin >> A;
    return A;
}

double lerB()
{
    double B;
    cout << "Digite b: ";
    cin >> B;
    return B;
}

double lerC()
{
    double C;
    cout << "Digite C: ";
    cin >> C;
    return C;
}

//Cálculo S
double CAL_S(double A, double B, double C)
{
    double S;
    S = (A + B + C) / 2;
    return S;
}

//Cáculo AH
double CAL_AH(double A, double B, double C, double S)
{
    double AH;
    AH = sqrt(S * (S - A) * (S - B) * (S - C));
    return AH; 
}

//Mostrar resultado
void exibir(double A, double B, double C, double S, double AH){
    cout << "\nA: " << A << endl;
    cout << "\nB: " << B << endl;
    cout << "\nC: " << C << endl;
    cout << "\nS: " << S << endl;
    cout << "\nAH: " << AH << endl; 
    system("pause 5");
}

int main (){
    double A, B, C, S, AH; // 

    exibir(A , B, C, S, AH); 
    return 0;
}