#include <iostream>
using namespace std;

float vel_permitida, vel_praticada, valor;

int main() {
    system("chcp 65001");
    cout << "Digite a velocidade permitida na via: ";
    cin >> vel_permitida;
    cout << "Digite a velocidade praticada pelo motorista: ";
    cin >> vel_praticada;
    vel_praticada <= vel_permitida ? cout << "\nO motorista não será multado." :
    vel_praticada <= (vel_permitida * 1.20) ? cout << "\nO motorista será multado em R$ 102,00!" :
    cout << "\nO motorista será multado em R$ 500,00!";
    
    cout << "\n\n\n";
}