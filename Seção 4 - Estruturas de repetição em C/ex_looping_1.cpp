//looping 1
#include <iostream>
using namespace std;

/*
UTILIZANDO O WHILE - NAO SEI QUANTOS NUMEROS VAO DIGITAR

faca um programa, no qual receba e some os numeros
inteiros ate que a entrada seja 0
*/

int main(){
	int numero, soma=0;
	
	cout<<"digite um numero (ou 0 para sair): ";
	cin>>numero;
	
	while (numero != 0){
		soma = soma + numero;
		cout<<"digite um numero (ou 0 para sair): ";
		cin>>numero;
	}
	cout<< "A soma eh: "<<soma;
	
	return 0;
	
}
