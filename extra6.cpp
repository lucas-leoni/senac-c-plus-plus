#include <iostream>
using namespace std;

float raio, diametro, pi = 3.14, circunferencia, area;

main() {
	system("chcp 65001");
	cout << "Digite o raio da circunferência em centímetros: ";
	cin >> raio;
	diametro = raio * 2;
	circunferencia = 2 * pi * raio;
	area = pi * ( raio * raio );
	cout << "\nO diâmetro do círculo é: " << diametro << " cm";
	cout << "\nA circunferência do círculo é: " << circunferencia << " cm";
	cout << "\nA área do círculo é: " << area << " cm²";
	
	cout << "\n\n\n";
}