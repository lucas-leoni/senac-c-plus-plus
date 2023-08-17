#include <iostream>
using namespace std;

int num_termos, penultimo = 0, ultimo = 1, i, temporario;

main() {
	system("chcp 65001");
	cout << "Digite o número de termos: ";
	cin >> num_termos;
	cout << "\n" << penultimo << ", " << ultimo;
	for(i = 3; i <= num_termos; i++) {
		cout << ", " << ultimo + penultimo;
		temporario = penultimo;
		penultimo = ultimo;
		ultimo+= temporario;
	}
	cout << ".";
	
	cout << "\n\n\n";
}