#include <iostream>
using namespace std;

int numero;

main() {
	system("chcp 65001");
	
	do {
		cout << "Digite um número positivo: ";
		cin >> numero;
	} while( numero < 1 );
	
	cout << "\n\n\n";
}