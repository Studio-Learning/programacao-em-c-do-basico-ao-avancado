//ex2
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	int qtd, qtdtot, *p;
	
	p=(int*)calloc(3,sizeof(int));
	
	if (p==NULL){
		cout<<"memoria invalida";
		return 1;
	}
	
	for (int i=0; i<3;i++){
		cout<<"digite o valor "<<i<<":";
		cin>>p[i];
	}
	
	for (int i=0; i<3;i++){
		cout<<"valor "<<p[i]<<endl;
	}
	
	cout<<"informe o novo tamanho do vetor: ";
	cin>>qtd;
	
	if (qtd>3){
		
		qtdtot = 3+qtd;
		
		p =(int *) realloc(p, qtdtot * sizeof(int));
		
		if (p==NULL){
			cout<<"memoria invalida";
			return 1;
		}
		
		for (int i=3; i<qtdtot;i++){
			cout<<"digite o valor "<<i<<":";
			cin>>p[i];
		}
		
		for (int i=0; i<qtdtot;i++){
			cout<<"valor "<<p[i]<<endl;
		}
		
	} else {
		cout<<"valor inferior a 3, fim do programa";
	}
	
	free (p);
	p = NULL;
	return 0;
}
