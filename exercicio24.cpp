#include <iostream>
using namespace std;

float num;
int i;

int main() {
    system("chcp 65001");
    cout << "Digite um número para ver a sua tabuada de 1 a 10: ";
    cin >> num;
    cout << "\nTABUADA DO " << num << ":\n\n";
    for(i = 1; i <= 10; i++) {
      cout << num << " X " << i << " = " << num * i << "\n";
    }
    
    cout << "\n\n\n";
}