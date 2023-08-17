#include <iostream>
using namespace std;

float peso, peso_total = 0;
int i;

int main() {
    system("chcp 65001");
    for(i = 1; peso_total <= 180; i++) {
      cout << "Digite o seu peso em Kg: ";
      cin >> peso;
      peso_total += peso;
    }
    cout << "\nO elevador está em seu peso máximo.";
    
    cout << "\n\n\n";
}