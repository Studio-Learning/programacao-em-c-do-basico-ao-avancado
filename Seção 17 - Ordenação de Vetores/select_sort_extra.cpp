//select_sort_extra
#include <iostream>
#include <stdlib.h> 
using namespace std;

//struct com nome, nota do aluno
//ordenar da menor para maior nota
//mostrar o melhor aluno e o pior aluno

struct Aluno {
    int nota;
    char nome[50];
};

// Função para exibir o menu
int menu() {
	cout<< "MENU"<<endl;
    cout << "0 - Sair" << endl;
    cout << "1 - Cadastrar novo aluno" << endl;
    cout << "2 - Imprimir notas ordenadas (crescente e decrescente)" << endl;
    cout << "3 - Melhor e pior aluno" << endl;
    int op;
    cin >> op;
    return op;
}

// Função para adicionar um novo aluno ao array
Aluno* adicionarAluno(Aluno* alunos, int& tamanho) {
    // Aloca um novo array com um tamanho maior
    Aluno* novoArray = (Aluno*)malloc((tamanho + 1) * sizeof(Aluno));
    if (novoArray == NULL) {
        cout << "Falha na alocacao de memoria" << endl;
        return alunos; // Retorna o array antigo se a alocação falhar
    }

    // Copia os alunos antigos para o novo array
    for (int i = 0; i < tamanho; ++i) {
        novoArray[i] = alunos[i];
    }

    // Adiciona o novo aluno
    cout<<endl;
    cout << "Digite o nome: ";
    cin.ignore(); // Para ignorar o caractere de nova linha
    cin.getline(novoArray[tamanho].nome, sizeof(novoArray[tamanho].nome));
    cout << "Digite a nota: ";
    cin >> novoArray[tamanho].nota;

    // Atualiza o tamanho
    ++tamanho;

    // Libera a memória do array antigo
    free(alunos);

    return novoArray;
}

// Função para ordenar os alunos por nota em ordem crescente
void ordenarCrescente(Aluno* alunos, int tamanho) {
    for (int i = 0; i < tamanho - 1; ++i) {
        for (int j = i + 1; j < tamanho; ++j) {
            if (alunos[j].nota < alunos[i].nota) {
                // Troca os alunos 
                Aluno temp = alunos[i];
                alunos[i] = alunos[j];
                alunos[j] = temp;
            }
        }
    }
}

// Função para ordenar os alunos por nota em ordem decrescente
void ordenarDecrescente(Aluno* alunos, int tamanho) {
    for (int i = 0; i < tamanho - 1; ++i) {
        for (int j = i + 1; j < tamanho; ++j) {
            if (alunos[j].nota > alunos[i].nota) {
                // Troca os alunos 
                Aluno temp = alunos[i];
                alunos[i] = alunos[j];
                alunos[j] = temp;
            }
        }
    }
}

// Função para imprimir os alunos em ordem crescente e decrescente
void imprimir(Aluno* alunos, int tamanho) {
    if (tamanho == 0) {
    	cout<<endl;
        cout << "Nao ha alunos para imprimir" << endl;
        cout<<endl;
        return;
    }

    // Ordena e imprime os alunos em ordem crescente
    ordenarCrescente(alunos, tamanho);
    cout<<endl;
    cout << "Ordem crescente:" << endl;
    cout<<endl;
    for (int i = 0; i < tamanho; ++i) {
        cout << "Nome: " << alunos[i].nome << ", Nota: " << alunos[i].nota << endl;
    }

    // Ordena e imprime os alunos em ordem decrescente
    ordenarDecrescente(alunos, tamanho);
    cout<<endl;
    cout << "Ordem decrescente:" << endl;
    cout<<endl;
    for (int i = 0; i < tamanho; ++i) {
        cout << "Nome: " << alunos[i].nome << ", Nota: " << alunos[i].nota << endl;
    }
}

// Função para encontrar e imprimir o melhor e o pior aluno
void piorMelhor(Aluno* alunos, int tamanho) {
    if (tamanho == 0) {
    	cout<<endl;
        cout << "Nao ha alunos para avaliar" << endl;
        cout<<endl;
        return;
    }

    Aluno melhor = alunos[0];
    Aluno pior = alunos[0];

    for (int i = 1; i < tamanho; ++i) {
        if (alunos[i].nota > melhor.nota) {
            melhor = alunos[i];
        }
        if (alunos[i].nota < pior.nota) {
            pior = alunos[i];
        }
    }
	cout<<endl;
    cout << "Melhor aluno: Nome: " << melhor.nome << ", Nota: " << melhor.nota << endl;
    cout<<endl;
    cout << "Pior aluno: Nome: " << pior.nome << ", Nota: " << pior.nota << endl;
    cout<<endl;
}

int main() {
    Aluno* alunos = NULL;
    int tamanho = 0;
    int opcao;

    do {
        opcao = menu();
        switch(opcao) {
            case 0:
                // Sair
                cout<<endl;
                cout << "Fim do programa!" << endl;
                break;
            case 1:
                // Cadastrar novo aluno
                alunos = adicionarAluno(alunos, tamanho);
                break;
            case 2:
                // Imprimir notas ordenadas (crescente e decrescente)
                imprimir(alunos, tamanho);
                break;
            case 3:
                // Melhor e pior aluno
                piorMelhor(alunos, tamanho);
                break;
            default:
                // Opção inválida
                cout<<endl;
                cout << "Opcao invalida, digite novamente" << endl;
                break;
        }
        system("pause");
    } while (opcao != 0);

    // Libera a memória alocada
    free(alunos);

    return 0;
}


