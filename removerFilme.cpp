#include <iostream>
#include "removerFilme.h"
#include "filmes.h"

using namespace std;

// busca binária para facilitar de encontrar o id
int buscaBinariaId(filmes vetorFilmes[], int inicio, int fim, int idProcurado) {
    if(inicio <= fim) {
        int meio = (inicio + fim) / 2;

        if (vetorFilmes[meio].id == idProcurado) {
            return meio;
        }else if (vetorFilmes[meio].id < idProcurado) {
            return buscaBinariaId(vetorFilmes, meio + 1, fim, idProcurado);
        }
        else {
            return buscaBinariaId(vetorFilmes, inicio, meio - 1, idProcurado);
        }
    }

    // Retorna -1 e não achar
    return -1;
}

void removerFilme(filmes vetorFilmes[], int *qntdFilmes) {
    int idProcurado;
    int indiceEncontrado = -1;

    // Fica no laço até encontrar um índice válido
    while (indiceEncontrado == -1) {
        cout << endl <<"Digite o ID do filme que deseja remover : ";
        cin >> idProcurado;
        // Chama a função de busca binária
        indiceEncontrado = buscaBinariaId(vetorFilmes, 0, *qntdFilmes - 1, idProcurado);

        if (indiceEncontrado == -1) {
            cout << "Erro, filme com ID " << idProcurado << " nao encontrado!" << endl;
        }
    }

    // altera o valor que deseja excluir pelo proximo, e assim por diante;
    for (int i = indiceEncontrado; i < *qntdFilmes - 1; i++) {
        vetorFilmes[i] = vetorFilmes[i + 1];
    }

    
    //nesse caso, se voces preferirem, ele reordena os indices para ficar tudo na sequencia sem "pular" o excluido
    for (int i = indiceEncontrado; i < *qntdFilmes - 1; i++) {
        vetorFilmes[i] = vetorFilmes[i + 1];
        vetorFilmes[i].id = i + 1; 
    }
    

    (*qntdFilmes)--;
    cout << "Filme com ID " << idProcurado << " removido com sucesso!" << endl;
}