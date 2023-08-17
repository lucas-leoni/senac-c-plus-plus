#include <iostream>
using namespace std;

int i, vetor[30];
int indices_rand[5] = { 1 + rand() % 8, 9 + rand() % 8, 17 + rand() % 6, 23 + rand() % 6, 24 + rand() % 6 };

int main() {
  system("chcp 65001");
  for(i=0; i < 5; i++) {
  	vetor[indices_rand[i]] = rand() % 101;
	}
  cout << "Meu vetor: \n\n";
  for(i=0; i < 5; i++) {
  	cout << "Índice " << indices_rand[i] << ": ";
  	cout << vetor[indices_rand[i]];
  	i < 4 ? cout << "\n" : cout << "";
	}
	
  cout << "\n\n\n";
}