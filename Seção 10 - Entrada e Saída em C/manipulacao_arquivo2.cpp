////manipulacao_arquivo2.cpp
#include<iostream>
#include<string.h>
#include<fstream>

using namespace std;

//faca um programa que receba do usuario o nome de um arquivo texto e 
//mostre na tela quantas linhas este arquivo possui
int main(){
	FILE *arq; 
	char nome[20],c;
	int cont;
	
	cout<<"digite o nome do arquivo: ";
	cin>>nome;
	
	arq = fopen(strcat(nome, ".txt"),"r");
	if (arq){
		while ((c = getc(arq))!=EOF){
			if (c=='\n'){
				cont++;
			}
		}
	}else {
		cout<<"Arquivo nao encontrado";
	}
	cout<<"o total de linhas eh: "<<cont;
	fclose(arq);
}


