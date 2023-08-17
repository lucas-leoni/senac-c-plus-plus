#include <iostream>
using namespace std;

float num;

main() {
	system("chcp 65001");
	cout << "Digite um número: ";
	cin >> num;
	
	if( num == 0 ) {
		cout << "Número neutro.";
	} else if ( num < 0 ) {
		cout << "Número negativo.";
	} else if ( num > 0 ) {
		cout << "Número positivo.";
	}
	
	cout << "\n\n\n";
}