#include <iostream>
using namespace std;

int a, b, c, area;

main() {
	system("chcp 65001");
	cout << "Digite o valor da base do triângulo, inteiro, positivo e em centímetros: ";
	cin >> a;
	cout << "Digite outro valor inteiro e positivo em centímetros: ";
	cin >> b;
	cout << "Digite outro valor inteiro e positivo em centímetros: ";
	cin >> c;
	
	if(( b - c) < a < b + c && ( a - c) < b < a + c && ( a - b) < c < a + b ) {
		//area = ( a *  ) / 2;
		cout << "Os valores formam um triângulo de área: " << " area cm²";
	} else {
		cout << "Os valores: " << a << ", " << b << " e " << c << " não formam um triângulo!";
	}
	
	cout << "\n\n\n";
}