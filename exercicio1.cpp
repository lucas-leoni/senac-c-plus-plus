#include <iostream>
using namespace std;

float num1, num2, resultado;

main() {
	system("chcp 65001");
	cout << "Digite um número real: ";
	cin >> num1;
	cout << "Digite outro número real: ";
	cin >> num2;
	cout << "Soma dos números digitados: ";
	resultado = num1 + num2;
	cout << num1 << " + " << num2 << " = " << resultado;
}