#include <iostream>
using namespace std;

int numero;

int main()
{
    system("chcp 65001");
    cout << "Digite um numero inteiro: ";
    cin >> numero;
    cout << "O dobro de " << numero << " e: " << numero * 2;
}