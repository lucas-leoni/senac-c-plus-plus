#include <iostream>
using namespace std;

float milhas, kilometros = 1.60934;

main() {
	system("chcp 65001");
	cout << "Digite a quantidade de milhas: ";
	cin >> milhas;
	kilometros = milhas * kilometros;
	cout << "Quantidade em kilometros: " << kilometros << "km";
}