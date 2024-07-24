//ex_recursividade_3
#include <iostream> 
using namespace std;

int binario (int n){
	if (n==0){
		return n;
	} else{
		return (n%2+10*binario(n/2));
	}
}

int main(){
   int num;
   cout<< "digite um numero: ";
   cin>> num;
   cout<< "em binario eh: "<< binario (num);
   return 0;
}
