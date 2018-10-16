//screen.cpp -- Aqui são implementados os métodos da classe Screen
#include "screen.h"
#include <vector>       //para poder usar vector

Screen::Screen() {       //construtor padrão
    mat = vector< vector<char> >(nlin, vector<char>(ncol,brush)); // definindo a matriz tela
}
void Screen::setBrush(char _brush) {
    brush = _brush;
}
