//ex_matriz_vetor_1
#include <iostream>
using namespace std;

int main(){
	int num [10], par;
	
	//lendo
	//analisando e printando/ contado pares
	for (int i=0; i<10; i++){
		cout<<"Digite o numero "<<i+1<<" : ";
		cin>> num[i];
		if (num[i]%2==0){
			par++;
			cout<<num[i]<<endl;
		}
	}
	cout<<"Total de numeros pares = "<< par;
	return 0;
}
