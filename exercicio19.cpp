#include <iostream>
using namespace std;

float capital, taxa, tempo, juros, montante;

main() {
	system("chcp 65001");
	cout << "Digite o valor do capital: R$ ";
	cin >> capital;
	cout << "Digite a taxa em decimal(ex: 10% = 0.10): ";
	cin >> taxa;
	cout << "Digite o tempo em dias: ";
	cin >> tempo;
	juros = capital * taxa * tempo;
	montante = capital + juros;
	cout << "\nCapital: R$ " << capital;
	cout << "\njuros: R$ " << juros;
	cout << "\nMontante: R$ " << montante;
	
	cout << "\n\n\n";
}