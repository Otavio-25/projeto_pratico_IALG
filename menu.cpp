#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct filmes  //registros do filme
{
    int id;
    string nome;
    double bilheteria;
    float notaIMDB;
    int duracaoMin;
    string paisOrigem;
};


void mostrarFilmes(filmes vetorFilmes[], int qntdFilmes)//opcao 1 : mostar tds os filmes 
{
    cout << "\n=== LISTA DE FILMES ===\n";

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





int main(){

//Nome,Bilheteria,NotaImdb,DuracaoMinutos,PaisOrigem
    int capacidade=100;//o maximo que iremos colocar 
    int qntdFilmes=0;//vamos verificar quantos realemnte foram cadastrados no registros
    char lixo;
    filmes* vetorFilmes = new filmes[capacidade];//

    ifstream entrada("filmes.csv");//onde ele esta 
    if (!entrada.is_open()){//so pra verificar se ele abriu 
        
        cout<<"Erro: Nao foi possivel abrir o arquivo 'filmes.csv'."<<endl;
        delete[] vetorFilmes;
        return 1;
    }

    for(int i=0; i< capacidade; i++){
        qntdFilmes++;
        //ler primeira linha (headers)
        getline(entrada, vetorFilmes[i].nome, ',');
        entrada >> vetorFilmes[i].bilheteria;
        entrada >> lixo;
        entrada >> vetorFilmes[i].notaIMDB;
        entrada >> lixo;
        entrada >> vetorFilmes[i].duracaoMin;
        entrada >> lixo;
        getline(entrada, vetorFilmes[i].paisOrigem);
        vetorFilmes[i].id = qntdFilmes;
    }
    

    int opcao;
    

        cout<<"=================================="<<endl;
        cout<<"        Porjeto Filmes            "<<endl;
        cout<<"=================================="<<endl;
        cout<<"  1 - Mostrar todos os filmes     "<<endl;
        cout<<"  2 - Mostrar intervalo de filmes "<<endl;
        cout<<"  3 - Buscar por nome             "<<endl;
        cout<<"  4 - Buscar por nota IMDb        "<<endl;    
        cout<<"  5 - Inserir filme               "<<endl;    
        cout<<"  6 - Remover filme               "<<endl;
        cout<<"  7 - Ordenar por nome            "<<endl;
        cout<<"  8 - Ordenar por biblioteca      "<<endl;
        cout<<"  9 - Salvar arquivo              "<<endl;
        cout<<"  0 - Sair                        "<<endl;
        cout<<"=================================="<<endl;
        cout<<" Escolha:";
        cin>>opcao;
    
        if (opcao==1)
        {
            mostrarFilmes(vetorFilmes,qntdFilmes);

        }else if (opcao==2){

            /* code */
        }else if (opcao==3){

            /* code */
        }else if (opcao==4){

            /* code */
        }else if (opcao==5){

            /* code */
        }else if (opcao==6){

            /* code */
        }else if (opcao==7){

            /* code */
        }else if (opcao==8){

            /* code */
        }else if (opcao==9){

            /* code */
        }


    
        
    
    
    


    entrada.close();//fecha o arquivo
    delete[] vetorFilmes;//aqui deleta o vetor que criamos na alocaçao dinamica

    return 0;
}