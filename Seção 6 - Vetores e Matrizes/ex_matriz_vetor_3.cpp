//ex_matriz_vetor_3
#include <iostream>
using namespace std;

int main (){
	int a[6] = {1, 0, 5, -2, -5, 7};
	int soma;
	
	soma = a[0]+ a[1] + a[5];
	cout<< "Soma da posicao 0, 1 e 5 = "<< soma<<endl;
	
	a[4] = 100;
	
	cout<< "Printando vetor A atualizado: "<<endl;
	for (int i =0; i<6; i++){
		cout<<a[i]<<endl;
	}
	
	return 0;
}
