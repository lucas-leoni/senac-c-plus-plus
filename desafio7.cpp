#include <iostream>
using namespace std;

int penultimo = 0, ultimo = 1, i, temporario;

main() {
	system("chcp 65001");
	cout << "Imprimindo a sequência de Fibonacci até o 10º termo: ";
	cout << "\n\n" << penultimo << ", " << ultimo;
	for(i = 3; i <= 10; i++) {
		cout << ", " << ultimo + penultimo;
		temporario = penultimo;
		penultimo = ultimo;
		ultimo+= temporario;
	}
	cout << ".";
	
	cout << "\n\n\n";
}