//recursividade
#include <iostream>
using namespace std;

/*
*	RECURSIVIDADE É A FUNCAO QUE CHAMA ELA MESMA
*
*	OBS: eh fundamental ter uma forma clara de parada, caso contrario ira ocorrer uma especie de looping
*/

int fibonacci (int n){//4
	if (n==0){
		return 0;
	}
	if (n==1){
		return 1;
	}
	return fibonacci(n-1)+fibonacci(n-2);//
}

int main (){
	int qtd;
	cout<< "Tamanho da sequencia de fibonacci: ";
	cin>> qtd;
	
	for (int i=1; i<=qtd; i++){
		cout<<fibonacci(i);
	}
	
	return 0;
}
