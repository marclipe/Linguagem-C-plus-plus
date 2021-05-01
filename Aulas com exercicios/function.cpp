#include "iostream"
#include "cstdlib"
using namespace std;

double lern1()
{
    double n1; //variável de saída
    cout << "Digite  n1";
    cin >> n1;
    return n1;
}

double lern2()
{
    double n2;
    cout << "Digite n2";
    cin >> n2;
    return n2;
}

double calcMedia(double n1, double n2) //variáveis de entrada
{
    double media; //variáveis de saída ou retorno
    media = (n1 + n2) / 2;
    return media; //return só usado dentro de funções
}

void mostrar(double media) //mostrar o resultado
{
    cout << "\nMedia:" << media << endl;
    system("sleep 5");
}

int lerIdade()
{ //Ler idade
    int idade;
    cout << "\nDigite a idade: ";
    cin >> idade;
    return idade; //armazena a idade na função
}

string lerNome()
{ //Ler Nome
    string nome;
    cout << "\nDigite o nome:";
    cin.ignore(); //ignora o enter do cin anterior
    getline(cin, nome);
}

int main()
{
    double nota1, nota2, media;      //variáveis para funções
    int imprimir;                    //variável para a função mostrar
    nota1 = lern1();                 //executa lern1()
    nota2 = lern2();                 // executa lern2()
    media = calcMedia(nota1, nota2); //executa calcMedia
    mostrar(media);                  //executa void mostrar
    return 0;                        //fim do programa
}

//parei 22:55 