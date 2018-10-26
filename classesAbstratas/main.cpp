#include <iostream>
#include "screen.h"
#include "reta.h"
#include "retangulo.h"

using namespace std;

int main() {
    //testando se está printando.
    Screen tela(10,10);

    tela.setBrush('&');
    tela.setPixel(5,3);

    //cout << tela;

    Reta *reta = new Reta (0, 0, 10, 10, '%');
    Retangulo *ret = new Retangulo (0,0,9,9,0,'!');
    ret->draw(tela);
    reta->draw(tela);
    cout << tela;

    delete reta;
    delete ret;

    return 0;
}
