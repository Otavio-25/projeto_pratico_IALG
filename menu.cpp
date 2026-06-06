#include <iostream>
#include "menu.h"
#include "mostrarFilmes.h"
#include "filmes.h"
using namespace std;
void mostrarFilmes(filmes vetorFilmes[], int qntdFilmes);
void menu(filmes vetorFilmes[],  int* qntdFilmes){
    

    int opcao;
    
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
        cout<<"  8 - Ordenar por biblioteca      "<<endl;
        cout<<"  9 - Salvar arquivo              "<<endl;
        cout<<"  0 - Sair                        "<<endl;
        cout<<"=================================="<<endl;
        cout<<" Escolha:";
        cin>>opcao;
    
        if (opcao==1)
        {
            mostrarFilmes(vetorFilmes, *qntdFilmes);

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
}