//ex_struct_3
//aula de resolucao de exercicio

#include <iostream>
using namespace std;


struct st_vetor{
	float x,y,z;
}vetores[3];

int main(){
	for (int i=0;i<2;i++){
		cout<< "VETOR "<<i+1<<endl;
		cout<<"x: ";
		cin>> vetores[i].x;
		cout<<"y: ";
		cin>>vetores[i].y;
		cout<<"z: ";
		cin>> vetores[i].z;
	}
	
	vetores[2].x= vetores[0].x+vetores[1].x;
	vetores[2].y= vetores[0].y+vetores[1].y;
	vetores[2].z= vetores[0].z+vetores[1].z;
	
	cout<< "soma de x: "<< vetores[2].x<<endl;
	cout<< "soma de y: "<< vetores[2].y<<endl;
	cout<< "soma de z: "<< vetores[2].z<<endl;
	
	return 0;
}
