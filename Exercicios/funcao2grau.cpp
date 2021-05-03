#include "iostream"
#include "cstdlib"
#include "string"
using namespace std;

//Ler A
double lerA(){
    double A; 
    cout << "Digite A: "; 
    cin >> A;  

    if(A = 0 ){
        cout << "A não poderá ser ZERO!!"; 
    }else if(A > 0){
        lerDelta; 
    }
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

double lerDelta(double A, double B, double C){ 
    double Delta; 

    Delta = B*B*4*A*C;
    if(Delta < 0){
        cout << "Delta não poderá ser negativo!"; 
    }
    return Delta;    
}


int main(){

    
    return 0; 
}