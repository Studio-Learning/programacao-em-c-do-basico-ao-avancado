//manipulacao_arquivo3.cpp

#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

//receba o nome de um arquivo texto e um caractere. mostre na tela 
//quantas vezes aquele caractere aparece dentro do arquivo

int main(){
	FILE *arq;
	char nome[20], letra, c;
	int cont;
	
	cout<< "digite o nome do arquivo: ";
	cin>>nome;
	
	cout<< "digite uma letra: ";
	cin>>letra;
	
	arq = fopen(strcat(nome, ".txt"),"r");
	if (arq){
		while ((c=getc(arq))!=EOF){
			if (c==letra){
				cont++;
			}
		}
		cout<<"A quantidade de vezes que a letra "<<letra<<" se repete eh: "<<cont;
	}
	
	return 0;
}
