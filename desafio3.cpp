#include <iostream>
using namespace std;

float num1, num2, num3;

main() {
	system("chcp 65001");
	cout << "Digite o primeiro número: ";
	cin >> num1;
	cout << "Digite o segundo número: ";
	cin >> num2;
	cout << "Digite o terceiro número: ";
	cin >> num3;
	
	if( num1 < num2 && num1 < num3 ) {
		cout << "\nO menor número é: " << num1;
	} else if( num2 < num1 && num2 < num3 ) {
		cout << "\nO menor número é: " << num2;
	} else if( num3 < num1 && num3 < num2 ) {
		cout << "\nO menor número é: " << num3;
	}
	
	cout << "\n\n\n";
}