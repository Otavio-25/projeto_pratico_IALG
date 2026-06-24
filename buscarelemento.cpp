#include <iostream>
#include <string>
#include <cctype>
#include "filmes.h"
#include "mostrarFilmes.h"

using namespace std;

string paraMinuscula(string procurado){

    for (int j = 0; j < procurado.size(); j++)
    {
        procurado[j] = tolower(procurado[j]);//muda pra minuscula
    }

    return procurado;
}

void buscaNome(filmes vetorFilmes[], int qntdFilmes){

    cout<<"===================================="<<endl;
    string procurado;
    cout<<"Qual o filme : ";

    cin.ignore();
    getline(cin,procurado);

    while (procurado.empty())
    {
        cout<<"Digite Novamente: "<<endl;
        getline(cin,procurado);
    }
    
    
    cout<<endl;

    procurado = paraMinuscula(procurado);//chamo a funçao pra mudar o procurado pra minuscula;
    

    bool encontrou=false;
    for (int i = 0; i < qntdFilmes; i++)
    {
        string Nomeauxiliar=vetorFilmes[i].nome;//criei um auxiliar para nao mudar o jeito da saida , quando mudar para minuscula
        Nomeauxiliar= paraMinuscula(vetorFilmes[i].nome);//jogo pra minuscula (agr tudo ta em minusculo , percebeu ?)

        //agr eu vou procurar em determinado tamanho do procurado, pra se caso ele achar algum nome associado ao procurado
        if ( Nomeauxiliar.substr( 0,procurado.size() )  == procurado)//cmc procurando do 0 ate o tamanho do procurado
        {
            cout<<"ID: "<< vetorFilmes[i].id <<endl;
            cout<<"Nome: "<< vetorFilmes[i].nome <<endl;
            cout<<"Bilheteria: "<< vetorFilmes[i].bilheteria<<endl;
            cout<<"Nota IMDb: "<< vetorFilmes[i].notaIMDB<<endl;
            cout<<"Duracao: "<< vetorFilmes[i].duracaoMin<< " min" <<endl;
            cout<<"Pais: "<< vetorFilmes[i].paisOrigem <<endl;
            cout<<"------------------------"<<endl;
            encontrou=true;
        }
        
    }
    
    if (!encontrou)
    {
        cout<<"Filme nao encontrado !"<<endl;
    }
    


}


void buscaNotaIMDb(filmes vetorFilmes[] , int qntdFilmes){

    cout<<" Nota Busca : ";
    float notaImdb;
    cin>>notaImdb;

    bool encontrou=false;
    for (int i = 0; i < qntdFilmes; i++)
    {
        if (vetorFilmes[i].notaIMDB  == notaImdb)
        {
            cout<<"ID: "<< vetorFilmes[i].id <<endl;
            cout<<"Nome: "<< vetorFilmes[i].nome <<endl;
            cout<<"Bilheteria: "<< vetorFilmes[i].bilheteria<<endl;
            cout<<"Nota IMDb: "<< vetorFilmes[i].notaIMDB<<endl;
            cout<<"Duracao: "<< vetorFilmes[i].duracaoMin<< " min" <<endl;
            cout<<"Pais: "<< vetorFilmes[i].paisOrigem <<endl;
            cout<<"------------------------"<<endl;
            encontrou=true;
        }
        
    }
        
    if (!encontrou)
    {
        cout<<"Filme nao encontrado !"<<endl;
    }
    


}

