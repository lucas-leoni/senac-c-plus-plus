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
	
	cout << "\nSua média é: " << media;
	
	if(media >= 7) {
	  cout << " aprovado!";
	} else if(media >= 5 && media < 7) {
	  cout << " recuperação!";
	} else if( media < 5){
	  cout << " reprovado!";
	}
	
	cout << "\n\n\n";
}