//select_sort
#include <iostream>
using namespace std;

int select_sort (int vetor[], int tam){
	int menor, troca;
	
	//loop externo (i) repassa todo o vetor
	for (int i=0; i<(tam-1);i++){
		menor =i;
		//loop interno (j) trabalha com o proximo elemento
		for (int j=(i+1); j<tam; j++){
			if (vetor[j]<vetor[menor]){
				menor = j;
			}
		}
		//troca
		if (i!=menor){
			troca = vetor[i];
			vetor[i]=vetor[menor];
			vetor[menor]=troca;
		}
	}
}

int  main (){
	//vetor desordenado
	int vet [6] = {8,6,9,4,5,2};
	
	//funcao para ordenar usando select sort
	select_sort(vet, 6);
	
	//printando depois da ordenação
	for (int i=0; i<6; i++){
		cout<<"["<<vet[i]<<"] ";
	}
	
	return 0;	
}

