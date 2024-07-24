#include <iostream>
#include "maior.h"

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//funcao para ler numeros
void lendo_num(int vet[]){
	for (int i=0;i<10;i++){
		cout<< "digite um numero: ";
		cin>>vet[i];
	}
}

int main(int argc, char** argv) {
	int vetor[10];
	int num;
	
	//preenchendo vetor
	lendo_num(vetor);

	//printando vetor 
	for (int i=0; i<10; i++){
		cout<< vetor[i]<< " ";
	}
	cout<< endl;
	
	//maior valor do vetor
	cout<<endl<< "o maior numero do vetor eh: "<< maior(vetor);	
	return 0;
}
