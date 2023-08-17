#include <iostream>
using namespace std;

float temperaturaCelsius, temperaturaFahrenheit;

main() {
	system("chcp 65001");
	cout << "Digite a temperatura em graus Celsius: ";
	cin >> temperaturaCelsius;
	temperaturaFahrenheit = ( 9 * temperaturaCelsius + 160) / 5;
	cout << "A temperatura em graus Fahrenheit e: " << temperaturaFahrenheit;
}