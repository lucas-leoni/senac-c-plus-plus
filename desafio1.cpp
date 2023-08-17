#include <iostream>
using namespace std;

float a, b, temporario;

main() {
	system("chcp 65001");
	cout << "Digite um número: ";
	cin >> a;
	cout << "Digite outro número: ";
	cin >> b;
	cout << "\nPrimeiro valor: " << a;
	cout << "\nSegundo valor: " << b;
	cout << "\n\nAlterando valores...";
	temporario = b;
	b = a;
	a = temporario;
	cout << "\n\nPrimeiro valor alterado: " << a;
	cout << "\nSegundo valor alterado: " << b;
}