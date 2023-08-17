#include <iostream>
using namespace std;

int resultado;

int main()
{
    system("chcp 65001");
    cout << "Calculando a soma dos numeros de 1 a 10: \n";
    resultado = 1 + 2;
    cout << "\n1 + 2 = " << resultado;
    resultado += 3;
    cout << "\n3 + 3 = " << resultado;
    resultado += 4;
    cout << "\n6 + 4 = " << resultado;
    resultado += 5;
    cout << "\n10 + 5 = " << resultado;
    resultado += 6;
    cout << "\n15 + 6 = " << resultado;
    resultado += 7;
    cout << "\n21 + 7 = " << resultado;
    resultado += 8;
    cout << "\n28 + 8 = " << resultado;
    resultado += 9;
    cout << "\n36 + 9 = " << resultado;
    resultado += 10;
    cout << "\n45 + 10 = " << resultado;
}