//select_sort_extra
#include <iostream>
#include <cstdlib> 
using namespace std;

//struct com nome, nota do aluno
//ordenar da menor para maior nota
//mostrar o melhor aluno e o pior aluno

typedef struct st_aluno{
	int nota;
	char nome[50];
} aluno;

int menu(){
		cout<<"0 - sair"<<endl;
		cout<<"1 - cadastrar novo aluno"<<endl;
		cout<<"2 - imprimir notas ordenadas (crescente e decrescente)"<<endl;
		cout<<"3 - melhor e pior aluno"<<endl;
		int op;
		cin>>op;
		return op;
}

aluno* cadastro(aluno* alu, int tam){
	aluno* novo = (aluno*)malloc((tam+1)*sizeof(aluno));
	if (novo == NULL) {
        cout<< "Falha na alocação de memória"<<endl;
        return NULL;
    }
    
    for (int i = 0; i < tam; ++i) {
        novo[i] = aluno[i];
    }

    
    cout<<"Digite o nome: ";
    cin>> novo[tam].nome;
    cout<<"Digite a nota: ";
    cin>> novo[tam].nota;
    tamanho++;
    
    free(aluno);

    return novo;
}

void ordenarcrescente(aluno *alu, int tam){
	for (int i=0; i<(tam-1);i++){
		for (int j=(i+1); j<tam; j++){
			if (alu[j].nota<alu[i].nota){
				//trocando
				alu temp= alu[i];
				alu[i]=alu[j];
				alu[j]= temp;
			}
		}
	}	
}

void ordenardecrescente(aluno *alu, int tam){
	for (int i=0; i<(tam-1);i++){
		for (int j=(i+1); j<tam; j++){
			if (alu[j].nota>alu[i].nota){
				//trocando
				alu temp= alu[i];
				alu[i]=alu[j];
				alu[j]= temp;
			}
		}
	}	
}

void imprimir(aluno *alu, int tam){
	if (tam==0){
		cout<<"Nao ha alunos para imprimir"<<endl;
	}
	
	//imprime crescente
	ordenarcrescente(aluno, tam);
	cout<<"ORDEM CRESCENTE: "<<endl;
	for (int i=0; i<tam; i++){
		cout<<"Nome: "<<alu[i].nome<<endl;
		cout<<"Nota: "<<alu[i].nota<<endl;
	}
	
	//imprime decrescente
	ordenardecrescente(aluno, tam);
	cout<<"ORDEM DECRESCENTE: "<<endl;
	for (int i=0; i<tam; i++){
		cout<<"Nome: "<<alu[i].nome<<endl;
		cout<<"Nota: "<<alu[i].nota<<endl;
	}
}


int main (){
	aluno* alu = NULL;
	int opcao =0;
	int tamanho = 0;
	
	do{
		opcao=menu();
		switch(op){
			case 0:
				//sair
				cout<<"Fim do programa!"<<endl;
				break;
			case 1:
				//cadastrar novo aluno
				alu = cadastro(alu, tamanho);
				break;
			case 2: 
				//imprimir notas ordenadas (crescente e decrescente)
				imprimir(alu, tamanho);
				break;
			case 3:
				//melhor e pior aluno 
				
				
				break;	
			default:
				//opcao invalida
				cout<<"Opcao invalida, digite novamente"<<endl;
				break;
		}
		system("pause");
	}while (opcao!=0);
	
	return 0;
}



