#include <iostream>
#include <string>
#include <fstream>
#include "filmes.h"

using namespace std;

void salvarCsv(filmes *vetorFilmes, int qntdfilmes){

    ofstream saida ("filmes.csv");

    if (!saida.is_open())
    {
        cout<<"Erro ao abrir o arquivo."<<endl;
        return;
    }
    

    for (int i = 0; i < qntdfilmes; i++)
    {
        saida<< vetorFilmes[i].nome<<","
        <<vetorFilmes[i].bilheteria<<","
        <<vetorFilmes[i].notaIMDB<<","
        <<vetorFilmes[i].duracaoMin<<","
        <<vetorFilmes[i].paisOrigem<<endl;
    }
    
    saida.close();
}