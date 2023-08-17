#include <iostream>
using namespace std;

float valorHora, horasTrabalhadas, salario;

main() {
	system("chcp 65001");
	cout << "Digite quanto voce recebe por hora trabalhada: ";
	cin >> valorHora;
	cout << "Digite quantas horas voce trabalhou: ";
	cin >> horasTrabalhadas;
	salario = valorHora * horasTrabalhadas;
	cout << "Este e o salario que voce deve receber: " << salario;
}