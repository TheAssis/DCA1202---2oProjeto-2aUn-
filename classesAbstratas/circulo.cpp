//circulo.cpp -- Implementações dos métodos da classe Circulo
#include "circulo.h"
#include "reta.h"

Circulo::Circulo() {}   //construtor padrão.

Circulo::Circulo(int _x0, int _y0, int _raio, int _fillmode, char _brush)
{
    x0 = _x0;
    y0 = _y0;
    raio = _raio;
    fillmode = _fillmode;
    brush = _brush;     //o brush é da superclasse FiguraGeometrica.
}

/** @brief Método draw virtualizado da classe Circulo.
 *
 */
void Circulo::draw(Screen& t) {//minhas variaveis estao em x0,y0,raio e fillmode
    t.setBrush(brush);

    int x = 0;
    int y = raio;
    int d = 1 - raio;

    //setando a primeira cruz.)
    t.setPixel(x0+x, y0+y);//(0,R)
    t.setPixel(x0-x, y0-y);//(0,-R)
    t.setPixel(x0-y, y0-x);//(-R,0)
    t.setPixel(x0+y, y0-x);//(R,0)

    if(fillmode == 0) {     //desenha apenas a circunferencia.
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

          t.setPixel(x0+y,y0+x);
          t.setPixel(x0+x,y0+y);
          t.setPixel(x0-x,y0+y);
          t.setPixel(x0-y,y0+x);
          t.setPixel(x0-y,y0-x);
          t.setPixel(x0-x,y0-y);
          t.setPixel(x0+x,y0-y);
          t.setPixel(x0+y,y0-x);
        }


    }

    if (fillmode != 0){
        //descartável.
        Reta eixoX(x0+x, y0+y, x0-x,y0-y, brush);
        eixoX.draw(t);
        Reta eixoY(x0-y,y0-x, x0+y,y0-x, brush);
        eixoY.draw(t);
        Reta diagonal1(x0+x, y0+y, x0-y,y0-x, brush);
        diagonal1.draw(t);
        Reta diagonal2(x0-y, y0-x, x0-x, y0-y, brush);
        diagonal2.draw(t);
        Reta diagonal3(x0-x, y0-y, x0+y, y0-x, brush);
        diagonal3.draw(t);
        Reta diagonal4(x0+y, y0-x, x0+x, y0+y, brush);
        diagonal4.draw(t);


            while(y > x){   //quando os dois forem iguais termino o primeiro octante.
                if(d <= 0){ //VERIFICAR SE VAI DAR CERTO DEPOIS.
                    d = d + 2*x + 3;
                    x = x + 1;
                }
                else{
                    d = d + 2*(x-y) + 5;
                    x = x + 1;
                    y = y - 1;
                }


                Reta primeiroOctatante (x0, y0, x0+y, y0+x, brush);
                primeiroOctatante.draw(t);
                Reta segundoOctatante (x0, y0, x0+x, y0+y, brush);
                segundoOctatante.draw(t);
                Reta terceiroOctatante (x0, y0, x0-x, y0+y, brush);
                terceiroOctatante.draw(t);
                Reta quartoOctatante (x0, y0, x0-y, y0+x, brush);
                quartoOctatante.draw(t);
                Reta quintoOctatante (x0, y0, x0-y, y0-x, brush);
                quintoOctatante.draw(t);
                Reta sextoOctatante (x0, y0, x0-x, y0-y, brush);
                sextoOctatante.draw(t);
                Reta setimoOctatante (x0, y0, x0+x, y0-y, brush);
                setimoOctatante.draw(t);
                Reta oitavoOctatante (x0, y0, x0+y, y0-x, brush);
                oitavoOctatante.draw(t);

                /*t.setPixel(x0+y,y0+x);
                t.setPixel(x0+x,y0+y);
                t.setPixel(x0-x,y0+y);
                t.setPixel(x0-y,y0+x);
                t.setPixel(x0-y,y0-x);
                t.setPixel(x0-x,y0-y);
                t.setPixel(x0+x,y0-y);
                t.setPixel(x0+y,y0-x);*/

            }
    }
}
