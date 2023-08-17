#include <iostream>
using namespace std;

float numero;

main() {
	system("chcp 65001");
	cout << "Informe um número para calcular sua tabuada: ";
	cin >> numero;
	cout << "Tabuada do número " << numero << ": \n";
	cout << numero << " X 0 = " << numero * 0;
	cout << "\n" << numero << " X 1 = " << numero * 1;
	cout << "\n" << numero << " X 2 = " << numero * 2;
	cout << "\n" << numero << " X 3 = " << numero * 3;
	cout << "\n" << numero << " X 4 = " << numero * 4;
	cout << "\n" << numero << " X 5 = " << numero * 5;
	cout << "\n" << numero << " X 6 = " << numero * 6;
	cout << "\n" << numero << " X 7 = " << numero * 7;
	cout << "\n" << numero << " X 8 = " << numero * 8;
	cout << "\n" << numero << " X 9 = " << numero * 9;
	cout << "\n" << numero << " X 10 = " << numero * 10;
}