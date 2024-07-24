//struct_1.cpp

#include <iostream>
using namespace std;

//struct significa estrutura, ela une um grupo de variaveis de tipos 
//diferentes em um unico grupo, diferente de arrays (que tem que ser do mesmo tipo)

struct st_aluno{
	char matricula[10];
	char nome[100];
	char curso[50];
	int nasc;
} alunos[5];//aluno1; //declarando junto com struct 

//no momento que declaro a struct posso declarar as variaveis que serao utilizadas na hora ou
//declarar depois e ate mesmo em escolo local

int main(){
	//struct st_aluno aluno1; 	
	//declarando depois a variavel
	
	//preenchendo array com struct
	//posso declarar um array para o caso de alocar varios alunos
	for (int i=0; i<5; i++){
		cout<<"matricula: ";
		cin>> alunos[i].matricula;
		cout<<"nome: ";
		cin>> alunos[i].nome;
		cout<< "curso: ";
		cin>> alunos[i].curso;
		cout<<"ano de nascimento: ";
		cin>> alunos[i].nasc;
	}
	//printando array com struct
	for (int i=0; i<5;i++){
		cout<< "================ DADOS DO ALUNO ================="<<endl;
		cout<< "matricula: "<<alunos[i].matricula<<endl;
		cout<< "nome: "<<alunos[i].nome<<endl;
		cout<< "curso: "<< alunos[i].curso<<endl;
		cout<< "ano de nascimento: "<< alunos[i].nasc<<endl;
	}
	return 0;
}
