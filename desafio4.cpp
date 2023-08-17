#include <iostream>
using namespace std;

int ano;

main() {
	system("chcp 65001");
	cout << "Digite o ano: ";
	cin >> ano;
	ano % 4 == 0 ? cout << "O ano " << ano << " é bissexto." : cout << "O ano " << ano << " não é bissexto.";
	
	cout << "\n\n\n";
}