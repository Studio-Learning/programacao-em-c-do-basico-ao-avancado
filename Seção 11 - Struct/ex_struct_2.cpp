//ex_struct_2
//aula de resolucao de exercicio

#include <iostream>
using namespace std;

struct st_aluno{
	char nome[50];
	int matricula;
	char curso[30];
} alunos[5];

int main(){
	for (int i =0; i<2;i++){
		cout<< "nome: ";
		cin>> alunos[i].nome;
		cout<< "matricula: ";
		cin>> alunos[i].matricula;
		cout<<"curso: ";
		cin>> alunos[i].curso;
	}
	
	cout<<endl;
	cout<<"CADASTRO DE ALUNOS"<<endl;
	cout<<endl;
	
	for (int i=0; i<2;i++){
		cout<< "ALUNO "<< i+1<<endl;
		cout<< "nome: "<<alunos[i].nome<<endl;
		cout<< "matricula: "<<alunos[i].matricula<<endl;
		cout<<"curso: "<<alunos[i].curso<<endl;
		cout<<endl;
	}
	
	return 0;
}
