//ex_pilha
#include <iostream>
using namespace std;

#define TAMPILHA 10

//site para visualizar https://www.cs.usfca.edu/~galles/visualization/StackArray.html

int pilha[TAMPILHA] ={0,0,0,0,0,0,0,0,0,0};
int topo =0;

void elementos(){
	cout<<endl;
	cout<<"====================PILHA ATUAL===================="<<endl;
	for (int i=0; i<TAMPILHA; i++){
		cout<<"-";
		cout<<"| "<<pilha[i]<<" |";
		cout<<"-";
	}
	cout<<endl;
	cout<<"Topo: "<< topo<<endl;
	cout<<endl;
}

void push(){
	if (topo<TAMPILHA){
		cout<<"Digite um elemento: ";
		cin>>pilha[topo];
		topo++;
		elementos();
	} else {
		cout<<"A pilha esta cheia!"<<endl;
	}
}

void pop(){
	if (topo>0){
		pilha[topo-1]=0;
		topo--;
		elementos();
	} else{
		cout<<"A pilha esta vazia!"<<endl;
	}
}

void clear(){
	if (topo==0){
		cout<<"A pilha ja esta limpa!"<<endl;
	} else{
		for (int i=0; i<TAMPILHA; i++){
			pilha[i]=0;
		}
		topo=0;
		elementos();
	}
}

int main(){
	int op=0;
	do{
		cout<<endl;
		cout<<"digite 1 para inserir (push): "<<endl;
		cout<<"digite 2 para retirar (pop): "<<endl;
		cout<<"digite 3 para limpar (clear): "<<endl;
		cout<<"digite 4 para listar os elementos: "<<endl;
		cout<<"digite -1 para sair"<<endl;
		cin>>op; 
		
		switch (op){
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				clear();
				break;
			case 4:
				elementos();
				break;
			case -1:
				break;
			default:
				cout<<"Opcao invalida!";
		}
	}while (op!= -1);
	return 0;
}
