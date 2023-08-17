#include <iostream>
using namespace std;

float base, altura, area;

main() {
	system("chcp 65001");
	cout << "Digite o comprimento da base do retângulo em centímetros: ";
	cin >> base;
	cout << "Digite a altura do retângulo em centímetros: ";
	cin >> altura;
	area = base * altura;
	cout << "\n" << "A área do retângulo é: \n";
	cout << base << " * " << altura << " = " << area << " cm²";
	
	cout << "\n\n\n";
}