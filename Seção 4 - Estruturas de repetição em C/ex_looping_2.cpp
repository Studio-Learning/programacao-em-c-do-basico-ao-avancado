//ex_looping_2
#include <iostream>
using namespace std;

/*
UTILIZANDO O FOR - SEI QUANTOS NUMEROS VAO DIGITAR
faca um programa, no qual receba e some 5 numeros no final
*/

int main(){
	int numero, soma =0;
	for (int i=0; i<5; i++){
		cout<<"digite um numero : ";
		cin>>numero;
		soma = soma + numero;
	}
	cout<< "A soma eh: "<<soma;
	
	return 0;
}

