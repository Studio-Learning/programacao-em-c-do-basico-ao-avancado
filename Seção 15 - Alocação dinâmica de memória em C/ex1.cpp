//ex1
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	int *p;
	
	p= (int *)calloc(5, sizeof(int));
	
	if (p==NULL){
		cout<<"memoria invalida";
		return 1;
	}
	
	for(int i=0; i<5 ;i++){
		cout<<"digite o item "<<i<<":";
		cin>>p[i];
	}
	
	for (int i=0; i<5; i++){
		cout<<p[i]<<endl;
	}
	
	//liberando
	free(p);
	p = NULL;
	return 0;
}
