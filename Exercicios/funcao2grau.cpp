#include "iostream"
#include "cstdlib"
#include "math.h"
#include "string"
using namespace std;

//Ler A
double lerA(){
    double A; 
    cout << "Digite A: "; 
    cin >> A;  

    
    return A; 
}

//Ler B 
double lerB(){
    double B; 
    cout << "Digite B: "; 
    cin >> B; 
    return B; 
}

//Ler C
double lerC(){
    double C; 
    cout << "Digite C: "; 
    cin >> C; 
    return C; 
}

//Calcular o delta
double calcDelta( double A, double B, double C ){
    double Delta; 
    Delta = B*B*4*A*C;
    
    return Delta;    
}


//Cálculo X1
double lerX1(double Delta, double B, double A){
    double X1; 
    X1 = -B + sqrt(Delta)/2*A; 
    return X1; 
}

//Cálculo  X2 
double lerX2(double Delta, double B, double A){
    double X2; 
    X2 = - B - sqrt(Delta)/2*A; 
    return X2; 
}

void exibir(double Delta, double X1, double X2)//mostrar o resultado
{ 
    cout << "\nDelta: " << Delta << endl;
    cout << "\nX1: " << X1 << endl;
    cout << "\nX2: " << X2 << endl;
    system("pause 5");
}

int main()
{                               //criar variáveis para chamar as funções
    double A, B, C, Delta, X1, X2; //variáveis para as funções

    if(Delta < 0){
        cout << "Delta não poderá ser negativo!"; 
    }else if(Delta > 0){
        double lerX1(); 
        double lerX2(); 
    }else if(A = 0 ){
        cout << "A não poderá ser ZERO!!"; 
    }else if(A > 0){
        double lerDelta(); 
    }
    
    A = lerA();                 //executa lern1()
    B = lerB();   
    C = lerC();              // executa lern2()
    Delta = calcDelta(A, B, C); //executa Delta


    exibir( Delta, X1, X2); //executa void mostrar
    return 0;                    //fim do programa
}