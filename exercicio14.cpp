#include <iostream>
using namespace std;

float num1, num2;

main() {
	system("chcp 65001");
	cout << "Digite um número: ";
	cin >> num1;
	cout << "Digite outro número: ";
	cin >> num2;
	num1 > num2 ? 
	cout << num1 << " é maior que " << num2 << "!" : 
	cout << num2 << " é maior que " << num1 << "!";
	
	cout << "\n\n\n";
}