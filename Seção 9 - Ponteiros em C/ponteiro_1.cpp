#include<iostream>
using namespace std;

int main(){
	int valores[5] = {1,2,3,4,5};
	
	for (int i=0; i<5; i++){
		cout<< "*valores+i vale "<<*valores+i<<" e endereco de memoria "<< &valores[i]<<endl;
	}
	return 0;
}
