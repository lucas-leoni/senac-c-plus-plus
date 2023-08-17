#include <iostream>
using namespace std;

float segundos, minutos, horas;

main() {
	system("chcp 65001");
	cout << "Digite a quantidade de segundos: ";
	cin >> segundos;
	horas = segundos / 3600;
	minutos = horas * 60;
	cout << "Duracao do evento em horas: " << horas;
	cout << ", minutos: " << minutos << ", segundos: " << segundos;
}