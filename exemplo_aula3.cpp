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
	
	media = ( nota1 + nota2 + nota3 ) / 3;
	
	cout << "Sua média é: " << media;
	
	if(media < 3) {
	  cout << " horrível!";
	} else if(media <= 7) {
	  cout << " da para melhorar!";
	} else {
	  cout << " excelente!";
	}
	
	cout << "\n\n\n";
}