#include <iostream>
using namespace std;

float custo_fabrica, custo_distribuidor, impostos, custo_consumidor;

main() {
	system("chcp 65001");
	cout << "Digite o custo de fábrica: R$ ";
	cin >> custo_fabrica;
	custo_distribuidor = custo_fabrica * 0.28;
	impostos = custo_fabrica * 0.45;
	custo_consumidor = custo_fabrica + custo_distribuidor + impostos;
	cout << "\nCusto com distribuidor: R$ " << custo_distribuidor;
	cout << "\nCusto com impostos: R$ " << impostos;
	cout << "\nCusto total para o consumidor: R$ " << custo_consumidor;
	
	cout << "\n\n\n";
}