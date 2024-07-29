#include <iostream>
#include <stdlib.h>
using namespace std;

struct st_arvore {
    int valor;
    struct st_arvore *sad; // sub arvore direita
    struct st_arvore *sae; // sub arvore esquerda
}; 
typedef struct st_arvore arvore;

arvore* criaArvore() {
    return NULL;
}

int arvoreEstaVazia(arvore* t) {
    return t == NULL;
}

void mostraArvore(arvore* t) {
    cout << "<";
    if (!arvoreEstaVazia(t)) {
        cout << t->valor;
        mostraArvore(t->sae); // Correção: mostrar a subárvore esquerda antes da direita
        mostraArvore(t->sad);
    }
    cout << ">";
}

void insereDadoArvore(arvore** t, int num) {
    if (*t == NULL) {
        *t = (arvore*)malloc(sizeof(arvore));
        (*t)->sae = NULL;
        (*t)->sad = NULL;
        (*t)->valor = num;
    } else {
        if (num < (*t)->valor) {
            insereDadoArvore(&(*t)->sae, num);
        } else if (num > (*t)->valor) {
            insereDadoArvore(&(*t)->sad, num);
        }
    }
}

int estaNaArvore(arvore* t, int num) {
    if (arvoreEstaVazia(t)) {
        return 0;
    }
    return t->valor == num || estaNaArvore(t->sae, num) || estaNaArvore(t->sad, num);
}

void liberaArvore(arvore* t) {
    if (!arvoreEstaVazia(t)) {
        liberaArvore(t->sae);
        liberaArvore(t->sad);
        free(t);
    }
}

int main() {
    arvore* t = criaArvore();
    
    insereDadoArvore(&t, 12);
    insereDadoArvore(&t, 15);
    insereDadoArvore(&t, 10);
    insereDadoArvore(&t, 13);
    
    mostraArvore(t);
    cout << endl;
    
    if (arvoreEstaVazia(t)) {
        cout << "Arvore vazia" << endl;
    } else {
        cout << "Arvore NAO vazia" << endl;
    }
    
    if (estaNaArvore(t, 15)) {
        cout << "Elemento 15 pertence a arvore" << endl;
    } else {
        cout << "Elemento 15 nao pertence a arvore" << endl;
    }
    
    if (estaNaArvore(t, 50)) {
        cout << "Elemento 50 pertence a arvore" << endl;
    } else {
        cout << "Elemento 50 nao pertence a arvore" << endl;
    }
    
    liberaArvore(t);
    
    return 0;
}

