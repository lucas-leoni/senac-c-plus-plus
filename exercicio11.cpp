#include <iostream>
using namespace std;

char operacao;
float num1, num2, resultado;

main() {
	system("chcp 65001");
	cout << "Digite uma operação -> [ +, -, /, * ]: ";
	cin >> operacao;
	cout << "Digite um número: ";
	cin >> num1;
	cout << "Digite outro número: ";
	cin >> num2;
	
	if( operacao == '+') {
		resultado = num1 + num2;
		cout << "\nResultado da operação: ";
		cout << num1 << " + " << num2 << " = " << resultado;
	} else if( operacao == '-') {
		resultado = num1 - num2;
		cout << "\nResultado da operação: ";
		cout << num1 << " - " << num2 << " = " << resultado;
	} else if( operacao == '/') {
		resultado = num1 / num2;
		cout << "\nResultado da operação: ";
		cout << num1 << " / " << num2 << " = " << resultado;
	} else if( operacao == '*') {
		resultado = num1 * num2;
		cout << "\nResultado da operação: ";
		cout << num1 << " * " << num2 << " = " << resultado;
	}
	
	cout << "\n\n\n";
}