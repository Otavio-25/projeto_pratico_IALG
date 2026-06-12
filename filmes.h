#ifndef FILMES_H
#define FILMES_H
#include <string>
using namespace std;
struct filmes  //registros do filme, propriedades de cada um;
{
    int id;
    string nome;
    double bilheteria;
    float notaIMDB;
    int duracaoMin;
    string paisOrigem;
};

#endif