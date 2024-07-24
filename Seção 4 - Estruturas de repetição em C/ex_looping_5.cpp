//ex_looping_5
#include <iostream>
using namespace std;

/*
	escreva um programa que declare um inteiro, inicialize-o com 0, incremente-o de 100 em 100,
	imprimindo seu valor na tela, ate que seu valor seja 100000
*/
int main(){
	int numero=0;
	cout<< "numero: "<<numero<<endl;
	
	do{
		numero= numero+100;
		cout<< "numero: "<<numero<<endl;
	}while (numero<100000);
	
	return 0;
}
