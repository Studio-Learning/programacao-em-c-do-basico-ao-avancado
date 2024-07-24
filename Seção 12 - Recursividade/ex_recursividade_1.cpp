//ex_recursividade_1
#include <iostream>
using namespace std;

int soma (int n){
	if (n<=1){
		return n;
	}
	return n + soma (n-1);
}

int main(){
	int num;
	cout<<"digite um numero: ";
	cin>> num;
	cout<<"somatorio de "<<num<<" eh "<<soma(num);
	
	
	return 0;
}

