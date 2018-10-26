#include <iostream>
#include "screen.h"
#include "reta.h"

using namespace std;

int main() {
    //testando se está printando.
    Screen tela(10,10);

    tela.setBrush('&');
    tela.setPixel(9,8);

    //cout << tela;

    Reta *reta = new Reta (0, 0, 10, 10, '%');

    reta->draw(tela);

    cout << tela;

    delete reta;

    return 0;
}
