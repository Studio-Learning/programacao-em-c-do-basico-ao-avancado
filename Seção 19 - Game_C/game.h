//game.h //game.h
#include <iostream>

typedef struct {
	int dificuldade;
	int valor1;
	int valor2;
	int operacao;
	int resultado;
}Calcular;

void jogar();
void mostrarInfo(Calcular calc);
int somar (int resposta, Calcular calc);
int subtrair (int resposta, Calcular calc);
int multiplicar (int resposta, Calcular calc);
