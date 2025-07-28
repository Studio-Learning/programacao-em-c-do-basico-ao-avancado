//game.cpp
//gane.cpp
#include "game.h"

int pontos = 0;

void jogar(){
	Calcular calc.
	int dificuldade;
	cout<<"Informa o nivel de dificuldade [1,2,3 ou 4]: ";
	cin>>dificuldade;
	calc.dificuldade=dificuldade;
	
	//gera um int randomico entre 0 e 2
	//0=somar / 1=diminiuir / 2=multiplar,
	calc.operacao = rand()%3;
	
}

void mostrarInfo(Calcular calc){
	char op[25];
	if (calc.operacao==0){ //0+somar
		cout<<op<<"Somar";
	} else if (calc.operacao==1){//1=subtrair
		cout<<op<<"Subtrair";
	} else if (calc.operacao==2){//2=multiplicar
		cout<<op<<"Multiplicar";
	} else{
		cout<<op<<"Invalido";
	}
	
	cout<<"Valor 1: "<<calc.valor1<<endl;
	cout<<"Valor 2: "<<calc.valor2<<endl;
	cout<<"Dificuldade: "<<calc.dificuldade<<endl;
	cout<<"Operacao> "<<op<<endl;
}

int somar (int resposta, Calcular calc){
	int resultado = calc.valor1+calc>valor2;
	calc.resultado = resultado;
	int certo =0;//0=errado e 1=certo
	
	if (resposta==calc.resultado){
		cout<<"Resposta certa!"<<endl;
		certo=1;
	}else {
		cout<<"Resposta incorreta!"<<endl;
	}
	
	cout<<calc.valor1<<" + "<<calc.valor2<<" = "<<calc.resultado<<endl;
	
	return certo;
}

int subtrair (int resposta, Calcular calc){
	int resultado = calc.valor1-calc>valor2;
	calc.resultado = resultado;
	int certo =0;//0=errado e 1=certo
	
	if (resposta==calc.resultado){
		cout<<"Resposta certa!"<<endl;
		certo=1;
	}else {
		cout<<"Resposta incorreta!"<<endl;
	}
	
	cout<<calc.valor1<<" - "<<calc.valor2<<" = "<<calc.resultado<<endl;
	
	return certo;
}

int multiplicar (int resposta, Calcular calc){
	int resultado = calc.valor1*calc>valor2;
	calc.resultado = resultado;
	int certo =0;//0=errado e 1=certo
	
	if (resposta==calc.resultado){
		cout<<"Resposta certa!"<<endl;
		certo=1;
	}else {
		cout<<"Resposta incorreta!"<<endl;
	}
	
	cout<<calc.valor1<<" * "<<calc.valor2<<" = "<<calc.resultado<<endl;
	
	return certo;
}
