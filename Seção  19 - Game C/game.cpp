#include <iostream>
#include <stdio.h>
#include <cstdlib> // srand, rand
#include <ctime>   // time

using namespace std;

int pontos = 0; // global

typedef struct {
    int dificuldade;
    int valor1;
    int valor2;
    int operacao;
    int resultado;
} Calcular;

void mostrarInfo(Calcular calc){
    const char* op; // ponteiro para string literal
    
    if (calc.operacao == 0){ 
        op = "Somar";	
    } else if (calc.operacao == 1){
        op = "Subtrair";
    } else if (calc.operacao == 2){
        op = "Multiplicar";
    } else {
        op = "Operacao Invalida";
    }
    
    cout << "Valor 1: " << calc.valor1 << endl;
    cout << "Valor 2: " << calc.valor2 << endl;
    cout << "Dificuldade: " << calc.dificuldade << endl;
    cout << "Operacao: " << op << endl;
}

int somar (int resposta, Calcular calc){
    int resultado = calc.valor1+calc.valor2;
    calc.resultado = resultado;
    int certo = 0; //0 eh erro, 1 eh acerto
    if (resposta == calc.resultado){
        cout<<"Resposta correta"<<endl;
        certo =1;
    } else{
        cout<<"Resposta errada"<<endl;
    }
    cout<<calc.valor1<<"+"<<calc.valor2<<"="<<calc.resultado<<endl;
    return certo;
}

int subtrair (int resposta, Calcular calc){
    int resultado = calc.valor1-calc.valor2;
    calc.resultado = resultado;
    int certo = 0; //0 eh erro, 1 eh acerto
    if (resposta == calc.resultado){
        cout<<"Resposta correta"<<endl;
        certo =1;
    } else{
        cout<<"Resposta errada"<<endl;
    }
    cout<<calc.valor1<<"-"<<calc.valor2<<"="<<calc.resultado<<endl;
    return certo;
}

int multiplicar (int resposta, Calcular calc){
    int resultado = calc.valor1*calc.valor2;
    calc.resultado = resultado;
    int certo = 0; //0 eh erro, 1 eh acerto
    if (resposta == calc.resultado){
        cout<<"Resposta correta"<<endl;
        certo =1;
    } else{
        cout<<"Resposta errada"<<endl;
    }
    cout<<calc.valor1<<"*"<<calc.valor2<<"="<<calc.resultado<<endl;
    return certo;
}

void jogar(){
    Calcular calc;
	
    cout<<"Informe o nivel de dificuldade [1, 2, 3 ou 4]: ";
    cin>>calc.dificuldade;
	
    // gera um inteiro randomico entre 0 e 2
    // 0 = somar, 1 = subtrair, 2 = multiplicar
    calc.operacao = rand()% 3;
	
    if (calc.dificuldade == 1){
        // facil
        calc.valor1 = rand()%11; // 0 a 10
        calc.valor2 = rand()%11;
    } else if(calc.dificuldade == 2){
        // medio
        calc.valor1 = rand()%101; // 0 a 100
        calc.valor2 = rand()%101;
    } else if(calc.dificuldade == 3){
        // dificil
        calc.valor1 = rand()%1001; // 0 a 1000
        calc.valor2 = rand()%1001;
    } else if (calc.dificuldade == 4){
        // insano
        calc.valor1 = rand()%10001; // 0 a 10000
        calc.valor2 = rand()%10001;
    } else{
        cout<<"Dificuldade invalida"<<endl;
    }
	
    int resposta;
    cout<< "Informe o resultado para a seguinte operacao:" <<endl;
	
    // somar
    if (calc.operacao==0){
        cout<<calc.valor1<<"+"<<calc.valor2<<endl;
        cin>>resposta;
        if (somar(resposta, calc)){
            pontos+=1;
            cout<<"voce tem "<<pontos<<" pontos"<<endl;
        }
    }
    // subtrair
    else if(calc.operacao==1){
        cout<<calc.valor1<<"-"<<calc.valor2<<endl;
        cin>>resposta;
        if (subtrair(resposta, calc)){
            pontos+=1;
            cout<<"voce tem "<<pontos<<" pontos"<<endl;
        }	
    }
    // multiplicar
    else if (calc.operacao==2){
        cout<<calc.valor1<<"*"<<calc.valor2<<endl;
        cin>>resposta;
        if (multiplicar(resposta, calc)){
            pontos+=1;
            cout<<"voce tem "<<pontos<<" pontos"<<endl;
        }
    }
    else{
        cout<<"Operacao invalida"<<endl;
    }
	
    cout<<"Deseja continuar jogando? [1- sim / 0 - nao] ";
    int continuar;
    cin>>continuar;
	
    if (continuar == 1){
        jogar();
    }else {
        cout<<"Voce encerrou com "<< pontos<<" pontos"<<endl;
        exit(0);
    }
}

int main(int argc, char** argv) {
    srand (time(NULL));
    jogar();
    return 0;
}
