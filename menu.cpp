#include <iostream>
#include "menu.h"
#include "mostrarFilmes.h"
#include "mostrarIntervalo.h"
#include "inserirFilme.h"
#include "removerFilme.h"
#include "filmes.h"
#include "buscarelemento.h"
#include "reordenarVetor.h"
using namespace std;

void menu(filmes *&vetorFilmes, int *capacidade, int* qntdFilmes){

    int opcao;
    
    do{
        cout<<"=================================="<<endl;
        cout<<"        Projeto Filmes            "<<endl;
        cout<<"=================================="<<endl;
        cout<<"  1 - Mostrar todos os filmes     "<<endl;
        cout<<"  2 - Mostrar intervalo de filmes "<<endl;
        cout<<"  3 - Buscar por nome             "<<endl;
        cout<<"  4 - Buscar por nota IMDb        "<<endl;    
        cout<<"  5 - Inserir filme               "<<endl;    
        cout<<"  6 - Remover filme               "<<endl;
        cout<<"  7 - Ordenar por nome            "<<endl;
        cout<<"  8 - Ordenar por bilheteria      "<<endl;
        cout<<"  9 - Ordenar pelo ID(Ordem original) "<<endl;
        cout<<"  10 - Salvar arquivo              "<<endl;
        cout<<"  0 - Sair                        "<<endl;
        cout<<"=================================="<<endl;
        cout<<" Escolha:";
        cin>>opcao;
    
        if (opcao==1)
        {
            mostrarFilmes(vetorFilmes, *qntdFilmes);

        }else if (opcao==2){
            //imprime intervalo entre dois pontos do vetor
            mostrarIntervaloFilmes(vetorFilmes, *qntdFilmes);

        }else if (opcao==3){

            buscaNome(vetorFilmes,*qntdFilmes);
        }else if (opcao==4){

            buscaNotaIMDb(vetorFilmes , *qntdFilmes);
        }else if (opcao==5){
            // insere um novo filme na ultima(+ 1) posicao do vetor
            inserirFilme(vetorFilmes, capacidade, qntdFilmes);
            
        }else if (opcao==6){
            //remove filme do vetor pelo seu id;
            removerFilme(vetorFilmes, qntdFilmes);

        }else if (opcao==7){
            reordenarVetor(vetorFilmes, *qntdFilmes, "nome");
            /* code */
        }else if (opcao==8){
            reordenarVetor(vetorFilmes, *qntdFilmes, "bilheteria");
            /* code */
        }else if (opcao==9){
            
            reordenarVetor(vetorFilmes, *qntdFilmes, "id");
            /* code */
        }else if(opcao=10){

        }
    }while(opcao != 0);
}