//Aula 5 ALC Operadores Lógicos e Desvios
//Programa nota do aluno 
/*Quadro resumo 
1) mg=0, n1=0, n2=0, faltas=0, nome="", status=""
2) nome, n1, n2
3) mg= sqrt(n1*n2), status = ... (o status é condição)
5) mg, nome, status   
*/
#include <cstdlib>
#include <iostream>
#include <string.h>
#include <math.h>
#include <iomanip> //manipular casas decimais
using namespace std;

double mg = 0, n1 = 0, n2 = 0, faltas = 0;
string nome = "", status = "";
int op = 0;

int main(void)
{
  setlocale(LC_ALL, "Portuguese");

Leitura: //Ponto de repetição
  system("clear");

  cout << "\nDigite o nome: ";
  cin.ignore();       //ignorar cin anterior para permitir o getline
  getline(cin, nome); //Para texto usa-se getline
  // Consistindo a leitura do nome
  if (nome == "")
  {
    cout << "\nO nome não pode estar branco!" << endl;
    system("sleep 3");
    goto Leitura;
  }

  cout << "\nDigite a nota 1: ";
  cin >> n1;

  cout << "\nDigite a nota 2: ";
  cin >> n2;

  cout << "\nDigite as faltas: ";
  cin >> faltas;

  /*Operadores lógicos:  || ou*/
  //Consistindo os números de entrada.
  if (n1 <= 0 || n2 <= 0 || faltas <= 0)
  {
    cout << "\nDigite novamente números positivos!" << endl;
    system("sleep 3");
    goto Leitura;
  }

  //cálculos e processos
  mg = sqrt(n1 * n2);

  if (faltas > 20)
  {
    status = "\nAluno reprovado por faltas";
  }
  else if (mg < 3)
  {
    status = "\nAluno reprovado por notas!";
  }
  else if (mg >= 3 && mg < 5)
  {
    status = "\nAluno de rcuperação!";
  }
  else if (mg >= 5 && mg < 6)
  {
    status = "\nAluno de exame!";
  }
  else
  {
    status = "\nAluno aprovado!";
  }

  system("clear");
  cout << "\n*** Tela de saída***";
  cout << "\nNome... " << nome;
  cout << fixed << setprecision(1) << "\nMedia" << mg;
  cout << "\nStatus: " << status << endl;
  system("sleep 5");

  // setprecison é da biblioteca <iomanip>

  //se quiser digitar várias notas
  cout << "Digite 0 para continuar ou 1 para sair..." << endl;
  cin >> op; // opção de continuar ou sair.

  if (op == 0)
  {
    goto Leitura;
  }
  else
  {
    exit(0);
  }

  return 0;
}
