#include <iostream>
#include "removerFilme.h"
#include "filmes.h"

using namespace std;

void removerFilme(filmes vetorFilmes[], int *qntdFilmes) {
    int idProcurado;
    int indiceEncontrado = -1;

    // Fica no laço até encontrar um índice válido
    while (indiceEncontrado == -1) {
        cout << endl <<"Digite o ID do filme que deseja remover : ";
        cin >> idProcurado;
        bool parada = false;
        for (int i = 0; i < *qntdFilmes && parada == false; i++) {
            if (vetorFilmes[i].id == idProcurado) {
                indiceEncontrado = i;
                parada =  true;
            }
        }

        if (indiceEncontrado == -1) {
            cout << "Erro, filme com ID " << idProcurado << " nao encontrado!" << endl;
        }
    }
    
    //vai deslocando o resto do vetor para excluir o filme de ID selecionado sem reordenar os IDs
    for (int i = indiceEncontrado; i < *qntdFilmes - 1; i++) {
        vetorFilmes[i] = vetorFilmes[i + 1];
    }

    (*qntdFilmes)--;
    cout << "Filme com ID " << idProcurado << " removido com sucesso!" << endl;
}