// exemplo malloc
#include <iostream>
#include <stdlib.h> //biblioteca para alocacao dinamica
using namespace std;

int main(){
	int qtd, *p; // exemplo qtd = 3
	
	cout<< "digite a quantidade de elementos: ";
	cin>>qtd;
	
	p = (int*)malloc(qtd * sizeof(int)); // exemplo (qtd 3) * (tamanho int 4) = 12
	
	for (int i=0; i<qtd; i++){
		cout<< "informe o valor para a posicao "<<i<<" do vetor:"<<endl;
		cin>>p[i];
	}
	
	cout<<endl;
	
	for (int i=0; i<qtd; i++){
		cout<< "na posicao "<<i<<" esta o valor "<<p[i]<<endl;
	}
	
	qtd = qtd * sizeof(int); //nao da para pegar o tamanho direto do p, pois a funcao malloc retorna um ponteiro para o int
	
	cout<<endl;
	cout<< "a variavel 'p' ocupa "<<qtd<<" bytes em memoria";
	
	//FUNDAMENTAL liberar memoria
	free (p);
	p= NULL; //medida de seguranca
	
	return 0;
}
