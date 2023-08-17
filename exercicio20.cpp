#include <iostream>
using namespace std;

int codigo1, codigo2, quantidade1, quantidade2;
float ipi, valor_un1, valor_un2, valor_total;

int main() {
    system("chcp 65001");
    cout << "Digite a percentagem do IPI: ";
    cin >> ipi;
    cout << "Digite o código da peça 1: ";
    cin >> codigo1;
    cout << "Digite o valor unitário da peça 1: ";
    cin >> valor_un1;
    cout << "Digite a quantidade da peça 1: ";
    cin >> quantidade1;
    cout << "\nDigite o código da peça 2: ";
    cin >> codigo2;
    cout << "Digite o valor unitário da peça 2: ";
    cin >> valor_un2;
    cout << "Digite a quantidade da peça 2: ";
    cin >> quantidade2;
    valor_total = (valor_un1 * quantidade1 + valor_un2 * quantidade2) * (ipi / 100 + 1);
    cout << "\nO valor total a ser pago é: R$ " << valor_total;
    
    cout << "\n\n\n";
}