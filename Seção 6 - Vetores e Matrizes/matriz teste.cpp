#include <iostream>
using namespace std;
int main (){
	int num[2][2];
	for (int i=0; i<2; i++){
		for (int j=0; j<2;j++){
			cin>>num[i][j];
		}
	}
	for (int i=0; i<2; i++){
		for (int j=0; j<2;j++){
			cout<<"numeros "<<i<<" "<<j<< " "<<"vale "<<num[i][j]<<endl;
		}
	}
}
