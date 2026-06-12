#include <iostream>
#include "mostrarIntervalo.h"
#include "filmes.h"

using namespace std;

void mostrarIntervaloFilmes(filmes vetorFilmes[], int qntdFilmes) {
    int inicio, fim;
    bool parada = false;
    cout << endl << "Digite o indice inicial (0 a " << qntdFilmes - 1 << "): ";
    cin >> inicio;
    cout << "Digite o indice final (0 a " << qntdFilmes - 1 << "): ";
    cin >> fim;
    while(parada == false){
        if (inicio < 0 || fim >= qntdFilmes || inicio > fim) {
            cout << "Intervalo invalido, digite um novo intervalo válido!" << endl;
            cout << endl << "Digite o novo indice inicial (0 a " << qntdFilmes - 1 << "): ";
            cin >> inicio;
            cout << "Digite o novo indice final (0 a " << qntdFilmes - 1 << "): ";
            cin >> fim;
        }else{
            parada = true;
        }
    }

    cout << endl << "=== EXIBINDO INTERVALO DE " << inicio << " A " << fim << " ===" << endl;
    for (int i = inicio; i <= fim; i++) {
        cout<<"ID: "<< vetorFilmes[i].id <<endl;
        cout<<"Nome: "<< vetorFilmes[i].nome <<endl;
        cout<<"Bilheteria: "<< vetorFilmes[i].bilheteria<<endl;
        cout<<"Nota IMDb: "<< vetorFilmes[i].notaIMDB<<endl;
        cout<<"Duracao: "<< vetorFilmes[i].duracaoMin<< " min" <<endl;
        cout<<"Pais: "<< vetorFilmes[i].paisOrigem <<endl;
        cout<<"------------------------"<<endl;
    }
}