#include <iostream>
#include <string>
#include "inserirFilme.h"
#include "filmes.h"

using namespace std;

void redimensionarVetorFilmes(filmes* &vetorFilmes, int *capacidade);

void inserirFilme(filmes* &vetorFilmes, int *capacidade, int *qntdFilmes) {
    // Se o vetor estiver cheio, chama o redimensionamento automático
    if (*qntdFilmes >= *capacidade) {
        redimensionarVetorFilmes(vetorFilmes, capacidade);
    }

    //OBS - por alocar o novo filme, a -> serve para ir ate o endereco onde o ponteiro aponta

    filmes *novoFilme = new filmes;
    
    cin.ignore(); // Limpa o Enter do teclado para o getline funcionar correto
    cout << endl << "=== INSERIR NOVO FILME ===" << endl;
    
    // Validação do Nome
    do {
        cout << "Nome do filme: ";
        getline(cin, novoFilme->nome);
        if (novoFilme->nome.empty()) {
            cout << "Erro, o nome nao pode ser vazio. Tente novamente!" << endl;
        }
    } while (novoFilme->nome.empty());

    // Validação da Bilheteria
    do {
        cout << "Bilheteria (em milhoes): ";
        cin >> novoFilme->bilheteria;
        if (novoFilme->bilheteria < 0) {
            cout << "Erro, a bilheteria nao pode ser menor que zero. Tente novamente!" << endl;
        }
    } while (novoFilme->bilheteria < 0);

    // Validação da Nota IMDb
    do {
        cout << "Nota IMDb (0.0 a 10.0): ";
        cin >> novoFilme->notaIMDB;
        if (novoFilme->notaIMDB < 0.0 || novoFilme->notaIMDB > 10.0) {
            cout << "Erro, a nota deve estar entre 0.0 e 10.0. Tente novamente!" << endl;
        }
    } while (novoFilme->notaIMDB < 0.0 || novoFilme->notaIMDB > 10.0);

    // Validação da Duração
    do {
        cout << "Duracao (em minutos): ";
        cin >> novoFilme->duracaoMin;
        if (novoFilme->duracaoMin <= 0) {
            cout << "Erro, a duracao deve ser maior que zero. Tente novamente!" << endl;
        }
    } while (novoFilme->duracaoMin <= 0);

    cin.ignore(); // Limpa o Enter do teclado para o getline funcionar correto
    
    // Validação do País de Origem (Não aceita texto vazio)
    do {
        cout << "Pais de origem: ";
        getline(cin, novoFilme->paisOrigem);
        if (novoFilme->paisOrigem.empty()) {
            cout << "Erro, o pais nao pode ser vazio. Tente novamente!" << endl;
        }
    } while (novoFilme->paisOrigem.empty());

    // novo id de onde o filme ficará
    int maiorId = vetorFilmes[0].id;
        for (int i = 1; i < *qntdFilmes; i++) {
            if (vetorFilmes[i].id > maiorId) {
                maiorId = vetorFilmes[i].id;
            }
        }
    novoFilme->id = maiorId + 1;
    
    //adiciona de fato o novo filme no vetor
    vetorFilmes[*qntdFilmes] = *novoFilme;
    (*qntdFilmes)++;

    cout << endl << "Filme '" << novoFilme->nome << "' inserido com sucesso com o ID: " << novoFilme->id << "!" << endl;

    delete novoFilme;
}