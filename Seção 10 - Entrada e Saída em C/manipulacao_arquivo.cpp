//manipulacao_arquivo.cpp
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main(){
	FILE *arq;
	char c;
	
	arq=fopen ("arq.txt", "w");
	if (arq){
		while (c!='0'){
			cout<<"digite um caractere ou 0 para sair: ";
			cin>>c;
			
			if (c=='0'){
				break;
			}
			fputc(c, arq);
		}
		fclose(arq);
	}else{
		cout<< "Nao foi possivel abrir o arquivo";
	}
	//fclose(arq);
	
	arq = fopen ("arq.txt", "r");
	if (arq){
		while ((c = getc(arq))!=EOF){
			cout<<c<<endl;
		}
	}else{
		cout<< "Nao foi possivel abrir o arquivo";
	}
	
	fclose(arq);
	return 0;
}
