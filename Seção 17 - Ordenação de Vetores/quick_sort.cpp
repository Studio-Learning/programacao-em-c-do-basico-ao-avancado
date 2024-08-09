//quick_sort
#include <iostream>
using namespace std;

void quick_sort(int vetor[], int tam){
	int i,j, grupo, troca;
	
	//criterio de parada da recursividade
	if (tam<2){
		return;//sai da funcao
	} else{
		grupo = vetor[tam/2];
	}
	
	//fazendo loop unico se comportar como dois
	 for(i = 0, j = tam - 1;; i++, j--){

    	//Fazemos a movimentacao dos elementos no vetor
        while(vetor[i] < grupo){
            i++;
        }

        //movimentacao dos elementos no vetor
        while(grupo < vetor[j]){
            j--;
        }
        //Criterio de parada do loop
        if(i >= j){
            break;
        }else{
        	//Onde ocorre as trocas
			troca = vetor[i];
			vetor[i] = vetor[j];
			vetor[j] = troca;
        }
    }
    //Usando recursividade para ordenar os grupos
    quick_sort(vetor, i);
    quick_sort(vetor + i, tam - i);
}

int main(){
	//vetor desordenado
	int vet [6] = {8,6,9,4,5,2};
	
	//funcao para ordenar usando quick sort
	quick_sort(vet, 6);
	
	//printando depois da ordenação
	for (int i=0; i<6; i++){
		cout<<"["<<vet[i]<<"] ";
	}
	return 0;  
}
