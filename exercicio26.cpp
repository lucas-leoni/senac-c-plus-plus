#include <iostream>
using namespace std;

float peso, pesos = 0;
int i;

int main() {
    system("chcp 65001");
    for(i = 1; i <= 5; i++) {
      cout << "Digite peso da pessoa " << i << " em Kg: ";
      cin >> peso;
      pesos += peso;
    }
    cout << "\nA média de peso das pessoas é: " << pesos / 5 << "Kg";
    
    cout << "\n\n\n";
}