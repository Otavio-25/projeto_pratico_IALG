#include <iostream>
#include <fstream>
#include <string>
#include "filmes.h"
#include <algorithm>
using namespace std;

void menu(filmes vetorFilmes[],  int* qntdFilmes);

void redimensionarVetorFilmes(filmes* &vetorFilmes, int *capacidade){
    int novaCapacidade = *capacidade + 10;
    filmes* vetorFilmesAux = new filmes[novaCapacidade];
    copy(vetorFilmes, vetorFilmes + *capacidade, vetorFilmesAux);
    delete[] vetorFilmes;
    vetorFilmes = vetorFilmesAux;
    *capacidade = novaCapacidade;
}

bool lerCsv(filmes* &vetorFilmes, int *capacidade, int *qntdFilmes){
    char lixo;

    ifstream entrada("filmes.csv");//onde ele esta 
    if (!entrada.is_open()){//so pra verificar se ele abriu 
        
        cout<<"Erro: Nao foi possivel abrir o arquivo 'filmes.csv'."<<endl;
        
        return false;
    }
    for(int i=0; (i < *capacidade) && getline(entrada, vetorFilmes[i].nome, ','); i++){ //ATENÇÃO, TALVEZ O MELHOR SEJA MUDAR A LÓGICA PRA WHILE
        
        (*qntdFilmes)++;
        //ler primeira linha (headers)
        //getline(entrada, vetorFilmes[i].nome, ',');
        entrada >> vetorFilmes[i].bilheteria;
        entrada >> lixo;
        entrada >> vetorFilmes[i].notaIMDB;
        entrada >> lixo;
        entrada >> vetorFilmes[i].duracaoMin;
        entrada >> lixo;
        getline(entrada, vetorFilmes[i].paisOrigem);
        vetorFilmes[i].id = *qntdFilmes;
        if(i == *capacidade - 1){
            redimensionarVetorFilmes(vetorFilmes, capacidade);
        }
    }
    
    entrada.close();
    return true;
}

int main(){
filmes* vetorFilmes = new filmes[40];
int* capacidade = new int(40);
int* tamanho = new int(0);
    lerCsv(vetorFilmes, capacidade, tamanho);
    menu(vetorFilmes, tamanho);
    
    delete[] vetorFilmes;//aqui deleta o vetor que criamos na alocaçao dinamica

    return 0;
}