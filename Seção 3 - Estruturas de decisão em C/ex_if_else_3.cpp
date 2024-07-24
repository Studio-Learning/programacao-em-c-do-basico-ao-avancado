//if else 3
#include <iostream>
using namespace std;

int main(){
	float a1,a2,a3,total_aposta;
	float premio;
	float perc1, perc2, perc3, tot_perc;
	float p1, p2, p3;
	
	cout<< "Digite a aposta: ";
	cin>>a1;
	cout<< "Digite a aposta: ";
	cin>>a2;
	cout<< "Digite a aposta: ";
	cin>>a3;
	cout<< "Digite o valor do premio: ";
	cin>>premio;
	
	total_aposta = (a1+a2+a3);
	
	perc1 = (float)(a1/total_aposta);
	perc2 = (float)(a2/total_aposta);
	perc3 = (float)(a3/total_aposta);

	p1 =(float) premio*perc1;
	p2 = (float)premio*perc2;
	p3 = (float)premio*perc3;
	
	cout<< "O primeiro apostador ganhou: "<< p1;
	cout<< "O segundo apostador ganhou: "<< p2;
	cout<< "O terceiro apostador ganhou: "<< p3;
	
}
