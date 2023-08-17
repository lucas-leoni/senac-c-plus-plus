#include <iostream>
using namespace std;

int qtd_pessoas, i;
float altura, alturas = 0;

int main() {
    system("chcp 65001");
    cout << "Digite a quantidade de pessoas: ";
    cin >> qtd_pessoas;
    cout << "\n";
    for(i = 1; i <= qtd_pessoas; i++) {
      cout << "Digite a altura da pessoa " << i << " em centímetros: ";
      cin >> altura;
      alturas += altura;
    }
    cout << "\nA média de altura das pessoas é: " << alturas / qtd_pessoas << "cm";
    
    cout << "\n\n\n";
}