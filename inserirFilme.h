#ifndef INSERIR_FILME_H
#define INSERIR_FILME_H

#include "filmes.h"

// Precisa receber por referência (&) para o caso de redimensionar o vetor original
void inserirFilme(filmes* &vetorFilmes, int *capacidade, int *qntdFilmes);

#endif