//struct_2

#include <iostream>
using namespace std;

//struct de struct

struct st_contato{
	char nome[100];
	int nasc;
	char tel [20];
} ; 

struct st_agenda{
	struct st_contato contatos [100];
}agenda;

int main(){
	
	for (int i=0; i<2; i++){
		cout<<"nome: ";
		cin>> agenda.contatos[i].nome;
		cout<<"ano de nascimento: ";
		cin>> agenda.contatos[i].nasc;
		cout<< "telefone: ";
		cin>> agenda.contatos[i].tel;
	}
	
	cout<< "================ AGENDA =================="<<endl;
	//printando array com struct
	for (int i=0; i<2;i++){
		cout<< "================ CONTATO "<<i+1<<"================="<<endl;
		cout<< endl;
		cout<< "nome: "<<agenda.contatos[i].nome<<endl;
		cout<< "ano de nascimento: "<< agenda.contatos[i].tel<<endl;
		cout<< "telefone:  "<<agenda.contatos[i].tel<<endl;
		cout<< endl;
	}
	return 0;
} 
