#ifndef PARSER_H
#define PARSER_H

#include <iostream> //as strings existem no escopo do std
#include <string> // para string

using namespace std;

class Parser{
private:
    string caminho = string(); //caminho pro arquivo
public:
    Parser(); //construtor sem argumentos
    Parser(string _caminho);
    void ler_arquivo(string caminho);
};

#endif // PARSER_H
