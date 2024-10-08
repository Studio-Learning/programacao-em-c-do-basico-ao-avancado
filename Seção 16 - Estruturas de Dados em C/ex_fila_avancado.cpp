//ex_fila_avancado
//ex_fila

//site para visualizar https://www.cs.usfca.edu/~galles/visualization/QueueArray.html

#include <iostream>
using namespace std;

#define TAMFILA 10

int fila [TAMFILA] = {0,0,0,0,0,0,0,0,0,0};
int head = 0; //primeiro da fila ou proximo a ser atendido
int tail = 0; //num de elementos ou ultimo da fila

//funcao para listar os elementos que estao nessa lista
void lista_elementos(){
	cout<<endl;
	cout<<"===========FILA ATUAL============"<<endl;
	for (int i=0; i<TAMFILA; i++){
		cout<<"-";
		cout<<"|"<<fila[i]<<"|";
		cout<<"-";
	}
	cout<<endl;
	cout<<"Head: "<<head<<endl;
	cout<<"Tail: "<<tail<<endl;
	cout<<endl;
}
 //funcao para adicionar elementos na fila
void enqueue(){
	if (tail<TAMFILA){
		cout<<"digite um elemento para a fila: ";
		cin>> fila[tail];
		tail++;
		lista_elementos();
	} else {
		cout<<"fila cheia"<<endl;
	}
}

void organizando(){
	//Se head eh maior que 0, significa que ja removemos pelo menos um elemento da fila.
	if (head>0){
		int j=0; //variavel j ajuda a colocar os elementos na nova posicao.
		
		//comeca no head, que eh onde os elementos nao removidos comecam
		//continua ate o tail, que eh onde os elementos da fila terminam
		//cada elemento em fila[i] eh movido para fila[j], que come�a do inicio (posi��o 0).
		//depois de mover um elemento, aumentamos tanto i quanto j para mover o proximo elemento.
		for (int i=head; i<tail; i++,j++){
			fila[j] = fila[i];
		}
		tail -= head;
        head = 0;
        for (int i = tail; i < TAMFILA; i++) {
            fila[i] = 0;
        }
	}
}

//funcao para remover elemento da fila
void dequeue(){
	if (head<tail){
		fila[head]=0;
		head++;
		organizando();
		lista_elementos();
	}else{
		cout<<"A fila esta vazia..."<<endl;
	}
}

//funcao para limpar
void clear(){
	if (head==tail){
		cout<<"A fila esta vazia..."<<endl;
	}else{
		for (int i=0; i<TAMFILA; i++){
		fila[i]=0;
		}
		head=0;
		tail=0;
		lista_elementos();
	}
	
}

int main(){
	int opcao =0;
	do{
		cout<<endl;
		cout<<"digite 1 para inserir (enqueue): "<<endl;
		cout<<"digite 2 para retirar (dequeue): "<<endl;
		cout<<"digite 3 para limpar (clear): "<<endl;
		cout<<"digite -1 para sair"<<endl;
		cin>>opcao; 
		
		switch(opcao){
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				clear();
				break;
			case -1:
				break;
			default:
				cout<<"opcao invalida";
		}
	
	}	while(opcao !=-1);
	
	return 0;
}
