#include <iostream>
#include <string>
using namespace std;
#include "filmes.h"
#include "reordenarVetor.h"
void reordenarVetor(filmes* &vetorFilmes, int qntdFilmes, string campo)
{
    filmes valor_pivo;
    int j;
    for (int i = 1; i < qntdFilmes; i++) {
   	 valor_pivo = vetorFilmes[i];
   	 j = i - 1;
     if(campo == "nome"){
         while ((j >= 0) and (valor_pivo.nome < vetorFilmes[j].nome)){
             vetorFilmes[j+1] = vetorFilmes[j];
             j--;
         }
     }else if(campo == "bilheteria"){
        while ((j >= 0) and (valor_pivo.bilheteria < vetorFilmes[j].bilheteria)){
             vetorFilmes[j+1] = vetorFilmes[j];
             j--;
         }
     }else{
        while ((j >= 0) and (valor_pivo.id < vetorFilmes[j].id)){
             vetorFilmes[j+1] = vetorFilmes[j];
             j--;
         }
     }
   	 vetorFilmes[j+1] = valor_pivo;
    }
    if(campo == "id"){
        
        cout << "Vetor reordenado para forma original.";
    }else{
        cout << "Vetor reordenado com base no campo "<<campo<<".";
    }
    cout<<endl;
    
}