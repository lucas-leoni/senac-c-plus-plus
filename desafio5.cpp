#include <iostream>
using namespace std;

int i, num, negativos = 0, positivos = 0, pares = 0, multiplos7 = 0;

int main() {
  system("chcp 65001");
	for(i = 1; i <= 10; i++) {
    cout << "Digite o número " << i << ": ";
    cin >> num;
    num < 0 ? negativos++ : negativos = negativos;
    num > 0 ? positivos++ : positivos = positivos;
    num % 2 == 0 ? pares++ : pares = pares;
    num % 7 == 0 ? multiplos7++ : multiplos7 = multiplos7;
  }
  cout << "\nQuantidade de números negativos: " << negativos;
  cout << "\nQuantidade de números positivos: " << positivos;
  cout << "\nQuantidade de números pares: " << pares;
  cout << "\nQuantidade de números múltiplos de 7: " << multiplos7;
  
  cout << "\n\n\n";
}