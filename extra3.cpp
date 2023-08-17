#include <iostream>
using namespace std;

float base, altura, area;

main() {
	system("chcp 65001");
	cout << "Digite o comprimento da base do triângulo em centímetros: ";
	cin >> base;
	cout << "Digite a altura do triângulo em centímetros: ";
	cin >> altura;
	area = ( base * altura ) / 2;
	cout << "\nA área do triângulo é: ";
	cout << "\n( " << base << " * " << altura << " ) / 2 = " << area << " cm²";
}