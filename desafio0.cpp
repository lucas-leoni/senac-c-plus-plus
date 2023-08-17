#include <iostream>
using namespace std;

int idade_anos, idade_meses, idade_dias;

main() {
	system("chcp 65001");
	cout << "Digite sua idade: ";
	cin >> idade_anos;
	idade_meses = idade_anos * 12;
	cout << "Idade em meses: " << idade_meses;
	idade_dias = idade_anos * 365;
	cout << "\nIdade em dias: " << idade_dias;
}