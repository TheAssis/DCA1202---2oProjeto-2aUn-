//screen.cpp -- Aqui são implementados os métodos da classe Screen
#include "screen.h"
#include <vector>       //para poder usar vector

using namespace std; //caso contrário tenho que por std:: na ostream!

Screen::Screen(int _nlin,int _ncol) {       //construtor com parâmetros
    nlin = _nlin;
    ncol = _ncol;
    brush = ' ';        //a tela começa em branco quando inicializa.
    mat = vector< vector<char> >(nlin, vector<char>(ncol,brush)); // definindo a matriz tela
}


void Screen::setBrush(char _brush) { //define o caractere a ser printado
    this->brush = _brush;
}


void Screen::setPixel(int x, int y) {
    if(x>=0 && y>=0 && x<ncol && y<nlin){
        mat[x][y] = brush;
    }
}

void Screen::clear(){
    for(int i =0; i<nlin; i++){
        for(int j=0; j<ncol; j++){
            mat[i][j] = ' ';
        }
    }
}



ostream& operator<<(ostream& os, Screen& t) {
    for(int i=0; i<t.nlin; i++) {
        for(int j=0; j<t.ncol; j++) {
            os << t.mat[i][j];
        }
        os << endl;
    }

    return os;
}

