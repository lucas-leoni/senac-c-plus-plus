#include <iostream>
using namespace std;

char resposta1, resposta2, resposta3, resposta4, resposta5, resposta6;
char resposta7, resposta8;
int positivo = 0;

int main() {
    system("chcp 65001");
    cout << "Responda as 8 perguntas a seguir com [s] - sim ou [n] - não. \n\n";
    cout << "Trocou mensagens com a vítima? ";
    cin >> resposta1;
    resposta1 == 's' ? positivo++ : resposta1 == 'S' ? positivo++ : positivo = positivo;
    cout << "Esteve no local do crime? ";
    cin >> resposta2;
    resposta2 == 's' ? positivo++ : resposta2 == 'S' ? positivo++ : positivo = positivo;
    cout << "É parente ou reside perto da vítima? ";
    cin >> resposta3;
    resposta3 == 's' ? positivo++ : resposta3 == 'S' ? positivo++ : positivo = positivo;
    cout << "Devia algum valor para a vítima? ";
    cin >> resposta4;
    resposta4 == 's' ? positivo++ : resposta4 == 'S' ? positivo++ : positivo = positivo;
    cout << "Trabalha ou trabalhou com a vítima? ";
    cin >> resposta5;
    resposta5 == 's' ? positivo++ : resposta5 == 'S' ? positivo++ : positivo = positivo;
    cout << "Possui algum tipo de relacionamento amoroso com a vítima? ";
    cin >> resposta6;
    resposta6 == 's' ? positivo++ : resposta6 == 'S' ? positivo++ : positivo = positivo;
    cout << "Ficou feliz pelo destino fatídico na vítima? ";
    cin >> resposta7;
    resposta7 == 's' ? positivo++ : resposta7 == 'S' ? positivo++ : positivo = positivo;
    cout << "Possui algum tipo de arma de fogo? ";
    cin >> resposta8;
    resposta8 == 's' ? positivo++ : resposta8 == 'S' ? positivo++ : positivo = positivo;
    if(positivo == 4) {
      cout << "\nVocê é um SUSPEITO DO CRIME!";
    } else if(positivo >= 5 && positivo <= 7) {
      cout << "\nVocê é o POSSÍVEL CRIMINOSO!";
    } else if(positivo == 8) {
      cout << "\nVocê é o ASSASSINO!!!";
    } else {
      cout << "\nVocê é INOCENTE!";
    }
    
    cout << "\n\n\n";
}