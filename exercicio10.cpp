#include <iostream>
using namespace std;

char genero;
float altura, peso, imc;

main() {
	system("chcp 65001");
	cout << "Digite [H] se você é Homem ou [M] se você é Mulher: ";
	cin >> genero;
	cout << "Digite a sua altura em metros: ";
	cin >> altura;
	
	if( genero == 'H' || genero == 'h' ) {
		cout << "\nSeu IMC fictício é: " << ( 72.7 * altura ) - 58;
	} else if( genero == 'M'  || genero == 'm') {
		cout << "\nSeu IMC fictício é: " << ( 62.1 * altura ) - 44.7;
	}
	
	cout << "\n\n---------------------------------";
	cout << "\n\nAgora vamos calcular o seu IMC seguindo a fórmula padrão...";
	cout << "\n\nPara que possamos calcular digite o seu peso em KG: ";
	cin >> peso;
	imc = peso / ( altura * altura );
	cout << "\nO seu IMC é: " << imc;
	
	if( imc < 18.5 ) {
		cout << " você está muito magro!";
	} else if( imc >= 18.5 && imc <= 24.9 ) {
		cout << " seu peso está normal!";
	} else if( imc >= 25 && imc <= 29.9 ) {
		cout << " você está em sobrepeso!";
	} else if( imc >= 30 && imc <= 39.9 ) {
		cout << " você está com obesidade!";
	} else if( imc > 40 ) {
		cout << " você está com obesidade grave!";
	}
	
	
	cout << "\n\n\n";
}