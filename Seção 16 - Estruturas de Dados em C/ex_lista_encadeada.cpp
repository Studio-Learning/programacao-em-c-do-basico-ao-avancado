#include <iostream>
#include <stdlib.h>
using namespace std;

struct st_no {
    int valor;
    struct st_no *prox;
}; typedef struct st_no no;

// Verifica se a lista está vazia
int vazia(no *le) {
    return (le->prox == NULL);
}

// Inicializa a lista
void inicia(no *le) {
    le->prox = NULL;
}

// Libera a memória alocada para a lista
void libera(no *le) {
    if (!vazia(le)) {
        no *proxNo, *atual;
        atual = le->prox;
        while (atual != NULL) {
            proxNo = atual->prox;
            free(atual);
            atual = proxNo;
        }
        le->prox = NULL;
    }
}

// Exibe os elementos da lista
void exibe(no *le) {
    if (vazia(le)) {
        cout << "A lista está vazia" << endl;
        return;
    }
    no *tmp = le->prox;
    while (tmp != NULL) {
        cout << tmp->valor << endl;
        tmp = tmp->prox;
    }
    cout << endl << endl;
}

// Insere um novo nó no início da lista
void insereInicio(no *le) {
    no *novo = (no*)malloc(sizeof(no));
    if (!novo) {
        cout << "Sem memória" << endl;
        exit(1);
    }
    cout << "Informe o valor: ";
    cin >> novo->valor;

    no *oldHead = le->prox;
    le->prox = novo;
    novo->prox = oldHead;
}

// Insere um novo nó no final da lista
void insereFim(no *le) {
    no *novo = (no*)malloc(sizeof(no));
    if (!novo) {
        cout << "Sem memória" << endl;
        exit(1);
    }
    cout << "Informe o valor: ";
    cin >> novo->valor;
    novo->prox = NULL;

    if (vazia(le)) {
        le->prox = novo;
    } else {
        no *tmp = le->prox;
        while (tmp->prox != NULL) {
            tmp = tmp->prox;
        }
        tmp->prox = novo;
    }
}

// Executa a opção escolhida pelo usuário
void opcao(no *le, int op) {
    switch (op) {
        case 0:
            libera(le);
            break;
        case 1:
            exibe(le);
            break;
        case 2:
            insereInicio(le);
            break;
        case 3:
            insereFim(le);
            break;
        case 4:
            inicia(le);
            break;
        default:
            cout << "Opção inválida" << endl;
    }
}

// Exibe o menu e retorna a opção escolhida
int menu() {
    int opt;

    cout << "Escolha: " << endl;
    cout << "0 - Sair" << endl;
    cout << "1 - Exibir" << endl;
    cout << "2 - Adicionar nó no início" << endl;
    cout << "3 - Adicionar nó no final" << endl;
    cout << "4 - Zerar lista" << endl;
    cout << "Opção: ";

    cin >> opt;
    return opt;
}

int main() {
    no *le = (no*)malloc(sizeof(no));
    if (!le) {
        cout << "Sem memória" << endl;
        return 1;
    }
    inicia(le);

    int opt;
    do {
        opt = menu();
        opcao(le, opt);
    } while (opt);

    free(le);
    return 0;
}




















