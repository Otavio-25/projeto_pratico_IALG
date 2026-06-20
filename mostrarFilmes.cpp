#include <iostream>
#include <string>
using namespace std;
#include "filmes.h"
#include "mostrarFilmes.h"
void mostrarFilmes(filmes vetorFilmes[], int qntdFilmes)//opcao 1 : mostar tds os filmes 
{
    cout << "\n=== LISTA DE FILMES ===\n"<<endl;

    for (int i = 0; i < qntdFilmes; i++)
    {
        cout<<"ID: "<< vetorFilmes[i].id <<endl;
        cout<<"Nome: "<< vetorFilmes[i].nome <<endl;
        cout<<"Bilheteria: "<< vetorFilmes[i].bilheteria<<endl;
        cout<<"Nota IMDb: "<< vetorFilmes[i].notaIMDB<<endl;
        cout<<"Duracao: "<< vetorFilmes[i].duracaoMin<< " min" <<endl;
        cout<<"Pais: "<< vetorFilmes[i].paisOrigem <<endl;
        cout<<"------------------------"<<endl;
    }
}