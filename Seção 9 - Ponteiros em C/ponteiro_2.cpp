//ponteiro_2
#include <iostream>
using namespace std;
int main (){
	int a,b;
	cout<<"digite um numero: ";
	cin>>a;
	cout<<"digite um numero: ";
	cin>>b;
	cout<<&a<<endl;
	cout<<&b<<endl;
	if (&a>&b){
		cout<<a;
	} else{
		cout<<b;
	}
	
	return 0;
}
