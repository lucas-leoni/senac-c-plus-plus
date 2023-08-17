#include <iostream>
using namespace std;

int i, num, negativos = 0;

int main() {
    system("chcp 65001");
    for(i = 1; i <= 10; i++) {
      cout << "Digite o número " << i << ": ";
      cin >> num;
      num < 0 ? negativos++ : negativos = negativos;
    }
    cout << "\nQuantidade de números negativos: " << negativos << ".";
    
    cout << "\n\n\n";
}