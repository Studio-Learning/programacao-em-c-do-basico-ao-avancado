#include "game.h"
#include <cstdlib>  // para rand() e srand()
#include <ctime>    // para time()
#include <iostream>

using namespace std;

int pontos = 0;

void jogar() {
    Calcular calc;
    int dificuldade;

    cout << "Informe o nivel de dificuldade [1,2,3 ou 4]: ";
    cin >> dificuldade;
    calc.dificuldade = dificuldade;

    // Gera operação aleatória: 0 = somar, 1 = subtrair, 2 = multiplicar
    calc.operacao = rand() % 3;

    if (calc.dificuldade == 1) {
        calc.valor1 = rand() % 11;
        calc.valor2 = rand() % 11;
    } else if (calc.dificuldade == 2) {
        calc.valor1 = rand() % 101;
        calc.valor2 = rand() % 101;
    } else if (calc.dificuldade == 3) {
        calc.valor1 = rand() % 1001;
        calc.valor2 = rand() % 1001;
    } else if (calc.dificuldade == 4) {
        calc.valor1 = rand() % 10001;
        calc.valor2 = rand() % 10001;
    } else {
        calc.valor1 = rand() % 100001;
        calc.valor2 = rand() % 100001;
    }

    int resposta;
    cout << "Informe o resultado para a seguinte operacao:" << endl;

    if (calc.operacao == 0) {
        cout << calc.valor1 << " + " << calc.valor2 << endl;
        cout << "Resultado: ";
        cin >> resposta;

        if (somar(resposta, calc)) {
            pontos += 1;
            cout << "Voce tem " << pontos << " ponto(s)." << endl;
        }
    } else if (calc.operacao == 1) {
        cout << calc.valor1 << " - " << calc.valor2 << endl;
        cout << "Resultado: ";
        cin >> resposta;

        if (subtrair(resposta, calc)) {
            pontos += 1;
            cout << "Voce tem " << pontos << " ponto(s)." << endl;
        }
    } else if (calc.operacao == 2) {
        cout << calc.valor1 << " * " << calc.valor2 << endl;
        cout << "Resultado: ";
        cin >> resposta;

        if (multiplicar(resposta, calc)) {
            pontos += 1;
            cout << "Voce tem " << pontos << " ponto(s)." << endl;
        }
    } else {
        cout << "Operacao invalida!" << endl;
    }

    int continuar;
    cout << "Deseja recomecar o jogo? [1 - sim, 0 - nao]: ";
    cin >> continuar;

    if (continuar) {
        jogar();
    } else {
        cout << "Voce finalizou o jogo com " << pontos << " ponto(s)." << endl;
        exit(0);
    }
}

void mostrarInfo(Calcular calc) {
    string operacao;

    if (calc.operacao == 0) {
        operacao = "Somar";
    } else if (calc.operacao == 1) {
        operacao = "Subtrair";
    } else if (calc.operacao == 2) {
        operacao = "Multiplicar";
    } else {
        operacao = "Invalido";
    }

    cout << "Operacao: " << operacao << endl;
    cout << "Valor 1: " << calc.valor1 << endl;
    cout << "Valor 2: " << calc.valor2 << endl;
    cout << "Dificuldade: " << calc.dificuldade << endl;
}

int somar(int resposta, Calcular calc) {
    calc.resultado = calc.valor1 + calc.valor2;

    if (resposta == calc.resultado) {
        cout << "Resposta certa!" << endl;
        cout << calc.valor1 << " + " << calc.valor2 << " = " << calc.resultado << endl;
        return 1;
    } else {
        cout << "Resposta incorreta!" << endl;
        cout << calc.valor1 << " + " << calc.valor2 << " = " << calc.resultado << endl;
        return 0;
    }
}

int subtrair(int resposta, Calcular calc) {
    calc.resultado = calc.valor1 - calc.valor2;

    if (resposta == calc.resultado) {
        cout << "Resposta certa!" << endl;
        cout << calc.valor1 << " - " << calc.valor2 << " = " << calc.resultado << endl;
        return 1;
    } else {
        cout << "Resposta incorreta!" << endl;
        cout << calc.valor1 << " - " << calc.valor2 << " = " << calc.resultado << endl;
        return 0;
    }
}

int multiplicar(int resposta, Calcular calc) {
    calc.resultado = calc.valor1 * calc.valor2;

    if (resposta == calc.resultado) {
        cout << "Resposta certa!" << endl;
        cout << calc.valor1 << " * " << calc.valor2 << " = " << calc.resultado << endl;
        return 1;
    } else {
        cout << "Resposta incorreta!" << endl;
        cout << calc.valor1 << " * " << calc.valor2 << " = " << calc.resultado << endl;
        return 0;
    }
}

