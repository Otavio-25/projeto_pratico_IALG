#ifndef FILMES_H
#define FILMES_H
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

#endif