
#ifndef PARSER_H
#define PARSER_H

#include <iostream> //as strings existem no escopo do std
#include <string> // para string
#include <vector> // vetor de figuras geométricas
#include "screen.h"
#include "figurageometrica.h"
using namespace std;

class Parser{
private:
    string caminho = string(); //caminho pro arquivo
    vector < FiguraGeometrica* > figuras ;
public:
    Parser(); //construtor sem argumentos
    Parser(string _caminho);
    void exec(string _caminho);
    void gravar();
};

#endif // PARSER_H
