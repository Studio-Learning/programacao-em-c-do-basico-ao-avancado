//ex_looping_6
#include <iostream>
using namespace std;

/*
	faca um programa que determine e mostre os cincos primeiros multiplos de 3, considerando numeros maiores
	que 0
*/
int main(){
	int numero=1, cont=0;
	
	cout<< "os 5 primeiros multiplos de 3:";	
	
	while (cont<5){
		if (numero%3==0){
			cout<<endl;
			cout<<numero;
			cont++;
		}
		numero++;
	}
}
