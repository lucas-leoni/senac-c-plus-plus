#include <iostream>
using namespace std;

int num1;
float num2;
double num3;
char caractere;
bool boolean;

main() {
	system("chcp 65001");
	cout << "Digite um número inteiro: ";
	cin >> num1;
	cout << "Digite um número decimal: ";
	cin >> num2;
	cout << "Digite outro número decimal: ";
	cin >> num3;
	cout << "Digite um caractere: ";
	cin >> caractere;
	cout << "Digite '0' ou '1': ";
	cin >> boolean;
	
	cout << "\nNúmero inteiro: " << num1;
	cout << "\nNúmero decimal: " << num2;
	cout << "\nOutro número decimal: " << num3;
	cout << "\nCaractere: " << caractere;
	boolean == 1 ? cout << "\nBollean: True" : cout << "\nBoolean: False";
	
	cout << "\n\n\n";
}