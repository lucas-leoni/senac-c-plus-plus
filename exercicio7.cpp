#include <iostream>
using namespace std;

float quilometros, metros, centimetros;

main() {
	system("chcp 65001");
	cout << "Digite um valor em quilômetros: ";
	cin >> quilometros;
	metros = quilometros * 1000;
	centimetros = metros * 100;
	cout << "Valor convertido para metros: " << metros;
	cout << "\n Valor convertido para centimetros: " << centimetros;
}