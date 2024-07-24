//ponteiro_4
#include <iostream>
using namespace std;

int main(){
	//variaveis comuns
	int a=1;
	float b=2.5;
	char c= 'a';
	
	//antes
	cout<<"valor de a = "<<a<<endl;
	cout<<"valor de b = "<<b<<endl;
	cout<<"valor de c = "<<c<<endl;
		
	//ponteiros
	int *pa = &a;
	float *pb = &b;
	char *pc = &c;
	
	*pa=2;
	*pb=3.5;
	*pc= 'b';
	
	//depois
	cout<<"valor de a = "<<a<<endl;
	cout<<"valor de b = "<<b<<endl;
	cout<<"valor de c = "<<c<<endl;
	
	return 0;
}
