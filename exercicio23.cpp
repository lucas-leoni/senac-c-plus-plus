#include <iostream>
using namespace std;

float num;

int main() {
    system("chcp 65001");
    do {
      cout << "Digite um número: ";
      cin >> num;
      num == 1 ? cout << "Batata!\n" : cout << "";
    } while(num == 1);
    
    cout << "\n\n\n";
}