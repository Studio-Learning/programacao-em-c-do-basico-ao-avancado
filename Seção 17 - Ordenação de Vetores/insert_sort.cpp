//ex_insert_sort
#include <iostream>
using namespace std;

void insert_sort (int vetor[], int tam){
	int troca;
	//percorrer vetor
	for (int i=1; i<tam; i++){
		int prox = i;
		
		//troca
		while ((prox!=0)&&(vetor[prox]<vetor[prox-1])){
			troca =  vetor[prox];
			vetor[prox]=vetor[prox-1];
			vetor[prox-1]=troca;
			prox--;
		}
	}
}

int main(){
		//vetor desordenado
	int vet [6] = {8,6,9,4,5,2};
	
	//funcao para ordenar usando insert sort
	insert_sort(vet, 6);
	
	//printando depois da ordenação
	for (int i=0; i<6; i++){
		cout<<"["<<vet[i]<<"] ";
	}
	
	return 0;
}
