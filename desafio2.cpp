#include <iostream>
using namespace std;

int num1, num2;

int main()
{
    system("chcp 65001");
    cout << "Digite um numero inteiro: ";
    cin >> num1;
    cout << "Digite outro numero inteiro: ";
    cin >> num2;
    cout << "O numero maior e: ";
    num1 > num2 ? cout << num1 : cout << num2;
}