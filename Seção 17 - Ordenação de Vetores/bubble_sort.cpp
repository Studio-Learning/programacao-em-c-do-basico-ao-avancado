//bubble_sort
#include <iostream>
using namespace std;

void bubble_sort(int vetor[], int tam){
	//auxiliar
	int prox=0;
	
	//varrer todo o vetor 
	for (int i=0; i<tam; i++){
		//trabalhar com os proximos elementos
		for (int j=0; j<(tam-1); j++){
			//troca
			if (vetor[j]>vetor[j+1]){
				prox=vetor[j];
				vetor[j]=vetor[j+1];
				vetor[j+1]=prox;
			}
		}
	}
}
int main (){
		//vetor desordenado
	int vet [6] = {8,6,9,4,5,2};
	
	//funcao para ordenar usando bubble sort
	bubble_sort(vet, 6);
	
	//printando depois da ordenação
	for (int i=0; i<6; i++){
		cout<<"["<<vet[i]<<"] ";
	}
	
	return 0;
}
