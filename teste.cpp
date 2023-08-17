#include <iostream> // Biblioteca de funções

using namespace std; // Área de trabalho

int num, num2 = 2;
int resultadoTeste;

int main() // Primeira função a ser executada
{
  system("chcp 65001"); // Qual conjunto de caracteres usaremos
    
  cout <<"\n\t Digite um número inteiro: \n";
  cin >> num;
  resultadoTeste = num * 2;
  cout << "\n Resultado: " << resultadoTeste;
}
