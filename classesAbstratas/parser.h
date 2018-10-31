#ifndef PARSER_H
#define PARSER_H

#include <iostream> //as strings existem no escopo do std
#include <string> // para string
#include <vector> // vetor de figuras geométricas
#include "screen.h"
#include "figurageometrica.h"
using namespace std;

/** @brief Classe responsável pelo tratamento do arquivo .txt quando passado
 * para leitura e sequência de comandos de desenho na tela.
 */
class Parser{
private:
    /** @brief Caminho para o arquivo .txt
     */
    string caminho = string(); //caminho pro arquivo
    /** @brief array de ponteiros para figuras geométricas.
     */
    vector < FiguraGeometrica* > figuras ;
public:
    /** @brief Construtor padrão.
     */
    Parser(); //construtor sem argumentos
    /** @brief construtor que recebe o caminho para o arquivo direto.
     */
    Parser(string _caminho);
    /** @brief função responsável por executar o parser e, consequentemente
     * o desenho das figuras geométricas na tela.
     */
    void exec(string _caminho);
    /** @brief Método usado para gravar em .txt a saída da tela.
     */
    Screen& gravar(Screen& tela_de_gravacao); // usado pra gravar em txt
};

#endif // PARSER_H
