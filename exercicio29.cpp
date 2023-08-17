#include <iostream>
using namespace std;

int i, vetor[15];

int main() {
  system("chcp 65001");
  for(i=0; i < 15; i++) {
  	vetor[i] = rand() % 101;
	}
  cout << "Meu vetor: \n\n";
  for(i=0; i < 15; i++) {
  	cout << vetor[i];
  	i < 14 ? cout << ", " : cout << ".";
	}
	
  cout << "\n\n\n";
}