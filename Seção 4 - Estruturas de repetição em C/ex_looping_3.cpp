//ex_looping_3
#include <iostream>
using namespace std;

/*
UTILIZANDO O DO WHIlE - NAO TENHO UM NUMERO FIXO MAS TENHO CRITERIO DE PARADA E A CONDICAO 
DE PARADA EH CHECADA APOS A PRIMEIRA EXECUCAO

faca um programa, no qual receba e some os numeros
inteiros ate que a entrada seja 0
*/

int main(){
	int numero, soma=0;
	
	do{
		cout<<"digite um numero (ou 0 para sair): ";
		cin>>numero;
		soma = soma + numero;
	}
	while (numero!=0);
	
	cout<< "A soma eh: "<<soma;
	
	return 0;
	
}
