

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
    Screen& gravar(Screen& tela_de_gravacao); // usado pra gravar em txt
};

#endif // PARSER_H
