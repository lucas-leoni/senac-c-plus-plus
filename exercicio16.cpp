#include <iostream>
using namespace std;

int cpf, salario_min = 1320;
float num_dependentes, renda, desc_dependentes, aliquota = 0, imposto;

main() {
	system("chcp 65001");
	cout << "Digite o seu CPF sem os caracteres especiais(. e -): ";
	cin >> cpf;
	cout << "Digite o número de dependentes: ";
	cin >> num_dependentes;
	cout << "Digite a sua renda mensal: R$ ";
	cin >> renda;
	desc_dependentes = num_dependentes * 0.05;
	if( renda > ( salario_min * 2) && renda <= ( salario_min * 3)) {
		aliquota = 0.05;
	} else if( renda > ( salario_min * 3) && renda <= ( salario_min * 5)) {
		aliquota = 0.10;
	} else if( renda > ( salario_min * 5) && renda <= ( salario_min * 7)) {
		aliquota = 0.15;
	} else if( renda > ( salario_min * 7)) {
		aliquota = 0.20;
  }
  imposto = renda * ( desc_dependentes + aliquota );
  cout << "\nCPF: " << cpf;
  cout << "\nNúmero de dependentes: " << num_dependentes;
  cout << "\nRenda: R$ " << renda;
  cout << "\nImposto de renda: R$ " << imposto;
	
	cout << "\n\n\n";
}