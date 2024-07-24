//ponteiro_3
#include <iostream>
using namespace std;

int main (){
	int vetor[5];
	
	for (int i=0; i<5; i++){
		cout<< "digite o vetor "<<i+1<<"/5: ";
		cin>> vetor[i];
	}
	for (int i=0; i<5; i++){
		cout<<*(vetor+i)*2<<endl;	
	}
	return 0;
}
