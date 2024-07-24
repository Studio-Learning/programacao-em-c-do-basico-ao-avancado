#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int menu(){
	int op;
	cout<< "menu"<<endl;
	cout << "1- digite o caracte"<<endl;
	cout<< "2- saia do programa"<< endl;
	cin>>op;
	return op;
}

void asc (char cara){
	if ((int)cara>=65 && (int)cara<=90){
		cout<< "caractere maiusculo: " <<cara<<endl;
	}
	else if ((int)cara < 65 || ((int)cara > 90 && (int)cara < 97) || (int)cara > 122){
		cout <<"caractere invalido"<< endl;
		
	}
	else{
		char resp = (int)cara-32;
		cout << "caractere maiusculo: " <<resp<<endl;
	}
}

int main(int argc, char** argv) {
	int op;
	char caractere;
	do{
		op = menu();
		switch(op){
			case 1:
				cout<< "digite um caractere: ";
				cin>> caractere;
			    asc(caractere);
				break;
			case 2:
				cout <<"fim do programa";

				break;
			default:
				cout<< "opcao invalida, tente novamente";
				break;
		}
		// No final do loop
		cout <<endl<< "Pressione Enter para continuar...";
		cin.ignore(); // Limpa o buffer do teclado
		cin.get(); // Espera o usuário pressionar Enter
	}while (op!=2);
	
	return 0;
}
