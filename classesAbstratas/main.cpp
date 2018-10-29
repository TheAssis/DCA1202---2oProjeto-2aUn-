#include <iostream>
#include "screen.h"
#include "reta.h"
#include "retangulo.h"
#include "circulo.h"
#include "parser.h"

using namespace std;

int main() {
    //testando se está printando.
    Screen tela(20,20);

    tela.setBrush('&');
    tela.setPixel(0,1);

    //cout << tela;

    Retangulo *ret = new Retangulo (0,2,5,5,10,'*');
    ret->draw(tela);

    Reta *reta = new Reta (0, 0, 10, 10, '%');
    reta->draw(tela);

    Circulo *circulizinho = new Circulo (0,4,5,20,'$');
    circulizinho->draw(tela);

    cout << tela;

    delete reta;
    delete ret;

    Parser leitor;
    leitor.exec("C:\\Users\\SALA DE AULA\\Documents\\Assis\\teste.txt");

    return 0;
}
