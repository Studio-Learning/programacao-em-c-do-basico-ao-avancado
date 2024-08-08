//shell_sort
#include <iostream>
using namespace std;


void shell_sort (int vetor[], int tam){
		//auxiliar
		int grupo=1;
		
		//gerar tamanho do grupo de acordo com o tamanho do vetor
		while(grupo<tam){
			grupo = 3*grupo+1;
		}
		
		//varrer vetor enquanto houver grupos para ordenar
		while (grupo>1){
			//dividir grupo em 3 partes
			grupo/=3;
			//varremos cada grupo
			for (int i=grupo; i<tam; i++){
				int troca=vetor[i];
				int j =i-grupo;
				//realiza a troca
				while (j>=0 && troca<vetor[j]){
					vetor[j+grupo]=vetor[j];
					j -=grupo;
				}
				//realiza a troca
				vetor[j+grupo]= troca;
			}
		}
}

int main(){
	//vetor desordenado
	int vet [6] = {8,6,9,4,5,2};
	
	//funcao para ordenar usando shell sort
	shell_sort(vet, 6);
	
	//printando depois da ordenação
	for (int i=0; i<6; i++){
		cout<<"["<<vet[i]<<"] ";
	}
	return 0;
}
