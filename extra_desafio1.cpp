#include <iostream>
using namespace std;

int num;

main() {
	system("chcp 65001");
	cout << "Digite um número inteiro: ";
	cin >> num;
	num % 2 == 0 ? cout << num << " é par!" : cout << num << " é ímpar!";
	
	cout << "\n\n\n";
}