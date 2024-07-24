//ex_recursividade_2
#include <iostream>
using namespace std;

int fat (int n){
	if (n<=1){
		return n;
	}
	return n * fat (n-1);
}

int main(){
	int num;
	cout<<"digite um numero: ";
	cin>> num;
	cout<< "o fatorial eh igual a: "<<fat(num);
	return 0;

}

