//ex_matriz_vetor_2
#include <iostream>
using namespace std;

int main(){
	int num[10];
	
	//preenchendo
	for (int i=0; i<10; i++){
		cout<< "Digite o numero "<<i+1<<" : ";
		cin>> num[i];
		if (num[i]<0){
			num[i]=0;
		}	
	}
	
	//printando
	cout<<endl;
	cout<< "Printando os valores, se negativos recebem 0"<<endl;
	for (int i=0; i<10; i++){
			cout<< num[i]<<endl;
	}
	
	return 0;
}
