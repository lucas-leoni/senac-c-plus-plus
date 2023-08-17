#include <iostream>
using namespace std;

int op;
main() {	
  system("chcp 65001");
	do{
		cout<<"\n \t Escolha uma opção a seguir: \n";
		cout<<"\n [1] Exercício 1";
		cout<<"\n [2] Exercício 2";
		cout<<"\n [3] Exercício 3";
		cout<<"\n [4] Exercício 4";
		cout<<"\n [5] Exercício 5";
		cout<<"\n [6] Exercício 6";
		cout<<"\n [7] Encerrar \n\n";
		cin>>op;
		system("cls");

		switch(op) {
			case 1: {
				//Exercício 3. FUP que solicite o peso de 5 pessoas e calcule a media; Imprima o resultado;
				cout << "Exercício 1 \n\n";
				
				int i, tamanho = 5;
				float pesos[tamanho], media;
				
				for(i=0; i < tamanho; i++) {
					cout << "Digite o peso da " << i + 1 << "ª pessoa em Kg: ";
					cin >> pesos[i];
				}
				media = (pesos[0] + pesos[1] + pesos[2] + pesos[3] + pesos[4]) / tamanho;
				cout << "\nA média dos pesos é: " << media << " Kg";
				
				cout << "\n\n--------------------------------------------";
				cout << "\n\n";
				system("pause");
				cout << "Aperte qualquer tecla para continuar...";
				system("cls");
				break;
			};
			case 2: {
				/*
					Exercício 10. FUP que calcule o IMC -solicite se é H ou M e faça o calculo;
					- para homens: (72.7*h)-58
					- para mulheres: (62.1*h)-44.7
				*/
				cout << "Exercício 2 \n\n";
				
				char genero;
				float altura, peso, imc;
				
				cout << "Digite [H] se você é Homem ou [M] se você é Mulher: ";
				cin >> genero;
				cout << "Digite a sua altura em metros: ";
				cin >> altura;
				if( genero == 'H' || genero == 'h' ) {
					cout << "\nSeu IMC fictício é: " << ( 72.7 * altura ) - 58;
				} else if( genero == 'M'  || genero == 'm') {
					cout << "\nSeu IMC fictício é: " << ( 62.1 * altura ) - 44.7;
				}
				cout << "\n\n--------------------------------------------";
				cout << "\n\nAgora vamos calcular o seu IMC seguindo a fórmula padrão...";
				cout << "\n\nPara que possamos calcular digite o seu peso em Kg: ";
				cin >> peso;
				imc = peso / ( altura * altura );
				cout << "\nO seu IMC é: " << imc;
				if( imc < 18.5 ) {
					cout << " você está muito magro!";
				} else if( imc >= 18.5 && imc <= 24.9 ) {
					cout << " seu peso está normal!";
				} else if( imc >= 25 && imc <= 29.9 ) {
					cout << " você está em sobrepeso!";
				} else if( imc >= 30 && imc <= 39.9 ) {
					cout << " você está com obesidade!";
				} else if( imc > 40 ) {
					cout << " você está com obesidade grave!";
				}
				
				cout << "\n\n--------------------------------------------";
				cout << "\n\n";
				system("pause");
				cout << "Aperte qualquer tecla para continuar...";
				system("cls");
				break;
			};
			case 3: {
				/*
					Exercício 20. FUP que leia:
    			
					• a percentagem do IPI a ser acrescido no valor das peças
    			• o código da peça 1, valor unitário da peça 1, quantidade de peças 1
    			• o código da peça 2, valor unitário da peça 2, quantidade de peças 2
    			
    			O algoritmo deve calcular o valor total a ser pago e apresentar o resultado.
					Fórmula : ValorTotal = (valor1*quant1 + valor2*quant2)*(IPI/100 + 1)
				*/
				cout << "Exercício 3 \n\n";
				
        int i, codigos[2], quantidades[2];
        float ipi, valores[2], valor_total;
        
				cout << "Digite a porcentagem do IPI: ";
				cin >> ipi;
        for(i=0; i < 2; i++) {
        	cout << "Digite o código da peça " << i + 1 << ": ";
        	cin >> codigos[i];
        	cout << "Digite o valor unitário da peça " << i + 1 << ": ";
        	cin >> valores[i];
        	cout << "Digite a quantidade da peça " << i + 1 << ": ";
        	cin >> quantidades[i];
				}
        valor_total = (valores[0] * quantidades[0] + valores[1] * quantidades[1]) * (ipi / 100 + 1);
        cout << "\nO valor total a ser pago é: R$ " << valor_total;
				
				cout << "\n\n--------------------------------------------";
				cout << "\n\n";
				system("pause");
				cout << "Aperte qualquer tecla para continuar...";
				system("cls");
				break;
			};
			case 4: {
				//Exercício 23. FUP que solicite um numero e escreva "Batata" enquanto o usuario digita 1;
				cout << "Exercício 4 \n\n";
				
				float num;
				
				do {
          cout << "Digite um número: ";
          cin >> num;
          num == 1 ? cout << "Batata!\n\n" : cout << "";
        } while(num == 1);
				
				cout << "\n\n--------------------------------------------";
				cout << "\n\n";
				system("pause");
				cout << "Aperte qualquer tecla para continuar...";
				system("cls");
				break;
			};
			case 5: {
				//Exercício 24. FUP que imprima a tabuada de um numero de 0 a 10;
				cout << "Exercício 5 \n\n";
				
				float num;
				int i, resultados[10];
				
				cout << "Digite um número para ver a sua tabuada de 1 a 10: ";
		    cin >> num;
		    for(i=0; i < 10; i++) {
		    	resultados[i] = num * (i + 1);
				}
				cout << "\n";
				for(i=0; i < 10; i++) {
		    	cout << num << " X " << i + 1 << " = " << resultados[i] << "\n";
				}
				
				cout << "\n\n--------------------------------------------";
				cout << "\n\n";
				system("pause");
				cout << "Aperte qualquer tecla para continuar...";
				system("cls");
				break;
			};
			case 6: {
				cout << "Exercício 6 \n\n";
				
        int qtd_sequencias, i, primeiro = 0, segundo = 1;
        cout << "Digite a quantidade de sequências a serem impressas: ";
        cin >> qtd_sequencias;
        cout << "\n";
        for(i=1; i <= qtd_sequencias; i++) {
	    	  for(primeiro; primeiro < segundo; primeiro++) {
	    			cout << "*";
				  }
				  segundo += i + 1;
				  cout << "\n";
				  for(primeiro; primeiro < segundo; primeiro++) {
		    	  cout << "*";
			  	}
				  cout << "\n";
				  segundo += i;
				  for(primeiro; primeiro < segundo; primeiro++) {
		    	  cout << "*";
				  }
				  cout << "\n";
				  segundo += i + 1;
				}
				
				cout << "\n\n--------------------------------------------";
				cout << "\n\n";
				system("pause");
				cout << "Aperte qualquer tecla para continuar...";
				system("cls");
				break;
			};
			case 7: {
				cout<<"\nFinalizando...";
				break;
			};
			default: {
				cout<<"\nOpção inválida!\n";
				break;
			}
		}
	} while(op != 7);
	cout<<"\n\n\n\n\n - Até mais \n\n\n\n\n";
}