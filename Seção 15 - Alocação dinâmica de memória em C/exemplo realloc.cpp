//exemplo realloc
#include <iostream>
#include <stdlib.h> //biblioteca para alocacao dinamica
using namespace std;

//realloc - realocacao de memoria
//se vai fazer uma realocacao significa que ja foi usado malloc ou calloc

int main(){
	int qtd, qtd2, qtdtot, *p; 
	
	cout<< "digite a quantidade de elementos: ";
	cin>>qtd;
	
	p = (int*)malloc(qtd * sizeof(int)); 
	
	if (p==NULL){
		cout<<"ERRO: memoria insuficiente"<<endl;
		return 1;
	}
	
	for (int i=0; i<qtd; i++){
		cout<< "informe o valor para a posicao "<<i<<" do vetor:"<<endl;
		cin>>p[i];
	}
	
	cout<<endl;
	
	for (int i=0; i<qtd; i++){
		cout<< "na posicao "<<i<<" esta o valor "<<p[i]<<endl;
	}
	
	cout<<endl;
	
	cout<<"digite a nova quantidade de elementos para o vetor: ";
	cin>>qtd2;
	
	qtdtot = qtd+qtd2;
	
	p = (int*)realloc(p, qtdtot*sizeof(int));
	
	if (p==NULL){
		cout<<"ERRO: de realocacao de memoria"<<endl;
		return 1;
	}
	
	
	for (int i=qtd; i<qtdtot; i++){
		cout<< "informe o valor para a posicao "<<i<<" do vetor:"<<endl;
		cin>>p[i];
	}
	
	
	for (int i=0; i<qtdtot; i++){
		cout<< "na posicao "<<i<<" esta o valor "<<p[i]<<endl;
	}
	
	
	//FUNDAMENTAL liberar memoria
	free (p);
	p= NULL; //medida de seguranca
	
	return 0;
}
