//ex_struct_1
//aula de resolucao de exercicio

#include <iostream>
using namespace std;

struct st_cadastro{
	char nome[50];
	int idade;
	char end[100];
}cadastro;

int main(){
	//entrando com as informacoes
	cout<< "nome: ";
	cin>>cadastro.nome;
	cout<<"idade: ";
	cin>> cadastro.idade;
	cout<<"endereco: ";
	cin>> cadastro.end;
	
	//printando as informacoes
	cout<< "nome: "<<cadastro.nome<<endl;
	cout<<"idade: "<<cadastro.idade<<endl;
	cout<<"endereco: "<<cadastro.end<<endl;
	
	return 0;
}

