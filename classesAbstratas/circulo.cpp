//circulo.cpp -- Implementações dos métodos da classe Circulo
#include "circulo.h"

Circulo::Circulo() {}   //construtor padrão.

Circulo::Circulo(int _x0, int _y0, int _raio, int _fillmode, char _brush)
{
    x0 = _x0;
    y0 = _y0;
    raio = _raio;
    fillmode = _fillmode;
    brush = _brush;     //o brush é da superclasse FiguraGeometrica.
}


void Circulo::draw(Screen& t) {//minhas variaveis estao em x0,y0,raio e fillmode
    t.setBrush(brush);

    int x = x0;
    int y = y0 + raio;
    int d = 1 - raio;

    //setando a primeira cruz.
    t.setPixel(x, y);
    t.setPixel(-x,-y);
    t.setPixel(-x,-y);
    t.setPixel(y,-x);

    if(fillmode == 0) {
        while(y > x){   //quando os dois forem iguais termino o primeiro octante.
          if(d < 0){
            d = d + 2*x + 3;
            x = x + 1;
          }
          else{
            d = d + 2*(x-y) + 5;
            x = x + 1;
            y = y - 1;
          }

          t.setPixel(x,y);
          t.setPixel(-x,y);
          t.setPixel(-y,x);
          t.setPixel(-y,-x);
          t.setPixel(-x,-y);
          t.setPixel(x,-y);
          t.setPixel(y,-x);
          t.setPixel(y,x);
        }


    } else {
        while(y > x){   //quando os dois forem iguais termino o primeiro octante.
          if(d == 0){ //VERIFICAR SE VAI DAR CERTO DEPOIS.
            d = d + 2*x + 3;
            x = x + 1;
          }
          else{
            d = d + 2*(x-y) + 5;
            x = x + 1;
            y = y - 1;
          }
        }

        t.setPixel(x,y);
        t.setPixel(-x,y);
        t.setPixel(-y,x);
        t.setPixel(-y,-x);
        t.setPixel(-x,-y);
        t.setPixel(x,-y);
        t.setPixel(y,-x);
        t.setPixel(y,x);
    }
}
