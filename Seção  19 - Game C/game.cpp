//game.cpp
#include "game.h"
#include <cstdlib> 
#include <ctime>
using namespace std;

int pontos = 0;

void jogar(){
	Calcular calc;
	int dificuldade;
	cout<<"Informa o nivel de dificuldade [1,2,3 ou 4]: ";
	cin>>dificuldade;
	calc.dificuldade=dificuldade;
	
	//gera um int randomico entre 0 e 2
	//0=somar / 1=diminiuir / 2=multiplar,
	calc.operacao = rand()%3;
	if (calc.dificuldade==1){
		//facil
		calc.valor1=rand()%11; //0 a 10
		calc.valor2=rand()%11;
	} else if (calc.dificuldade==2){
		//medio
		calc.valor1=rand()%101; //0 a 100
		calc.valor2=rand()%101; ///0 a 100
	}  else if (calc.dificuldade==3){
		//dificil
		calc.valor1=rand()%1001;
		calc.valor2=rand()%1001;
	} else if (calc.dificuldade==4){
		//ultra dificil
		calc.valor1=rand()%10001;
		calc.valor2=rand()%10001;
	}else {
		//ultra
		calc.valor1=rand()%100001;
		calc.valor2=rand()%100001;
	}
	
	int resultado;
	cout<<"Informe o resultado para a seguinte operação: "<<endl;
	
	//soma
	if (calc.operacao==0){
		cout<<calc.valor1+calc.valor2;
		cout<<"resultado: ";
		cin>>resultado;
		
		if (somar(resultado, calc)){
			pontos+=1;
			cout<<"voce tem "<<pontos<< "ponto(s)"<<endl;
		}
	}//diminuir
	else if (calc.operacao==1){
		cout<<calc.valor1-calc.valor2;
		cout<<"resultado: ";
		cin>>resultado;
		
		if (subtrair(resultado, calc)){
			pontos+=1;
			cout<<"voce tem "<<pontos<< "ponto(s)"<<endl;
		}	
	}//multiplicar
	else if (calc.operacao==2){
		cout<<calc.valor1*calc.valor2;
		cout<<"resultado: ";
		cin>>resultado;
		
		if (multiplicar(resultado, calc)){
			pontos+=1;
			cout<<"voce tem "<<pontos<< "ponto(s)"<<endl;
		}
	} //erro
	else{
		cout<<"operacao invalida!"<<endl;
	}
	
	//recomeçar
	cout<<"deseja recomeça o jogo? [1- sim, 0 - nao]"<<endl;
	int continuar;
	cin>>continuar;
	
	if (continuar){
		jogar();
	}else{
		cout<<"voce finalizou o jogo com "<<pontos<<"pontos"<<endl;
		exit(0);
	}
	
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
	int resultado = calc.valor1+calc.valor2;
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
	int resultado = calc.valor1-calc.valor2;
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
	int resultado = calc.valor1*calc.valor2;
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
