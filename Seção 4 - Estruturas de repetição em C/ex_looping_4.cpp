//ex_looping_4
#include <iostream>
using namespace std;

/*
leia 10 numeros e escreva o maior e menor lido
*/
int main(){
	int numero, maior, menor;
	
	for (int i=0; i<10; i++){
		cout<< "digite o valor "<<i+1<<" de 10: ";
		cin>>numero;
		
		//primeiro looping, para ter parametro de comparacao
		if (i==0){
			maior = numero;
			menor = numero;
		}
		
		//demais loopings
		if (numero>maior){
			maior = numero;
		}
		if (numero<menor){
			menor = numero;
		}
	}
	cout<< "o maior numero eh: "<<maior<<endl;
	cout<< "o menor numero eh: "<< menor;
	return 0;
}
