#include <iostream>
using namespace std;

float nota1, nota2, nota3, media;

main() {
	system("chcp 65001");
	cout << "Digite a primeira nota: ";
	cin >> nota1;
	cout << "Digite a segunda nota: ";
	cin >> nota2;
	cout << "Digite a terceira nota: ";
	cin >> nota3;
	
	nota1 *= 0.20;
	nota2 *= 0.30;
	nota3 *= 0.50;
	
	media = nota1 + nota2 + nota3;
	cout << "\nSua média final é: " << media;
	
	cout << "\n\n\n";
}