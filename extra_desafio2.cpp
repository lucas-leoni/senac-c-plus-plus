#include <iostream>
using namespace std;

int num;

main() {
	system("chcp 65001");
	cout << "Digite um número inteiro: ";
	cin >> num;
	if( num == 0 ) {
		cout << "\n" << num << " é neutro!";
	} else if( num > 0 ) {
		cout << "\n" << num << " é positivo!";
	} else {
		cout << "\n" << num << " é negativo!";	
	}
	
	cout << "\n\n\n";
}