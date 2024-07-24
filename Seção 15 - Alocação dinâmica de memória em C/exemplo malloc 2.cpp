//exemplo malloc 2
#include <iostream>
#include <stdlib.h> //biblioteca para alocacao dinamica
using namespace std;

int main(){
	int qtd, *p; // exemplo qtd = 3
	
	cout<< "digite a quantidade de elementos: ";
	cin>>qtd;
	
	p = (int*)malloc(qtd * sizeof(int)); // exemplo (qtd 3) * (tamanho int 4) = 12
	
	if (p){
		cout<< "a variavel 'p' ocupa "<<qtd * sizeof(int)<<" bytes em memoria";
	} else{
		cout<<"ERRO: memoria insuficiente";
	}
	
	//FUNDAMENTAL liberar memoria
	free (p);
	p= NULL; //medida de seguranca
	
	return 0;
}
