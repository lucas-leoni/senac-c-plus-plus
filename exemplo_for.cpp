#include <iostream>
using namespace std;

int i, numBatatas;

main() {
	system("chcp 65001");
	cout << "Quantas vezes preciso repetir a palavra batata? ";
	cin >> numBatatas;
	
	for( i = 0; i < numBatatas; i++) {
		cout << "Batata " << i << "\n";
	}
	cout << "\nSaindo do for " << i;
	
	cout << "\n\n\n";
}