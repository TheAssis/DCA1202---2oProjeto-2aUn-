#include <iostream>
#include "screen.h"
#include "reta.h"

using namespace std;

int main() {
    //testando se está printando.
    Screen tela(20,60);

    tela.setBrush('&');
    tela.setPixel(3,3);

    cout << tela;

    Reta *reta = new Reta (0, 0, 20, 20, '&');

    reta->draw(tela);

    cout << tela;

    delete reta;


    return 0;
}
